// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "ZGStructLibrary.generated.h"

class UTexture2D;
class ACharacter;

USTRUCT(BlueprintType)
struct FMapData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 MapID = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FText MapDisplayName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FName MapFileName = TEXT("{FILE}");

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UTexture2D* MapThumbnail = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<int32> AvailableTimes;
};

USTRUCT(BlueprintType)
struct FPlayerInfo
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FText PlayerName = INVTEXT("{PLAYERNAME}");

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UTexture2D* PlayerImage = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TSubclassOf<ACharacter> PlayerCharacter = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bReadyStatus = false;

};