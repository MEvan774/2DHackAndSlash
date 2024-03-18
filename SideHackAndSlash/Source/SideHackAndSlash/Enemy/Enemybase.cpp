// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemybase.h"

// Sets default values
AEnemybase::AEnemybase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CurrentHP = MaxHP;

}

// Called when the game starts or when spawned
void AEnemybase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEnemybase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AEnemybase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

