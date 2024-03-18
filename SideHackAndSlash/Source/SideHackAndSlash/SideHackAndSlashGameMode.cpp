// Copyright Epic Games, Inc. All Rights Reserved.

#include "SideHackAndSlashGameMode.h"
#include "SideHackAndSlashCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASideHackAndSlashGameMode::ASideHackAndSlashGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
