// Fill out your copyright notice in the Description page of Project Settings.


#include "CGameStateBase.h"
#include "CPlayerState.h"
#include "CPlayerController.h"
#include "GenerateNumberForBaseBallGame.h"
#include "CoreMinimal.h"
#include "Net/UnrealNetwork.h"

ACGameStateBase::ACGameStateBase() :
	PlayerNum(0),
	TurnChangeDelayTime(10.0),
	GSPlayerController(nullptr),
	IsHostTurn(true),
	Chance(6),
	ServerAnswer("")
{
	
}

void ACGameStateBase::BeginPlay()
{
	Super::BeginPlay();
	GSPlayerController = Cast<ACPlayerController>(GetWorld()->GetFirstPlayerController());
}

void ACGameStateBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(ACGameStateBase, IsHostTurn);
	DOREPLIFETIME(ACGameStateBase, ServerAnswer);
	DOREPLIFETIME(ACGameStateBase, Chance);
}

void ACGameStateBase::IncreasePlayerNum_Implementation()
{
	PlayerNum++;
	if (PlayerNum > 1)
	{
		GSSetStartButEnabled();
	}
}

void ACGameStateBase::SetBeforeStartSetting_Implementation()
{
	Chance = 6;
	ServerAnswer = UGenerateNumberForBaseBallGame::GenerateRandomNum();
	IsHostTurn = true;
	GSSetStartButHiddenAll();
	UE_LOG(LogTemp, Warning, TEXT("ServerAnswer : %s"), *ServerAnswer);
}

void ACGameStateBase::GSSetStartButEnabled_Implementation()
{
	GSPlayerController->CSetStartButEnabled();
}

void ACGameStateBase::GSSetStartButHiddenAll_Implementation()
{
	GSPlayerController->CSetStartButHidden();
}

void ACGameStateBase::GSSetEditableTextReadWrite_Implementation()
{
	bool IsHost = GSPlayerController->UserID == "Host" ? true : false;
	if (IsHost == IsHostTurn)
	{
		GSPlayerController->CSetEditableTextReadWrite();
	}
}

void ACGameStateBase::GSUpdateResult_Implementation(const FString& GMAnswer, const FString& GMResult)
{
	Result = GMResult;
	GSPlayerController->CUpdateResult(FMath::CeilToInt32((float)Chance / 2), IsHostTurn, GMAnswer, GMResult);
}

void ACGameStateBase::GSUpdateTimerAll_Implementation(float RemainTime)
{
	GSPlayerController->CUpdateTimer(RemainTime, TurnChangeDelayTime);
}

void ACGameStateBase::GSUpdateScore_Implementation(bool IsHostWin)
{
	for (auto PlayerState : PlayerArray)
	{
		ACPlayerState* CPlayerState = Cast<ACPlayerState>(PlayerState);
		if (CPlayerState)
		{
			if (IsHostWin == CPlayerState->IsHost) 
			{
				CPlayerState->GainScore();

				if (IsHostWin)
				{
					GSUpdateHostScoreAll(FString::FromInt(CPlayerState->CorrectScore));
				}
				else
				{
					GSUpdateGuestScoreAll(FString::FromInt(CPlayerState->CorrectScore));
				}
			}


		}
	}
}

void ACGameStateBase::GSUpdateHostScoreAll_Implementation(const FString& GMHostScore)
{
	GSPlayerController->CUpdateHostScore(GMHostScore);
}

void ACGameStateBase::GSUpdateGuestScoreAll_Implementation(const FString& GMGuestScore)
{
	GSPlayerController->CUpdateGuestScore(GMGuestScore);
}

void ACGameStateBase::SetSwitchTurnSetting_Implementation()
{
	Chance--;
	IsHostTurn = !IsHostTurn;
}

void ACGameStateBase::GSShowServerAnswerAll_Implementation()
{
	GSPlayerController->CShowServerAnswer(ServerAnswer);
	FTimerHandle DelayBeforeFinish;
	GetWorldTimerManager().SetTimer(DelayBeforeFinish, GSPlayerController, &ACPlayerController::CSetFinishSetting, 3.0f, false);
}

bool ACGameStateBase::IsChanceZero()
{
	return Chance <= 1;
}