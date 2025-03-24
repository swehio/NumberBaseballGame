// Fill out your copyright notice in the Description page of Project Settings.


#include "CPlayerController.h"

void ACPlayerController::BeginPlay()
{
	SetShowMouseCursor(true);

	if (GetRemoteRole() != ROLE_None)
	{
		if (HasAuthority())
		{
			UserId = "Host";
		}
		else
		{
			UserId = "Guest";
		}
	}

	
}
