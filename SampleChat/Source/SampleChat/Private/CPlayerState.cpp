// Fill out your copyright notice in the Description page of Project Settings.

#include "CPlayerState.h"
#include "CPlayerController.h"


ACPlayerState::ACPlayerState() :
	CorrectScore(0),
	IsHost(false)
{

}

void ACPlayerState::BeginPlay()
{
	if (APlayerController* PlayerController = GetPlayerController())
	{
		if (ACPlayerController* CPlayerController = Cast<ACPlayerController>(PlayerController))
		{
			IsHost = CPlayerController->UserID == "Host" ? true : false;
		}
	}
}

void ACPlayerState::GainScore()
{
	CorrectScore++;
}