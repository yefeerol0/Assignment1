// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Particles/ParticleSystem.h"
#include "Sound/SoundBase.h"
#include "BaseGameAgent.h"
#include "BaseProjectile.generated.h"

UCLASS()
class ABaseProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABaseProjectile();

	// VARIABLES

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float ProjectileSpeed;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float DamageAmount;

	//In BP, "DamageAmount" is "Damage" but it was causing error (C4458) since there is another "Damage" variable.
	//So I changed it as "DamageAmount".

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	UParticleSystem* DetonationEmitter;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float GroundUnitCheckDistance;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float GroundUnitCheckAngle;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	ABaseGameAgent* GroundTarget;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float DesiredZ;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	USoundBase* ImpactSound;

	// FUNCTIONS

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void InitialiseProjectile(FVector Direction, float Speed);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void DealDamageTo(AActor* Damaging, float DamageDealt); 


	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void OnHit(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	ECollisionChannel GetInstigatorCollisionChannel();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void CheckForGroundUnitTarget();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	bool ShouldCheckForGroundTarget();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void AdjustToTarget();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	bool IsEnemyProjectile();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void AdjustToDesiredZ();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
