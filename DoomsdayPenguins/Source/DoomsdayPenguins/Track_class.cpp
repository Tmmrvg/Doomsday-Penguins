// Fill out your copyright notice in the Description page of Project Settings.


#include "Track_class.h"
#include "Penguin.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
// Sets default values
ATrack_class::ATrack_class()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	SetRootComponent(StaticMesh);
	StaticMesh->SetGenerateOverlapEvents(true);
	
	StaticMesh->OnComponentBeginOverlap.AddDynamic(this, &ATrack_class::OverlapBegin);
	StaticMesh->OnComponentEndOverlap.AddDynamic(this, &ATrack_class::OverlapEnd);
	/*
	Collider = CreateDefaultSubobject<UBoxComponent>(TEXT("Collider"));
	Collider->SetupAttachment(GetRootComponent());
	Collider->InitBoxExtent(FVector(100, 100, 100));*/
}

// Called when the game starts or when spawned
void ATrack_class::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATrack_class::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}

void ATrack_class::OverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor->IsA<APenguin>())
	{
		UE_LOG(LogTemp, Warning, TEXT("On track"));
		//Destroys bullet
		
		Cast<APenguin>(OtherActor)->OffTrack=false;
	}
}

void ATrack_class::OverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (OtherActor->IsA<APenguin>())
	{
		UE_LOG(LogTemp, Warning, TEXT("Off track"));
		Cast<APenguin>(OtherActor)->OffTrack = true;
	}
}

