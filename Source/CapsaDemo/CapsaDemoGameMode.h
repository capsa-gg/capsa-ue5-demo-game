// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "CapsaDemoGameMode.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(LogCapsaDemoGameMode, Log, All);

UCLASS(minimalapi)
class ACapsaDemoGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ACapsaDemoGameMode();

	virtual void PreLogin(const FString& Options, const FString& Address, const FUniqueNetIdRepl& UniqueId, FString& ErrorMessage) override;
};



