// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Penguin.generated.h"

struct FInputActionValue;

class UInputAction;
class UNiagaraSystem;
class UNiagaraComponent;
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

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = GameState)
	bool GameOver = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = GameState)
		bool ShowSettings = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = GameState)
	bool GameWon = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = GameState)
	bool GamePaused = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = GameState)
	bool IsPaused;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = GameState)
	bool bHasGameStarted;
	
	float XInput;
	float YInput;
	float Yaw;
	float Roll;
	float Pitch;
	float Clock;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	float Seconds;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	int Minutes;
	
	UPROPERTY(meta = (AllowPrivateAccess = "true"), EditAnywhere, BlueprintReadWrite, Category = "My Variables")
	bool IsSlowed;

	UPROPERTY(meta = (AllowPrivateAccess = "true"), EditAnywhere, BlueprintReadWrite, Category = "My Variables")
	float SpeedBoostTimer{};

	UPROPERTY(meta = (AllowPrivateAccess = "true"), EditAnywhere, BlueprintReadWrite, Category = "My Variables")
	bool bHasSpeedBoost;

	UPROPERTY(meta = (AllowPrivateAccess = "true"), EditAnywhere, BlueprintReadWrite, Category = "My Variables")
	int SlowTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "My Variables")
	int Lives;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = InputSystem)
	class UInputMappingContext* MappingContext;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = InputSystem)
	UInputAction* ForwardInput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = InputSystem)
	UInputAction* UpInput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = InputSystem)
	UInputAction* RightInput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = InputSystem)
	UInputAction* ShootInput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = InputSystem)
	UInputAction* ReloadInput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = InputSystem)
	UInputAction* MouseXInput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = InputSystem)
	UInputAction* MouseYInput;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = InputSystem)
	UInputAction* RestartInput;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = InputSystem)
	UInputAction* SettingsInput;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Particles")
	UNiagaraComponent* RocketFX;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Particles")
	UNiagaraComponent* RocketBoostFX;
	
	UFUNCTION(BlueprintImplementableEvent)
	void Rocket();
	
	UFUNCTION(BlueprintImplementableEvent)
	void RocketBoost();
	
	// UPROPERTY(EditAnywhere, Category = "Rockets")
	// UNiagaraSystem* NormalSpeed;
	//
	// UPROPERTY(EditAnywhere, Category = "Rockets")
	// UNiagaraSystem* EnhancedSpeed;
	//
	// UPROPERTY(meta = (AllowPrivateAccess = "true"), EditAnywhere, BlueprintReadWrite, Category = "My Variables")
	// float CoefStrength;

	void Forward(const FInputActionValue& input);
	void Right(const FInputActionValue& input);

	void MouseX(const FInputActionValue& input);
	void MouseY(const FInputActionValue& input);

	void GameStateChange();
	void GameLossState();
	void Movement();
	void Quit(const FInputActionValue& input);
	void HitByTarget();
	void SlowDuration();
	void SpeedBoost();
	void BoostTimer(float DeltaTime);

	void OnTrack();
	bool OffTrack;

	void SetGamePaused(bool bIsPaused);

};
