// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "DDP_Widget.generated.h"

/**
 * 
 */
UCLASS()
class DOOMSDAYPENGUINS_API UDDP_Widget : public UUserWidget
{
	GENERATED_BODY()
		UPROPERTY(meta = (BindWidget))
		class UButton* Main_Menu;
	UPROPERTY(meta = (BindWidget))
	UButton* Settings;
	UPROPERTY(meta = (BindWidget))
	UButton* Quit;
	UPROPERTY(meta = (BindWidget))
	class UCanvas* StartMenu;

};
