// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "CGameStateBase.generated.h"

UENUM(BlueprintType)
enum class EGameState : uint8
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

	class ACPlayerController* GSPlayerController;
	int32 PlayerNum;
	float TurnChangeDelayTime;
	FString Result;
	UPROPERTY(Replicated)
	bool IsHostTurn;
	UPROPERTY(Replicated)
	int32 Chance;
	UPROPERTY(Replicated)
	FString ServerAnswer;

	virtual void BeginPlay() override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	
	UFUNCTION(Server, Reliable)
	void SetBeforeStartSetting();

	UFUNCTION(Server, Reliable)
	void IncreasePlayerNum();

	bool IsChanceZero();

	UFUNCTION(NetMulticast, Reliable)
	void GSSetStartButEnabled();

	UFUNCTION(NetMulticast, Reliable)
	void GSSetStartButHiddenAll();

	UFUNCTION(NetMulticast, Reliable)
	void GSSetEditableTextReadWrite();

	UFUNCTION(NetMulticast, Reliable)
	void GSUpdateTimerAll(float RemainTime);

	UFUNCTION(NetMulticast, Unreliable)
	void GSUpdateResult(const FString& GMAnswer, const FString& GMResult);

	UFUNCTION(Server, Unreliable)
	void GSUpdateScore(bool IsHostWin);

	UFUNCTION(NetMulticast, Unreliable)
	void GSUpdateHostScoreAll(const FString& GMHostScore);

	UFUNCTION(NetMulticast, Unreliable)
	void GSUpdateGuestScoreAll(const FString& GMGuestScore);

	UFUNCTION(Server, Unreliable)
	void SetSwitchTurnSetting();

	UFUNCTION(NetMulticast, Reliable)
	void GSShowServerAnswerAll();

};
