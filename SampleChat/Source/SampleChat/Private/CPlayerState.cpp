// Fill out your copyright notice in the Description page of Project Settings.

#include "CPlayerState.h"
#include "CPlayerController.h"

void ACPlayerState::GainScore()
{
	CorrectScore++;
}

void ACPlayerState::BeginPlay()
{
	if (APlayerController* PlayerController = GetPlayerController())
	{
		if (ACPlayerController* CPlayerController = Cast<ACPlayerController>(PlayerController))
		{
			IsHost = CPlayerController->UserId == "Host" ? true : false;
		}
	}
}
