// Fill out your copyright notice in the Description page of Project Settings.


#include "GameLoss.h"
#include "Components/BoxComponent.h"
#include "Components/AudioComponent.h"
#include "Sound/SoundCue.h"
#include "Kismet/GameplayStatics.h"
#include "Penguin.h"

// Sets default values
AGameLoss::AGameLoss()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Collider = CreateDefaultSubobject<UBoxComponent>(TEXT("Collider"));
	SetRootComponent(Collider);
	Collider->InitBoxExtent(FVector(100000, 100000, 100));
	Collider->OnComponentBeginOverlap.AddDynamic(this, &AGameLoss::OnOverlap);

	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	StaticMesh->SetupAttachment(GetRootComponent());
	StaticMesh->SetRelativeScale3D(FVector(0.1f, 1.f, 1.f));
	StaticMesh->SetRelativeLocation(FVector(0.f, 0.f, 40));
	static ConstructorHelpers::FObjectFinder<USoundCue>sizzleObject(TEXT("/Script/Engine.SoundCue'/Game/Assets/Sounds/Sizzle_Cue.Sizzle_Cue'"));
	if (sizzleObject.Succeeded())
	{
		Sizzle = sizzleObject.Object;
		lakeSound = CreateDefaultSubobject<UAudioComponent>(TEXT("AudioComponent"));
		lakeSound->SetupAttachment(RootComponent);

	}
}

// Called when the game starts or when spawned
void AGameLoss::BeginPlay()
{
	Super::BeginPlay();
	lakeSound->SetSound(Sizzle);
	UGameplayStatics::PlaySoundAtLocation(GetWorld(), Sizzle, GetActorLocation(), FRotator::ZeroRotator);
}

// Called every frame
void AGameLoss::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	
}

void AGameLoss::OnOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor->IsA<APenguin>())
	{
		Cast<APenguin>(OtherActor)->GameLossState();
	}
}