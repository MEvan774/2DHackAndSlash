# 2DHackAndSlash

A melee combat prototype built in Unreal Engine 5 featuring a data-driven combo system, input buffering, animation-event-driven hitboxes, air attacks, and hit reactions — all implemented in Blueprint using PaperZD for 2D animation in a constrained 3D space.

## Overview

This project demonstrates a complete 2D hack-and-slash combat loop: the player chains attacks through an input-buffered combo system, launches enemies into the air, and juggles them with directional attacks. Hit detection is handled through box traces fired during animation event windows, and enemies react with GAS-driven abilities (stun, pop-up, fly-down, knockback) depending on attack type. Hit stop, camera shake, and sprite shake sell the impact.

Built on the [Side Scroller Template (SST)](https://www.unrealengine.com/marketplace/en-US/product/side-scroller-template-2d-movement-camera-starter-kit) plugin for 2D character movement and camera, with PaperZD handling flipbook-based animation state machines.

## How It Works

### 1. Input Handling & Attack Initiation

The attack graph in `BP_MainCharacter` listens for left mouse button input. Two branches determine which attack fires:

- **W key not held + grounded**: normal ground attack
- **W key held + grounded**: up-attack / launcher variant

If the player is not already attacking, the `IsAttacking` flag is set, movement and turn input are disabled on the `SSTCharacterMovementComponent`, and `AC_CombatComp::OnAttacking` is called with an input action enum (`NormalAttack` or `UpAttack`) and a reference to the character movement component.

If the player is already mid-attack, the input is queued by incrementing `InputBufferAmount` on the combat component.

### 2. Combat Component (`AC_CombatComp`)

An actor component that manages the attack lifecycle. On BeginPlay it caches the owner's `PaperZDAnimationComponent` and `PaperFlipbookComponent`.

**`OnAttacking` event** receives the input action enum and character movement reference. It checks `IsMovingOnGround` to optionally lock movement input, then switches on the enum:

| Input Action | Combo Source |
|---|---|
| NormalAttack | `DAWEP.ComboA` (array of PaperZDAnimSequences from the weapon data asset) |
| UpAttack | Single-element array from `DAWEP.UpAttack` |

The selected array is passed into the `ComboCounter2D` macro. An input buffer check (`InputBufferAmount <= 0`) determines whether to reset the buffer or decrement-and-continue for follow-up attacks.

### 3. ComboCounter2D Macro

A reusable macro graph that cycles through a combo sequence:

1. Validates the weapon data asset (`DAWEP`) via `IsValid`
2. Checks if `AttackNum <= Array.Length + 1` — still within combo range
3. If valid: indexes into the sequence array at `AttackNum`, calls `SetAttackSequence` on the owner via the `BPI_AttackValues` interface (which sets the anim sequence on the PaperZD AnimBP), then calls `JumpToNode("Attacking")` to transition the anim state machine
4. Increments `AttackNum` for the next hit in the chain
5. If out of range: combo ends naturally

### 4. Animation Events (BPI_AttackValues Interface)

The animation Blueprint fires interface events at specific frames to control combat timing:

| Event | Purpose |
|---|---|
| `AttackWindow` | Opens the hit detection window — fires the box trace, applies damage, spawns VFX/SFX |
| `FollowUpWindow` | Checks the input buffer for queued attacks and chains the next combo hit |
| `AttackEnd` | Re-enables movement/turn input, resets `IsAttacking`, clears state |
| `DurationEnd` | Marks the end of the full attack duration |
| `SetAttackSequence` | Sets the current animation sequence on the AnimBP |
| `ApplyAttackType` | Called on the hit actor via interface — passes the attack type enum and hit stop duration |

### 5. Hit Detection

During `AttackWindow`, a `BoxTraceSingle` fires forward from the character's position (actor location + actor rotation forward vector × 90 units). The trace uses a custom trace channel (`TraceTypeQuery3`) with a half-size of `(80, 10, 45)`.

On hit:
- The hit actor is validated via `IsValid` and added to an `ActorsHit` array using `AddUnique` to prevent duplicate hits per swing
- `ApplyAttackType` is called on the hit actor via the BPI interface, passing the attack type enum
- `ApplyDamage` deals damage using the `Damage Value` variable (converted from int to float)
- `PlaySoundAtLocation` plays an impact sound
- `SpawnSystemAtLocation` spawns a Niagara particle effect at the actor's location
- A `DoOnce` gate triggers `StartHitStop` and `PlayWorldCameraShake` (using `CS_Impact`) — these only fire once per attack swing

### 6. Hit Stop System

`StartHitStop` sets `CustomTimeDilation` to `0.001` for a configurable duration (passed per-attack from the animation event data), then restores it. This creates the signature freeze-frame impact feel. Both the attacker and the hit enemy run their own hit stop.

### 7. Air Attack System (`ApplyAirAttack`)

Called when the player initiates an attack while W is held. If the character is not grounded:

1. Disables turn input on `SSTCharacterMovementComponent`
2. Saves the current `BrakingDecelerationFalling` to a local variable for later restoration
3. Sets `BrakingDecelerationFalling` and `FallingLateralFriction` to 0 — freezing aerial drift
4. Sets movement mode to `MOVE_Falling`
5. Zeroes out velocity — suspending the character mid-air for the attack

After the attack ends, falling physics are restored. A ground check on `AttackEnd` determines whether to set movement mode to falling (for continued air state) or let the character land normally.

### 8. Enemy Reactions (`TestEnemy`)

**Damage reception**: `ReceiveAnyDamage` triggers `AC_CombatComp::OnSelfDamaged`, which calls `JumpToNode("Damaged")` on the enemy's PaperZD anim state machine. Then `StartHitStop` freezes the enemy (time dilation `0.001`, duration `0.2s`).

**Sprite shake**: A looping timer (`PawnShake`, every `0.05s`) drives a `FlipFlop` macro that alternates the PaperFlipbook's relative X position between `+10` and `-10` multiplied by a timeline curve value. When the `HitStop` timeline finishes, the timer is cleared and the sprite resets to origin. This creates a rapid vibration effect on hit.

**Attack type reactions**: The `ApplyAttackType` interface event switches on `Enum_AttackType`:

| Attack Type | Reaction |
|---|---|
| **Stun** | If grounded: normal stun. If airborne: activates `GA_StunAir` (keeps enemy stunned in air) |
| **PopUp** | Activates `GA_PopUp` — launches the enemy upward |
| **FlyDown** | Activates `GA_FlyDown` — slams the enemy downward |
| **KnockBack** | Activates `GA_FlyBack`, cancels current abilities via `InputCancel`, then `LaunchCharacter` with a directional velocity (enemy→player direction × -1700 + Z:300) |

**HP check**: `CheckHP` is called after the sprite shake completes to evaluate whether the enemy should die.

### 9. Weapon Data Asset (`PDA_Weapon`)

A `PrimaryDataAsset` Blueprint (`PDA_Weapon`) that holds:
- `ComboA`: array of `PaperZDAnimSequence` references for the normal attack combo chain
- `UpAttack`: a single `PaperZDAnimSequence` for the launcher/up-attack

The combat component references this via the `DAWEP` variable, making the system weapon-swappable by changing the data asset reference.

## Project Structure

```
Game/
├── Blueprints/
│   ├── BP_MainCharacter          # Player character with Attack event graph
│   ├── AC_CombatComp             # Combat component (combo, hit detection, anim control)
│   │   └── ComboCounter2D        # Macro graph for cycling combo sequences
│   ├── Anim/
│   │   ├── BPI_AttackValues      # Blueprint Interface (attack events)
│   │   ├── Enum_AttackType       # Stun, PopUp, FlyDown, KnockBack
│   │   └── AnimBP_TempPlayer     # PaperZD animation blueprint
│   └── CS_Impact                 # Camera shake blueprint
├── Characters/
│   ├── TempCharacter/            # Player flipbook sprites and anim sequences
│   ├── TestEnemy                 # Enemy blueprint with damage reactions
│   ├── PDA_Weapon                # Weapon data asset (combo arrays)
│   ├── GA_PopUp                  # Gameplay Ability: launch enemy up
│   ├── GA_FlyDown                # Gameplay Ability: slam enemy down
│   ├── GA_FlyBack                # Gameplay Ability: knockback
│   └── GA_StunAir                # Gameplay Ability: air stun
└── Input/
    └── Actions/
        └── Enum_InputActions     # NormalAttack, UpAttack
```

## Key Features

- **Data-driven combo system** — weapon data assets define attack sequences, making it easy to add new weapons with different combo chains
- **Input buffering** — queued inputs during active attacks chain seamlessly into follow-ups during the animation's follow-up window
- **Animation-event-driven hitboxes** — box traces fire only during designated animation frames, not on button press
- **Air combat** — aerial attacks freeze momentum and suspend the character mid-air; ground detection restores physics on landing
- **Hit stop & camera shake** — configurable per-attack time dilation freeze and world camera shake on impact
- **Enemy hit reactions via GAS** — four distinct reaction types (stun, pop-up, fly-down, knockback) driven by Gameplay Abilities
- **Sprite shake on hit** — timeline-driven rapid position oscillation on the enemy's flipbook component
- **Reusable combat component** — `AC_CombatComp` works on any actor with a PaperZD animation component, shared between player and enemies

## Tech Stack

- **Unreal Engine 5**
- **[Side Scroller Template (SST)](https://www.unrealengine.com/marketplace/en-US/product/side-scroller-template-2d-movement-camera-starter-kit)** — 2D movement, camera, and character controller
- **PaperZD** — 2D flipbook animation state machines and notify system
- **Paper2D** — Flipbook rendering and sprite components
- **Gameplay Ability System (GAS)** — Enemy hit reactions and ability activation
- **Niagara** — Impact particle effects

## Status

This is a work-in-progress combat foundation, not a finished game or prototype. There is one weapon, a single test enemy, and no game loop — the focus is entirely on building out the core combat architecture. That said, the underlying systems (data-driven combos, input buffering, animation-event hitboxes, GAS-based reactions) are designed to scale: adding new weapons is a matter of creating a new `PDA_Weapon` data asset, new attack types extend through `Enum_AttackType` and corresponding Gameplay Abilities, and the reusable combat component can be dropped onto any actor with a PaperZD animation setup.

## License

See repository for license details.
