// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "DPGameStateBase.generated.h"

UENUM(BlueprintType)
enum class EGamePhase : uint8
{
	Wating,Guessing,Judging, TurnSwitching, GameOver, Max
};
UCLASS()
class SAMPLECHAT_API ADPGameStateBase : public AGameStateBase
{
	GENERATED_BODY()

public:
	UPROPERTY(ReplicatedUsing = OnRep_CurrentGamePhase)
	EGamePhase CurrentGamePhase;

	UFUNCTION()
	void OnRep_CurrentGamePhase();

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
};
