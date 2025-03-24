// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "CPlayerState.generated.h"

/**
 * 
 */
UCLASS()
class SAMPLECHAT_API ACPlayerState : public APlayerState
{
	GENERATED_BODY()
public:
	int CorrectScore;
	bool IsHost;

	void GainScore();

	virtual void BeginPlay() override;
	
};
