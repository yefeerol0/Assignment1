// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "BasePlayerController.h"
#include "BaseGameAgent.h"
#include "BaseAIController.generated.h"

/**
 * 
 */
UCLASS()
class ABaseAIController : public AAIController
{
	GENERATED_BODY()

public:

UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
float LastFireTime;

UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
bool bIsFiring;

UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
float RefireDelay;

UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
bool bShouldUpdateAim;

// VARIABLES

UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
ABasePlayerController* Target;

UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
ABaseGameAgent* ControlledAgent;

// FUNCTIONS

UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
void SelectTarget();

UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
void AimAt(FVector AimTarget);

UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
void CheckFire();

UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
void UpdateAim();

UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
bool ShouldStartFire();

UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
bool ShouldStopFire();

UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
void StartFire();

UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
void StopFire();

UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
bool ShouldUpdateAim();

};
