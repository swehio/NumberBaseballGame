// Fill out your copyright notice in the Description page of Project Settings.


#include "CGameModeBase.h"
#include "GenerateNumberForBaseBallGame.h"
#include "CGameStateBase.h"
#include "CPlayerController.h"
#include "CGameStateBase.h"
#include "CPlayerState.h"

ACGameModeBase::ACGameModeBase()
{
	PlayerControllerClass = ACPlayerController::StaticClass();
	PlayerStateClass = ACPlayerState::StaticClass();
	GameStateClass = ACGameStateBase::StaticClass();
	DefaultPawnClass = nullptr;
}

void ACGameModeBase::BeginPlay()
{
	AnswerRecieved = "";
}

void ACGameModeBase::PostLogin(APlayerController* NewPlayer)
{
	if(!GMGameStateBase)
		GMGameStateBase = Cast<ACGameStateBase>(GetWorld()->GetGameState());
	//로그인 시 플레이어 수 증가
	FTimerHandle PostLoginDelay;
	GetWorldTimerManager().SetTimer(PostLoginDelay, GMGameStateBase, &ACGameStateBase::IncreasePlayerNum, 0.3, false);
}

void ACGameModeBase::StartGame()
{
	GMGameStateBase->CurrentState = EGameState::EGS_BeforeStart;

	//타이머 업데이트
	FTimerHandle UpdateTimer;
	GetWorldTimerManager().SetTimer(UpdateTimer, this, &ACGameModeBase::GMUpdateTimer, 0.01, true);

	StartTurn();
}

void ACGameModeBase::StartTurn()
{
	GMGameStateBase->CurrentState = EGameState::EGS_Start;
	GetWorldTimerManager().SetTimer(TurnTimerHandle, this, &ACGameModeBase::ShowResult, GMGameStateBase->TurnChangeDelayTime, false);
}

void ACGameModeBase::GMUpdateTimer()
{
	//사용자 입력 시간 부여
	GMGameStateBase->GSUpdateTimerAll(GetWorldTimerManager().GetTimerRemaining(TurnTimerHandle));
}

void ACGameModeBase::GotMessageFromClient(const FString& Msg)
{
	AnswerRecieved = Msg;
	ShowResult();
}

void ACGameModeBase::ShowResult()
{
	if (AnswerRecieved == "")
	{
		AnswerRecieved = "None";
	}

	FString Result = UGenerateNumberForBaseBallGame::CheckResult(GMGameStateBase->ServerAnswer, AnswerRecieved);
	GMGameStateBase->GSUpdateResult(AnswerRecieved, Result);

	AnswerRecieved = "";

	FinishTurn(Result == "3S0B");
}

void ACGameModeBase::FinishTurn(bool IsSomeoneWin)
{
	GetWorldTimerManager().ClearTimer(TurnTimerHandle);

	GMGameStateBase->CurrentState = EGameState::EGS_FinishTurn;

	if (IsSomeoneWin)
	{
		GMGameStateBase->GSUpdateScore(GMGameStateBase->IsHostTurn);
		FinishGame();
	}
	else
	{
		if (GMGameStateBase->IsChanceZero())
		{
			FinishGame();
		}
		else
		{
			FTimerHandle DelayBeforeChangingTurn;
			GetWorldTimerManager().SetTimer(DelayBeforeChangingTurn, this, &ACGameModeBase::StartTurn, 3.0f, false);
		}
	}
}

void ACGameModeBase::FinishGame()
{
	GMGameStateBase->CurrentState = EGameState::EGS_BeforFinish;
}
