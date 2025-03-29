// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "DPGameModeBase.generated.h"

class DPGameStateInterface;
enum class EGamePhase : uint8;

UCLASS()
class SAMPLECHAT_API ADPGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
private:
	DPGameStateInterface* CurrentState;

	//TUniquePtr<DPGameStateInterface> WaitingState;
	//TUniquePtr<DPGameStateInterface> GuessInputState;
	//TUniquePtr<DPGameStateInterface> JudgingState;
	//TUniquePtr<DPGameStateInterface> TurnSwitchingState;
	//TUniquePtr<DPGameStateInterface> GameOverState;

public:
ADPGameModeBase();

void ChangeState(TUniquePtr<DPGameStateInterface> NewState, EGamePhase NewPhase);

};
