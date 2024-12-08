// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerShip.h"

// Sets default values
APlayerShip::APlayerShip()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APlayerShip::BeginPlay()
{
	Super::BeginPlay();
	
}

void APlayerShip::GetShipConstantVelocity(FVector& Direction, float& Speed)
{
}

void APlayerShip::ClampToCameraBounds()
{
}

float APlayerShip::GetShipAxisAdjustment(float Dist, float Max)
{
	return 0.0f;
}

FVector APlayerShip::CalcOutofBoundsAdjustment()
{
	return FVector();
}

void APlayerShip::GetPlayerAgentInfo(APlayerController* Player)
{
}

void APlayerShip::ShouldSpawnAIController()
{
}

void APlayerShip::UpdateHoverPitch()
{
}

bool APlayerShip::HasDiedRecently()
{
	return false;
}

// Called every frame
void APlayerShip::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APlayerShip::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

