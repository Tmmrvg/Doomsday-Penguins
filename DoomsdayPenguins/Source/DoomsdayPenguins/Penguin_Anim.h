// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "Penguin_Anim.generated.h"

/**
 * 
 */
UCLASS()
class DOOMSDAYPENGUINS_API UPenguin_Anim : public UAnimInstance
{
	GENERATED_BODY()
	virtual void NativeInitializeAnimation() override;

	virtual void NativeUpdateAnimation(float DeltaSeconds) override;
public:
	UPROPERTY(BlueprintReadOnly)
	class APenguin* Penguin_BP;
	UPROPERTY(BlueprintReadOnly)
	class UCharacterMovementComponent* Penguin_Movement;
	UPROPERTY(BlueprintReadOnly)
	float YInput;
};
