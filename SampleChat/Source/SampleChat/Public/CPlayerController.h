// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "CPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class SAMPLECHAT_API ACPlayerController : public APlayerController
{
	GENERATED_BODY()
public:
	FString UserId;
	

	virtual void BeginPlay() override;
};
