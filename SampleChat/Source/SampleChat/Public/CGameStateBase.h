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

	UPROPERTY(ReplicatedUsing = OnRep_CurrentState)
	EGameState CurrentState;
	int32 PlayerNum;
	UPROPERTY(Replicated)
	float TurnChangeDelayTime;
	UPROPERTY(Replicated)
	bool IsHostTurn;
	UPROPERTY(Replicated)
	int32 Chance;
	class ACPlayerController* GSPlayerController;
	UPROPERTY(Replicated)
	FString ServerAnswer;

	virtual void BeginPlay() override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	UFUNCTION()
	void OnRep_CurrentState();
	UFUNCTION(NetMulticast, Reliable, WithValidation)
	void GSSetEditableTextReadWrite();

	UFUNCTION(Server, Reliable, WithValidation)
	void IncreasePlayerNum();

	bool IsChanceZero();

	UFUNCTION(NetMulticast, Unreliable, WithValidation)
	void GSUpdateResult(const FString& GMAnswer, const FString& GMResult);

	UFUNCTION(NetMulticast, Reliable, WithValidation)
	void GSSetStartButEnabled();

	UFUNCTION(NetMulticast, Reliable, WithValidation)
	void GSSetStartButHiddenAll();

	UFUNCTION(NetMulticast, Reliable, WithValidation)
	void GSShowServerAnswerAll();

	UFUNCTION(NetMulticast, Reliable, WithValidation)
	void GSSetEditableTextReadOnlyAll();

	UFUNCTION(NetMulticast, Reliable, WithValidation)
	void GSSetFinishSettingAll();

	UFUNCTION(NetMulticast, Reliable, WithValidation)
	void GSUpdateTimerAll(float RemainTime);

	UFUNCTION(Server, Unreliable, WithValidation)
	void GSUpdateScore(bool IsHostWin);

	UFUNCTION(NetMulticast, Unreliable, WithValidation)
	void GSUpdateHostScoreAll(const FString& GMHostScore);

	UFUNCTION(NetMulticast, Unreliable, WithValidation)
	void GSUpdateGuestScoreAll(const FString& GMGuestScore);

	UFUNCTION(Server, Unreliable, WithValidation)
	void SetBeforeStartSetting();

	UFUNCTION(Server, Unreliable, WithValidation)
	void SetSwitchTurnSetting();

	UFUNCTION(Server, Unreliable, WithValidation)
	void SetBeforeFinishSetting();

};
