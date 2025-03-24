// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "CGameModeBase.generated.h"


UCLASS()
class SAMPLECHAT_API ACGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
public:
	ACGameModeBase();
	class ACGameStateBase* GMGameStateBase;
	FString AnswerRecieved;

	FTimerHandle TurnTimerHandle;

	virtual void BeginPlay() override;
	virtual void PostLogin(APlayerController* NewPlayer) override;

	void StartGame();
	void StartTurn();
	void GMUpdateTimer();
	void GotMessageFromClient(const FString& Msg);
	void ShowResult();
	void FinishTurn(bool IsSomeoneWin);
	void FinishGame();

};
