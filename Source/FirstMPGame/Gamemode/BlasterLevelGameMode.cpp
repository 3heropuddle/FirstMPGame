// Fill out your copyright notice in the Description page of Project Settings.


#include "BlasterLevelGameMode.h"

void ABlasterLevelGameMode::PostLogin(APlayerController* NewPlayer)
{
	Super::PostLogin(NewPlayer);

	UWorld* World = GetWorld();
	if (World) {
		if (NewPlayer) {
			FInputModeGameOnly InputDataMode;
			NewPlayer->SetInputMode(InputDataMode);
			NewPlayer->SetShowMouseCursor(false);
		}
	}
}
