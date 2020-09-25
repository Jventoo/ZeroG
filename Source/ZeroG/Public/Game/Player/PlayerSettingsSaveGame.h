// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Library/ZGStructLibrary.h"

#include "GameFramework/SaveGame.h"
#include "PlayerSettingsSaveGame.generated.h"

/**
 * 
 */
UCLASS()
class ZEROG_API UPlayerSettingsSaveGame : public USaveGame
{
	GENERATED_BODY()

public:
	/*UPROPERTY(VisibleAnywhere, Replicated, Category = "Player")
		FPlayerInfo SavedPlayerInfo;*/

	UPlayerSettingsSaveGame();

	//virtual void GetLifetimeReplicatedProps(TArray< class FLifetimeProperty >& OutLifetimeProps) const override;
};
