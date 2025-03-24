// Fill out your copyright notice in the Description page of Project Settings.


#include "CGameStateBase.h"
#include "CPlayerState.h"
#include "CPlayerController.h"
#include "CoreMinimal.h"

ACGameStateBase::ACGameStateBase() :
	CurrentState(EGameState::EGS_Max),
	PlayerNum(0),
	TurnChangeDelayTime(10.0),
	IsHostTurn(false),
	Chance(6),
	GSPlayerController(nullptr),
	ServerAnswer("")
{
	
}

void ACGameStateBase::BeginPlay()
{
	GSPlayerController = Cast<ACPlayerController>(GetWorld()->GetFirstPlayerController());
}

void ACGameStateBase::IncreasePlayerNum_Implementation()
{
	PlayerNum++;
	if (PlayerNum > 1)
	{
		GSPlayerController->CSetStartButEnabled();
	}
	UE_LOG(LogTemp, Warning, TEXT("PlayerNum : %d"),  PlayerNum);
}

bool ACGameStateBase::IncreasePlayerNum_Validate()
{
	return true;
}


bool ACGameStateBase::IsChanceZero()
{
	return Chance == 0;
}

void ACGameStateBase::GSUpdateResult_Implementation(const FString& GMAnswer, const FString& GMResult)
{
	GSPlayerController->CUpdateResult(FMath::Floor(Chance / 2), IsHostTurn, GMAnswer, GMResult);
}
bool ACGameStateBase::GSUpdateResult_Validate(const FString& GMAnswer, const FString& GMResult)
{
	return true;
}

void ACGameStateBase::GSUpdateTimerAll_Implementation(float RemainTime)
{
	GSPlayerController->CUpdateTimer(RemainTime, TurnChangeDelayTime);
}
bool ACGameStateBase::GSUpdateTimerAll_Validate(float RemainTime)
{
	return true;
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
			}

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
bool ACGameStateBase::GSUpdateScore_Validate(bool IsHostWin)
{
	return true;
}

void ACGameStateBase::GSUpdateHostScoreAll_Implementation(const FString& GMHostScore)
{
	GSPlayerController->CUpdateHostScore(GMHostScore);
}
bool ACGameStateBase::GSUpdateHostScoreAll_Validate(const FString& GMHostScore)
{
	return true;
}

void ACGameStateBase::GSUpdateGuestScoreAll_Implementation(const FString& GMGuestScore)
{
	GSPlayerController->CUpdateGuestScore(GMGuestScore);
}
bool ACGameStateBase::GSUpdateGuestScoreAll_Validate(const FString& GMGuestScore)
{
	return true;
}