// Fill out your copyright notice in the Description page of Project Settings.


#include "SeaLeopard.h"
#include "Penguin.h"
#include "Components/BoxComponent.h"
#include "Perception/PawnSensingComponent.h"
#include "AIController.h"
#include "Engine/StaticMeshSocket.h"
#include "Bullet.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "GameFramework/Pawn.h"
#include "Math/UnitConversion.h"

// Sets default values
ASeaLeopard::ASeaLeopard()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Collider = CreateDefaultSubobject<UBoxComponent>(TEXT("Collider"));
	SetRootComponent(Collider);
	Collider->InitBoxExtent(FVector(100, 100, 100));
	Collider->OnComponentBeginOverlap.AddDynamic(this, &ASeaLeopard::OnOverlap);

	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	StaticMesh->SetupAttachment(GetRootComponent());
	StaticMesh->SetRelativeScale3D(FVector(0.1f, 1.f, 1.f));
	StaticMesh->SetRelativeLocation(FVector(0.f, 0.f, 40));

	// SkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
	// SkeletalMesh->SetupAttachment(GetRootComponent());
	// SkeletalMesh->SetRelativeScale3D(FVector(0.1f, 1.f, 1.f));
	// SkeletalMesh->SetRelativeLocation(FVector(0.f, 0.f, 40));
	
	PawnSensing = CreateDefaultSubobject<UPawnSensingComponent>(TEXT("PawnSensing"));
	PawnSensing->SightRadius = 7000.f;
	PawnSensing->SetPeripheralVisionAngle(45.f);
	PawnSensing->bSeePawns = true;
	PawnSensing->OnSeePawn.AddDynamic(this, &ASeaLeopard::PawnSeen);
	
	MovementSpeed = 0;
	RotationSpeed = 0.f;
	ShootDelay = 3.f;
	TimeSinceShooting = 3.f;
	CanShoot = false;
}

// Called when the game starts or when spawned
void ASeaLeopard::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ASeaLeopard::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	APawn* Player = UGameplayStatics::GetPlayerPawn(this, 0);
	bool bCanSeePlayer = PawnSensing->HasLineOfSightTo(Player) && (GetDistanceTo(Player) <= PawnSensing->SightRadius);
	if (bCanSeePlayer)
	{
		UE_LOG(LogTemp, Warning, TEXT("Player seen"));
		// Get the player's location
		FVector PlayerLocation = Player->GetActorLocation();

		// Calculate the rotation needed to face the player
		FRotator NewRotation = (PlayerLocation - GetActorLocation()).Rotation();

		// Smoothly interpolate to the new rotation over time
		FQuat StartRotation = GetActorRotation().Quaternion();
		FQuat TargetRotation = NewRotation.Quaternion();
		FQuat NewQuat = FMath::QInterpTo(StartRotation, TargetRotation, GetWorld()->DeltaTimeSeconds, RotationSpeed);
		SetActorRotation(NewQuat.Rotator());
		if (PawnSensing->HasLineOfSightTo(Player) && PawnSensing->SightRadius)
		{
			CanShoot = true;
		}
		else
		{
			CanShoot = false;
		}
	}
	else
	{
		CanShoot = false;
		UE_LOG(LogTemp, Warning, TEXT("No Player seen"));
	}

	if (CanShoot == true)
	{
		TimeSinceShooting += DeltaTime;
		if (TimeSinceShooting > ShootDelay)
		{
			Shoot();
			TimeSinceShooting = 0.f;
		}
	}
}

void ASeaLeopard::PawnSeen(APawn* SeenPawn)
{
	
}

void ASeaLeopard::OnOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
                            UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor->IsA<APenguin>())
	{
		Cast<APenguin>(OtherActor)->HitByTarget();

		DestroyTarget();
	}
}

void ASeaLeopard::DestroyTarget()
{
	SetActorHiddenInGame(true);
	SetActorEnableCollision(false);
	this->Destroy();
}

// Shoot towards the player
void ASeaLeopard::Shoot()
{
	GetWorld()->SpawnActor<AActor>(BP_Bullet,		// What to spawn
		GetActorLocation(), GetActorRotation());	// Location & Rotation
}