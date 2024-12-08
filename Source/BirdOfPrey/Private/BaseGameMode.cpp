// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseGameMode.h"

FVector ABaseGameMode::GetWorldScrollVelocity()
{
	return FVector();
}

ACameraActor* ABaseGameMode::GetWorldCameraActor()
{
	return nullptr;
}

void ABaseGameMode::OnPlayerDied(ABasePlayerController* Player)
{
}

void ABaseGameMode::OnEnemyDie(ABaseGameAgent* Enemy, AController* Killer)
{
}

void ABaseGameMode::StartGame()
{
}

void ABaseGameMode::EndGame(bool Success)
{
}

void ABaseGameMode::SpawnEnemyFrom(TArray<TSubclassOf<ABaseGameAgent>> ClassList)
{
}

void ABaseGameMode::ResetGame()
{
}

void ABaseGameMode::RespawnPlayer()
{
}

void ABaseGameMode::TrySpawnPowerUp(FVector Location)
{
}

float ABaseGameMode::GetDistanceTravelled()
{
	return 0.0f;
}


