// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "OverheadWIdget.generated.h"

/**
 * 
 */
UCLASS()
class FIRSTMPGAME_API UOverheadWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(meta = (BindWidget))
	class UTextBlock* TextNetworkRole;

	UPROPERTY(meta = (BindWidget))
	class UVerticalBox* VerticalBox;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* TextSteamName;

	UFUNCTION(BlueprintCallable)
	void ShowPlayerNetRole(APawn* InPawn); 
	
	UFUNCTION(BlueprintCallable)
	void ShowPlayerSteamName(APawn* InPawn);

protected:
	virtual void OnLevelRemovedFromWorld(ULevel* InLevel, UWorld* InWorld);

private:

};
