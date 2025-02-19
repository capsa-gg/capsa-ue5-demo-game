// Copyright Epic Games, Inc. All Rights Reserved.

#include "CapsaDemoGameMode.h"
#include "CapsaDemoCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACapsaDemoGameMode::ACapsaDemoGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
