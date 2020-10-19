// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "ALSV4_CPP/Public/Character/ALSCharacter.h"
#include "ZeroGCharacter.generated.h"

UCLASS(config=Game)
class AZeroGCharacter : public AALSCharacter
{
	GENERATED_BODY()

public:
	AZeroGCharacter(const FObjectInitializer& ObjectInitializer);
};

