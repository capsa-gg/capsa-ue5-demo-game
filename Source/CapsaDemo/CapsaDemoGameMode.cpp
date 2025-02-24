// Copyright Epic Games, Inc. All Rights Reserved.

#include "CapsaDemoGameMode.h"

#include "CapsaCoreSubsystem.h"
#include "UObject/ConstructorHelpers.h"

DEFINE_LOG_CATEGORY(LogCapsaDemoGameMode);

ACapsaDemoGameMode::ACapsaDemoGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

void ACapsaDemoGameMode::PreLogin( const FString& Options, const FString& Address, const FUniqueNetIdRepl& UniqueId, FString& ErrorMessage )
{
	Super::PreLogin( Options, Address, UniqueId, ErrorMessage );

	UCapsaCoreSubsystem* CapsaCoreSubsystem = GEngine->GetEngineSubsystem<UCapsaCoreSubsystem>();
	if( CapsaCoreSubsystem == nullptr )
	{
		UE_LOG( LogCapsaDemoGameMode, Error, TEXT("ACapsaDemoGameMode::PreLogin | CapsaCoreSubsystem is nullptr") );
		return;
	}

	CapsaCoreSubsystem->RegisterMetadataString( TEXT("JoinedPlayerAddress"), Address );
}
