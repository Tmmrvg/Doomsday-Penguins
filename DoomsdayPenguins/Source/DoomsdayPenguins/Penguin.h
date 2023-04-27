// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Penguin.generated.h"

struct FInputActionValue;
class UBoxComponent;

UCLASS()
class DOOMSDAYPENGUINS_API APenguin : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APenguin();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayerVariables")
		class USpringArmComponent* SpringArm{ nullptr };

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayerVariables")
		class UCameraComponent* Camera{ nullptr };
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayerVariables")
		class UBoxComponent* Collider;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = GameState)
	bool GameOver;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = GameState)
	bool GameWon;

	float XInput;
	float YInput;
	float Yaw;
	float Pitch;
	float Clock;
	

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		float Seconds;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		float Minutes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bHasGameStarted = false;

	UPROPERTY(meta = (AllowPrivateAccess = "true"), EditAnywhere, BlueprintReadWrite, Category = "My Variables")
		bool IsSlowed;

	UPROPERTY(meta = (AllowPrivateAccess = "true"), EditAnywhere, BlueprintReadWrite, Category = "My Variables")
		int SlowTime;

	//
	UFUNCTION(BlueprintImplementableEvent)
		void ToggleSettings();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "My Variables")
	int Lives;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = InputSystem)
	class UInputMappingContext* MappingContext;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = InputSystem)
	class UInputAction* ForwardInput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = InputSystem)
	class UInputAction* UpInput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = InputSystem)
	class UInputAction* RightInput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = InputSystem)
	class UInputAction* ShootInput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = InputSystem)
	class UInputAction* ReloadInput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = InputSystem)
	class UInputAction* MouseXInput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = InputSystem)
	class UInputAction* MouseYInput;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = InputSystem)
	class UInputAction* RestartInput;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = InputSystem)
		class UInputAction* SettingsInput;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = InputSystem)
		class UInputAction* PauseInput; 

	void Forward(const FInputActionValue& input);
	void Right(const FInputActionValue& input);

	void MouseX(const FInputActionValue& input);
	void MouseY(const FInputActionValue& input);

	void GameStateChange();
	void Movement();
	void Quit(const FInputActionValue& input);
	void HitByTarget();
	void SlowDuration();
	void OnTrack();
	bool OffTrack;

	void SetGamePaused(bool bIsPaused);


	
};
