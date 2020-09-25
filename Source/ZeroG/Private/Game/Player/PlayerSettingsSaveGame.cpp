// Fill out your copyright notice in the Description page of Project Settings.


#include "Game/Player/PlayerSettingsSaveGame.h"
#include "Net/UnrealNetwork.h"
#include "Library/ZGStructLibrary.h"

UPlayerSettingsSaveGame::UPlayerSettingsSaveGame()
{
	//bReplicates = true;
}

//void UPlayerSettingsSaveGame::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
//{
//	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
//
//	DOREPLIFETIME(FPlayerInfo, SavedPlayerInfo);
//}