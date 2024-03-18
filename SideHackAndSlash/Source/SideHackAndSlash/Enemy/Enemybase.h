// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Enemybase.generated.h"

UENUM(BlueprintType)
enum class EEnemyStates : uint8
{
	State_Idle UMETA(DisplayName = "Idle"),
	State_Aggro UMETA(DisplayName = "Aggro"),
	State_AggroIdle UMETA(DisplayName = "AggroIdle"),
	State_Attack UMETA(DisplayName = "Attack"),
	State_Stun UMETA(DisplayName = "Stun"),
	State_FlyBack UMETA(DisplayName = "FlyBack"),
	State_KnockDown UMETA(DisplayName = "KnockDown"),
	State_PopUp UMETA(DisplayName = "PopUp")
};

UCLASS(config = Game)
class SIDEHACKANDSLASH_API AEnemybase : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AEnemybase();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "EnemyBehaviour")
	EEnemyStates CurrentState;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "State");
	int32 MaxHP;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "State");
	int32 CurrentHP;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
