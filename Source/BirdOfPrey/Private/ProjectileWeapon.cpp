// Fill out your copyright notice in the Description page of Project Settings.


#include "ProjectileWeapon.h"

// Sets default values
AProjectileWeapon::AProjectileWeapon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

ABaseProjectile* AProjectileWeapon::SpawnProjectile(FTransform SpawnTransform)
{
	return nullptr;
}

FTransform AProjectileWeapon::GetProjectileSpawnTransform(int ShotNumber)
{
	return FTransform();
}

bool AProjectileWeapon::ReadyToFire()
{
	return false;
}

// Called when the game starts or when spawned
void AProjectileWeapon::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AProjectileWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

