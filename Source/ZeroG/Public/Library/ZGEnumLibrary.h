// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "ZGEnumLibrary.generated.h"

template <typename Enum>
static FORCEINLINE int32 GetEnumerationIndex(const Enum InVal)
{
	return StaticEnum<Enum>()->GetIndexByValue(static_cast<int64>(InVal));
}

template <typename Enum>
static FORCEINLINE FString GetEnumerationToString(const Enum InVal)
{
	return StaticEnum<Enum>()->GetNameStringByValue(static_cast<int64>(InVal));
}


UENUM(BlueprintType)
enum class EClassTypes : uint8
{
	Base,
	Pointman,
	Heavy,
	Recon,
	Support
};

UENUM(BlueprintType)
enum class EServerTypes : uint8
{
	LAN,
	Internet
};