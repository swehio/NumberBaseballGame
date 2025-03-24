// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "CGameStateBase.generated.h"

enum class EGameState : int8
{
	EGS_BeforeStart,
	EGS_Start,
	EGS_WaitAnswer,
	EGS_FinishTurn,
	EGS_BeforFinish,
	EGS_Finish,
	EGS_Max
};

UCLASS()
class SAMPLECHAT_API ACGameStateBase : public AGameStateBase
{
	GENERATED_BODY()
public:
	ACGameStateBase();

	EGameState CurrentState;

	int32 PlayerNum;
	float TurnChangeDelayTime;
	bool IsHostTurn;
	int32 Chance;
	class ACPlayerController* GSPlayerController;

	FString ServerAnswer;

	virtual void BeginPlay() override;

	UFUNCTION(NetMulticast, Unreliable, WithValidation)
	void IncreasePlayerNum();

	bool IsChanceZero();

	UFUNCTION(Server, Unreliable, WithValidation)
	void GSUpdateResult(const FString& GMAnswer, const FString& GMResult);

	UFUNCTION(NetMulticast, Reliable, WithValidation)
	void GSUpdateTimerAll(float RemainTime);

	UFUNCTION(Server, Unreliable, WithValidation)
	void GSUpdateScore(bool IsHostWin);

	UFUNCTION(NetMulticast, Unreliable, WithValidation)
	void GSUpdateHostScoreAll(const FString& GMHostScore);

	UFUNCTION(NetMulticast, Unreliable, WithValidation)
	void GSUpdateGuestScoreAll(const FString& GMGuestScore);
};
