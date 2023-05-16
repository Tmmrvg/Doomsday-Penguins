// Fill out your copyright notice in the Description page of Project Settings.


#include "PickUp.h"

#include "NiagaraComponent.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Penguin.h"
#include "NiagaraSystem.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
APickUp::APickUp()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Collider = CreateDefaultSubobject<USphereComponent>(TEXT("Collider"));
	SetRootComponent(Collider);
	Collider->InitSphereRadius(250.f);
	Collider->OnComponentBeginOverlap.AddDynamic(this, &APickUp::OnOverlap);

	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	StaticMesh->SetupAttachment(GetRootComponent());
	StaticMesh->SetRelativeScale3D(FVector(1.f, 1.f, 1.f));

	// PickUpVFX = CreateDefaultSubobject<UNiagaraComponent>(TEXT("PickUpVFX"));
	// PickUpVFX->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void APickUp::BeginPlay()
{
	Super::BeginPlay();

	// UNiagaraSystem* PickUpVFXAsset = LoadObject<UNiagaraSystem>(nullptr, TEXT("Doomsday-Penguins/DoomsdayPenguins/Content/Assets/VFX/MAT_Boost.uasset"));
	// if (PickUpVFXAsset)
	// {
	// 	PickUpVFX->SetAsset(PickUpVFXAsset);
	// }
	
}

// Called every frame
void APickUp::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FRotator Rotation = GetActorRotation();
	Rotation.Yaw += 100.f * DeltaTime;
	SetActorRotation(Rotation);


	// PlayPickUpVFX();
}

void APickUp::OnOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{

	//Cast<APenguin>(OtherActor)->SpeedBoost();
	

	APenguin* player = Cast<APenguin>(OtherActor);
	if (player == nullptr) return;

	player->SpeedBoost();

	SetActorHiddenInGame(true);
	SetActorEnableCollision(false);
	this->Destroy();
}

