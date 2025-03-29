// Fill out your copyright notice in the Description page of Project Settings.


#include "DPFGuessInputState.h"
#include "DPGameModeBase.h"

DPFGuessInputState::DPFGuessInputState(DPGameModeBase* InGameMode) : GameMode(InGameMode)
{
}

void DPFGuessInputState::Enter()
{
	UE_LOG(LogTemp, Warning, TEXT("DPFGuessInputState::Enter"));
}

void DPFGuessInputState::HandleInput(int32 Input)
{
	GameMode->ChangeState(GameMode->GetGuessResultState());
}

void DPFGuessInputState::Update(float DeltaTime)
{
}

void DPFGuessInputState::Exit()
{
}

DPFGuessInputState::DPFGuessInputState()
{
}

DPFGuessInputState::~DPFGuessInputState()
{
}
