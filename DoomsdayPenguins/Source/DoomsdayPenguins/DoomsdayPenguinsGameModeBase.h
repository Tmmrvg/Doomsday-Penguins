// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "DoomsdayPenguinsGameModeBase.generated.h"

class UUserWidget;
class AGoal;
class UMySaveGame;
/**
 * 
 */
UCLASS()
class DOOMSDAYPENGUINS_API ADoomsdayPenguinsGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
public:
	ADoomsdayPenguinsGameModeBase();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "SaveGame")
		TSubclassOf<UMySaveGame> SaveGame_BP;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Goal")
		TSubclassOf<AGoal> BP_Goal;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Widget")
		TSubclassOf<UUserWidget> Widget_BP;

	UFUNCTION(BlueprintCallable)
	void Restart();

	UFUNCTION(BlueprintCallable)
		void SaveGame();

	UFUNCTION(BlueprintCallable)
		void LoadGame();

	

	
};
