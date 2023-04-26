// Fill out your copyright notice in the Description page of Project Settings.


#include "SeaLeopard.h"
#include "Penguin.h"
#include "Components/BoxComponent.h"
#include "Perception/PawnSensingComponent.h"
#include "AIController.h"
#include "Engine/StaticMeshSocket.h"
#include "Bullet.h"
#include "BehaviorTree/Tasks/BTTask_PawnActionBase.h"
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
	Collider->InitBoxExtent(FVector(90, 90, 90));
	Collider->OnComponentBeginOverlap.AddDynamic(this, &ASeaLeopard::OnOverlap);

	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	StaticMesh->SetupAttachment(GetRootComponent());
	StaticMesh->SetRelativeScale3D(FVector(0.1f, 1.f, 1.f));
	StaticMesh->SetRelativeLocation(FVector(0.f, 0.f, 40.f));

	// SkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
	// SkeletalMesh->SetupAttachment(GetRootComponent());
	// SkeletalMesh->SetRelativeScale3D(FVector(0.1f, 1.f, 1.f));
	// SkeletalMesh->SetRelativeLocation(FVector(0.f, 0.f, 40));
	
	PawnSensing = CreateDefaultSubobject<UPawnSensingComponent>(TEXT("PawnSensing"));
	PawnSensing->SightRadius = 10000.f;
	PawnSensing->SetPeripheralVisionAngle(35.f);
	PawnSensing->bSeePawns = true;
	//PawnSensing->OnSeePawn.AddDynamic(this, &ASeaLeopard::PawnSeen);
	
	RotationSpeed = 10.f;
	ShootDelay = 1.5f;
	TimeSinceShooting = 1.f;
	CanShoot = false;
}

// Called when the game starts or when spawned
void ASeaLeopard::BeginPlay()
{
	Super::BeginPlay();
	
	if (PawnSensing)
	{
		PawnSensing->OnSeePawn.AddDynamic(this, &ASeaLeopard::PawnSeen);
	}
}

// Called every frame
void ASeaLeopard::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	ACharacter* Player = UGameplayStatics::GetPlayerCharacter(this, 0);
	bool bCanSeePlayer = PawnSensing->HasLineOfSightTo(Player) && (GetDistanceTo(Player) <= PawnSensing->SightRadius);
	if (bCanSeePlayer)
	{
		if (GetDistanceTo(Player) <= PawnSensing->SightRadius && PawnSensing->GetPeripheralVisionAngle())
		{
			// Get the player's location
			FVector PlayerLocation = Player->GetActorLocation();

			// Calculate the rotation needed to face the player
			FRotator NewRotation = (PlayerLocation - GetActorLocation()).Rotation();

			// Smoothly interpolate to the new rotation over time
			FQuat StartRotation = GetActorRotation().Quaternion();
			FQuat TargetRotation = NewRotation.Quaternion();
			FQuat NewQuat = FMath::QInterpTo(StartRotation, TargetRotation, GetWorld()->DeltaTimeSeconds, RotationSpeed);
			SetActorRotation(NewQuat.Rotator());
		}
		
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
	UE_LOG(LogTemp, Warning, TEXT("Player Seen"));
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
	UE_LOG(LogTemp, Warning, TEXT("Shoot"));
	ActorLocation = GetActorLocation();
	NewSpawnLocation = FVector3d(ActorLocation.X, ActorLocation.Y, ActorLocation.Z + 50.f);
	GetWorld()->SpawnActor<AActor>(BP_Bullet,		// What to spawn
	NewSpawnLocation, GetActorRotation());	// Location & Rotation
}