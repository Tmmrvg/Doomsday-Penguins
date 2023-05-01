// Fill out your copyright notice in the Description page of Project Settings.


#include "Penguin_Anim.h"

#include "Penguin.h"
#include "GameFramework/CharacterMovementComponent.h"
#include  "Kismet/KismetMathLibrary.h"

void UPenguin_Anim::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();
	Penguin_BP = Cast<APenguin>(TryGetPawnOwner());
	if(Penguin_BP)
	{
		Penguin_Movement = Penguin_BP->GetCharacterMovement();
	}
}

void UPenguin_Anim::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);
	if(Penguin_Movement)
	{
		YInput = Penguin_BP->YInput;

	}
}
