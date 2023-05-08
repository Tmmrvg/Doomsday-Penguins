// Fill out your copyright notice in the Description page of Project Settings.


#include "Penguin.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputMappingContext.h"
#include "Bullet.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/KismetSystemLibrary.h"
#include "InputTriggers.h"
#include "Components/SphereComponent.h"
#include "Components/BoxComponent.h"

// Sets default values
APenguin::APenguin()
{
 //	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Collider = CreateDefaultSubobject<UBoxComponent>(TEXT("Collider"));
	// SetRootComponent(Collider);
	// Collider->InitBoxExtent(FVector(50, 50, 50));
	
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArm->SetupAttachment(GetRootComponent());
	SpringArm->TargetArmLength = 400.f; // Distance from player
	SpringArm->bUsePawnControlRotation = true; // Rotate arm based on controller

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(SpringArm, USpringArmComponent::SocketName);

	bUseControllerRotationYaw = false;
	bUseControllerRotationPitch = false;
	bUseControllerRotationRoll = false;

	AutoPossessPlayer = EAutoReceiveInput::Player0;

	OffTrack = false;
}

// Called when the game starts or when spawned
void APenguin::BeginPlay()
{
	Super::BeginPlay();
	
	GetCharacterMovement()->MaxWalkSpeed = 5000.f;
	GetCharacterMovement()->MaxAcceleration = 1000.f;
	GetCharacterMovement()->GroundFriction = 0.7f;
	GetCharacterMovement()->RotationRate = FRotator(0.f, 90.0f, 0.0f);
	GetCharacterMovement()->AirControl = 0.2;
	GetCharacterMovement()->GravityScale = 10;
	
	bHasGameStarted = false;
	SlowTime = 0;
	SpeedBoostTimer = 10000;
	IsSlowed = false;
	Seconds = 0;
	Minutes = 0;
	
	APlayerController* PlayerController = Cast<APlayerController>(Controller);
	if (PlayerController)
	{
		UEnhancedInputLocalPlayerSubsystem* subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer());
		if (subsystem)
		{
			subsystem->AddMappingContext(MappingContext, 0);
		}
	}
}

// Called every frame
void APenguin::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (GamePaused || GameWon) 
		SetGamePaused(true);

	if (!bHasGameStarted) return;
	Seconds = Seconds + DeltaTime;
	if (Seconds > 59)
	{
		//UE_LOG(LogTemp, Warning, TEXT("Minutes count is: %d"), Minutes);
		Seconds = 0;
		Minutes++;
	}

	if (IsSlowed == true)
	{
		SlowDuration();
	}
	if (GameOver == true || GameWon == false) 
	{
		Movement();

		AddControllerYawInput(Yaw);
		AddControllerPitchInput(Pitch);
	/*	AddControllerRollInput(Roll);*/
	}
	
	

		GetCharacterMovement()->bOrientRotationToMovement = true;

	
	if (GameOver)
	{
		SetGamePaused(true);
	}

	//Hinder player to go up steep slopes when their speed is too low.
	if (GetCharacterMovement()->Velocity.Size() >= 3000) {
		GetCharacterMovement()->SetWalkableFloorAngle(75);
		
		GetCharacterMovement()->GroundFriction = 0.5f;
	}
	else
	{
		GetCharacterMovement()->SetWalkableFloorAngle(45);
		
		GetCharacterMovement()->GroundFriction = 0.7f;
	}
	if (bHasSpeedBoost)
	{
		SpeedBoostTimer = 5;
	}
		

	//If SpeedBoostTimer is more than 0, timer starts. 
	if (SpeedBoostTimer > 0)
	{
		SpeedBoostTimer -= DeltaTime;
		if (SpeedBoostTimer <= 0) // Resets speed when timer is 0.
		{
			bHasSpeedBoost = false;
				UE_LOG(LogTemp, Warning, TEXT("Reseting speed"));
				GetCharacterMovement()->MaxWalkSpeed = 5000;
				GetCharacterMovement()->MaxAcceleration = 1000;
		}
	}
}


