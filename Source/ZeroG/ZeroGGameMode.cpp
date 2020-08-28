// Copyright Epic Games, Inc. All Rights Reserved.

#include "ZeroGGameMode.h"
#include "ZeroGCharacter.h"
#include "UObject/ConstructorHelpers.h"

AZeroGGameMode::AZeroGGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
