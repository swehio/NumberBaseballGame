// Fill out your copyright notice in the Description page of Project Settings.


#include "DPGameModeBase.h"
#include "DPGameStateBase.h"
#include "../DPGameState/DPGameStateInterface.h"

ADPGameModeBase::ADPGameModeBase()
{
	GameStateClass = ADPGameStateBase::StaticClass();
	DefaultPawnClass = nullptr;

	//WaitingState = MakeShared<>();
	//GuessInputState = MakeShared<>();
	//JudgingState = MakeShared<>();
	//TurnSwitchingState = MakeShared<>();
	//GameOverState = MakeShared<>();

}

void ADPGameModeBase::ChangeState(TUniquePtr<DPGameStateInterface> NewState, EGamePhase NewPhase)
{
	if(CurrentState)
	{
		CurrentState->Exit();
	}

	CurrentState = NewState.Get();

	if (CurrentState)
	{
		CurrentState->Enter();
	}
	
	ADPGameStateBase* GS = GetGameState<ADPGameStateBase>();

	if (GS)
	{
		GS->CurrentGamePhase = NewPhase;
	}
}
