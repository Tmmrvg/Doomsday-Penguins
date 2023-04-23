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

// Sets default values
APenguin::APenguin()
{
 //	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

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

	

}

// Called when the game starts or when spawned
void APenguin::BeginPlay()
{
	Super::BeginPlay();
	
	GetCharacterMovement()->MaxWalkSpeed = 10000.f;
	GetCharacterMovement()->MaxAcceleration = 2000.f;
	GetCharacterMovement()->GroundFriction = 0.5f;
	GetCharacterMovement()->RotationRate = FRotator(0.f, 90.0f, 0.0f);
	GetCharacterMovement()->AirControl = 0.2;
	GetCharacterMovement()->GravityScale = 10;
	GameOver = false;
	Lives = 10;
	
	
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

	Movement();


	AddControllerYawInput(Yaw);
	AddControllerPitchInput(Pitch);

	if (GetCharacterMovement()->IsFalling())
	{
		GetCharacterMovement()->bOrientRotationToMovement = false;
	}
	else
	{
		GetCharacterMovement()->bOrientRotationToMovement = true;
	}
	

	// if ((Controller != nullptr) && (XInput != 0.f))
	// {
	// 	FRotator Rotation = Controller->GetControlRotation();
	// 	Rotation.Pitch = 0.f;
	// 	Rotation.Roll = 0.f;
	//
	// 	FVector Direction = FRotationMatrix(Rotation).GetUnitAxis(EAxis::X);
	// 	SetActorLocation(GetActorLocation() + (Direction * XInput  * DeltaTime));
	//
	// 	SetActorRotation(Rotation);
	// }
	//
	// if ((Controller != nullptr) && (YInput != 0.f))
	// {
	// 	FRotator Rotation = Controller->GetControlRotation();
	// 	Rotation.Pitch = 0.f;
	// 	Rotation.Roll = 0.f;
	//
	// 	FVector Direction = FRotationMatrix(Rotation).GetUnitAxis(EAxis::Y);
	// 	SetActorLocation(GetActorLocation() + (Direction * YInput  * DeltaTime));
	//
	// 	SetActorRotation(Rotation);
	// }

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
		EnhanceInputCom->BindAction(RestartInput, ETriggerEvent::Triggered, this, &APenguin::GameStateChange);
		
		
	}

}

void APenguin::GameStateChange(const FInputActionValue& input)
{
	if (!GameOver && input.IsNonZero())
		GameOver = true;
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
	if (GameOver && input.IsNonZero())
		GameOver = false;
	
	UE_LOG(LogTemp, Warning, TEXT("Bool changed"));
}

void APenguin::HitByTarget()
{
	Lives--;
	if (Lives <= 0)
	{
		GameOver = true;
		/*GameOver = true;*/
		return;
		// TODO : Game over
	}
}
