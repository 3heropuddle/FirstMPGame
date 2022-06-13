// Copyright Epic Games, Inc. All Rights Reserved.

#include "FirstMPGameGameMode.h"
#include "FirstMPGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFirstMPGameGameMode::AFirstMPGameGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Blueprint/Character/BP_BlasterCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}