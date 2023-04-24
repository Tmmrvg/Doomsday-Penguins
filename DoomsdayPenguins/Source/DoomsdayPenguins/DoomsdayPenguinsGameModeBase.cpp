// Copyright Epic Games, Inc. All Rights Reserved.


#include "DoomsdayPenguinsGameModeBase.h"
#include "Kismet/GameplayStatics.h"
#include "MySaveGame.h"
#include "Penguin.h"


ADoomsdayPenguinsGameModeBase::ADoomsdayPenguinsGameModeBase()
{
	PrimaryActorTick.bCanEverTick = true;
	
}

void ADoomsdayPenguinsGameModeBase::BeginPlay()
{
	Super::BeginPlay();
}

void ADoomsdayPenguinsGameModeBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Restart();
	
	
}

void ADoomsdayPenguinsGameModeBase::Restart()
{
	/*if (const APlayerController* pc = GetWorld()->GetFirstPlayerController())
	{
		if (APenguin* Player = Cast<APenguin>(pc->GetPawn()))
		{
			if (GameWon)
			{
				
				GameWon = false;
				
				Player->SetActorLocation((FVector(0, 0, Player->GetActorLocation().Z)));
			}
			else if (Player->GameOver)
			{
				Player->SetActorLocation((FVector(0, 0, Player->GetActorLocation().Z)));
				Player->GameOver = false;

				
				

			}
		}
	}*/
}
void ADoomsdayPenguinsGameModeBase::SaveGame()
{
	if (UGameplayStatics::DoesSaveGameExist(FString("Save1"), 0)) // Save Name, UserIndex
	{
		USaveGame* save = UGameplayStatics::LoadGameFromSlot(FString("Save1"), 0);
		UMySaveGame* mySave = Cast<UMySaveGame>(save);

		ACharacter* character = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);
		if (character == nullptr) return;

		APenguin* player = Cast<APenguin>(character);
		if (player == nullptr) return;

		mySave->Position = player->GetActorLocation();
		mySave->Rotation = player->GetActorRotation();
		

		UGameplayStatics::SaveGameToSlot(mySave, FString("Save1"), 0);
	}
	else
	{
		USaveGame* save = UGameplayStatics::CreateSaveGameObject(SaveGame_BP);
		UMySaveGame* mySave = Cast<UMySaveGame>(save);

		ACharacter* character = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);
		if (character == nullptr) return;

		APenguin* player = Cast<APenguin>(character);
		if (player == nullptr) return;

		mySave->Position = player->GetActorLocation();
		mySave->Rotation = player->GetActorRotation();
		

		UGameplayStatics::SaveGameToSlot(mySave, FString("Save1"), 0);
	}
}

void ADoomsdayPenguinsGameModeBase::LoadGame()
{
	if (!UGameplayStatics::DoesSaveGameExist(FString("Save1"), 0)) return;

	USaveGame* save = UGameplayStatics::LoadGameFromSlot(FString("Save1"), 0);
	UMySaveGame* mySave = Cast<UMySaveGame>(save);

	ACharacter* character = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);
	if (character == nullptr) return;

	APenguin* player = Cast<APenguin>(character);
	if (player == nullptr) return;

	player->SetActorLocation(mySave->Position);
	player->SetActorRotation(mySave->Rotation);
	
}
