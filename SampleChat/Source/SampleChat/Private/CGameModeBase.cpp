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
	Super::BeginPlay();
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
	GMGameStateBase->SetBeforeStartSetting();

	//입력 시간
	FTimerHandle UpdateTimer;
	GetWorldTimerManager().SetTimer(UpdateTimer, this, &ACGameModeBase::GMUpdateTimer, 0.01, true);

	FTimerHandle DelayChangeStart;
	GetWorld()->GetTimerManager().SetTimer(DelayChangeStart, this, &ACGameModeBase::StartTurn, 0.2, false);
}

void ACGameModeBase::GMUpdateTimer()
{
	//사용자 입력 시간 부여
	GMGameStateBase->GSUpdateTimerAll(GetWorldTimerManager().GetTimerRemaining(TurnTimerHandle));
}

void ACGameModeBase::StartTurn()
{
	GMGameStateBase->GSSetEditableTextReadWrite();

	GetWorldTimerManager().SetTimer(TurnTimerHandle, this, &ACGameModeBase::ShowResult, GMGameStateBase->TurnChangeDelayTime, false);
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
			FTimerHandle DelayBeforeSetChangingTurnSetting;
			GetWorldTimerManager().SetTimer(DelayBeforeSetChangingTurnSetting, GMGameStateBase, &ACGameStateBase::SetSwitchTurnSetting, 1.0f, false);
			FTimerHandle DelayBeforeChangingTurn;
			GetWorldTimerManager().SetTimer(DelayBeforeChangingTurn, this, &ACGameModeBase::StartTurn, 3.0f, false);
		}
	}
}

void ACGameModeBase::FinishGame()
{
	GMGameStateBase->GSShowServerAnswerAll();
}