// Called to bind functionality to input
void APenguin::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	APlayerController* PC = Cast<APlayerController>(GetController());
	if (UEnhancedInputComponent* EnhanceInputCom = CastChecked<UEnhancedInputComponent>(PlayerInputComponent)) {
		EnhanceInputCom->BindAction(ForwardInput, ETriggerEvent::Triggered, this, &APenguin::Forward);
		EnhanceInputCom->BindAction(RightInput, ETriggerEvent::Triggered, this, &APenguin::Right);
		EnhanceInputCom->BindAction(ForwardInput, ETriggerEvent::Completed, this, &APenguin::Forward);
		EnhanceInputCom->BindAction(RightInput, ETriggerEvent::Completed, this, &APenguin::Right);


		EnhanceInputCom->BindAction(MouseXInput, ETriggerEvent::Started, this, &APenguin::MouseX);
		EnhanceInputCom->BindAction(MouseYInput, ETriggerEvent::Started, this, &APenguin::MouseY);
		EnhanceInputCom->BindAction(MouseXInput, ETriggerEvent::Triggered, this, &APenguin::MouseX);
		EnhanceInputCom->BindAction(MouseYInput, ETriggerEvent::Triggered, this, &APenguin::MouseY);
		EnhanceInputCom->BindAction(MouseXInput, ETriggerEvent::Completed, this, &APenguin::MouseX);
		EnhanceInputCom->BindAction(MouseYInput, ETriggerEvent::Completed, this, &APenguin::MouseY);

		EnhanceInputCom->BindAction(SettingsInput, ETriggerEvent::Triggered, this, &APenguin::Quit);
	}
}

void APenguin::GameStateChange()
{
	GameWon = true;
}

void APenguin::GameLossState()
{
	GameOver = true;
	SetGamePaused(true);
}

void APenguin::Forward(const FInputActionValue& input)
{
	XInput = input.Get<float>();
	
}

void APenguin::Right(const FInputActionValue& input)
{
	YInput = input.Get<float>();
}

void APenguin::MouseX(const FInputActionValue& input)
{
	Yaw = input.Get<float>();
}

void APenguin::MouseY(const FInputActionValue& input)
{
	Pitch = input.Get<float>();
}

void APenguin::Movement()
{
	//Movement
	FRotator ControlRotation = Controller->GetControlRotation();
	
	ControlRotation.Roll = 0.f;
	ControlRotation.Pitch = 0.f;
	/*ControlRotation.Yaw = 0.f;*/
	
	//Getting the direction we're looking, and the right vector = cross product of forward and up vectors
	FVector ForwardVector = UKismetMathLibrary::GetForwardVector(ControlRotation);
	FVector RightVector = UKismetMathLibrary::GetRightVector(ControlRotation);

	ForwardVector *= XInput;
	RightVector *= YInput;
	
	
	if (!FMath::IsNearlyZero(XInput))
	{
		AddMovementInput(ForwardVector);
	}
	if (!FMath::IsNearlyZero(YInput))
	{
		AddMovementInput(RightVector);
	}
}

void APenguin::Quit(const FInputActionValue& input)
{
	
		GamePaused = !GamePaused;

	
	
	
}

void APenguin::HitByTarget()
{
	GetCharacterMovement()->MaxWalkSpeed = 2500;
	GetCharacterMovement()->Velocity /= 2;
	GetCharacterMovement()->MaxAcceleration = 500;
	UE_LOG(LogTemp, Warning, TEXT("Player is slowed"));

	SlowTime = 200;
	IsSlowed = true;
}
void APenguin::SlowDuration()
{
	SlowTime--;
	if (SlowTime <= 0)
	{
		GetCharacterMovement()->MaxWalkSpeed = 5000;
		GetCharacterMovement()->MaxAcceleration = 1000;
		UE_LOG(LogTemp, Warning, TEXT("Slowdown is gone"));
		IsSlowed = false;
	}
}

void APenguin::SpeedBoost()
{
	bHasSpeedBoost = true;
	
	UE_LOG(LogTemp, Warning, TEXT("Got speedboost"));
	GetCharacterMovement()->MaxWalkSpeed = 6000;
	GetCharacterMovement()->MaxAcceleration = 2000;
}

void APenguin::OnTrack()
{
	GetCharacterMovement()->MaxWalkSpeed = 5000.f;
}



void APenguin::SetGamePaused(bool bIsPaused)
{
	APlayerController* const MyPlayer = Cast<APlayerController>(GEngine->GetFirstLocalPlayerController(GetWorld()));
	if (MyPlayer != NULL)
	{
		MyPlayer->SetPause(bIsPaused);
	}
}