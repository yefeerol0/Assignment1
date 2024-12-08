// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WorldCameraActor.generated.h"

UCLASS()
class AWorldCameraActor : public AActor
{
	GENERATED_BODY()
	
	// This class was not in the assignment Powerpoint but I still created it 
	// because there is a variable in "BaseGameMode" class that is typed as this class.


public:	
	// Sets default values for this actor's properties
	AWorldCameraActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
