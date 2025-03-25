// Fill out your copyright notice in the Description page of Project Settings.


#include "CGameStateBase.h"
#include "CPlayerState.h"
#include "CPlayerController.h"
#include "GenerateNumberForBaseBallGame.h"
#include "CoreMinimal.h"
#include "Net/UnrealNetwork.h"

ACGameStateBase::ACGameStateBase() :
	CurrentState(EGameState::EGS_Max),
	PlayerNum(0),
	TurnChangeDelayTime(10.0),
	IsHostTurn(true),
	Chance(6),
	GSPlayerController(nullptr),
	ServerAnswer("")
{
	
}

void ACGameStateBase::BeginPlay()
{
	Super::BeginPlay();
	GSPlayerController = Cast<ACPlayerController>(GetWorld()->GetFirstPlayerController());
	UE_LOG(LogTemp, Warning, TEXT("CurrentGameState : %s"), *UEnum::GetValueAsString(CurrentState));
}

void ACGameStateBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(ACGameStateBase, CurrentState);
	DOREPLIFETIME(ACGameStateBase, IsHostTurn);
	DOREPLIFETIME(ACGameStateBase, ServerAnswer);
	DOREPLIFETIME(ACGameStateBase, Chance);
}

void ACGameStateBase::OnRep_CurrentState()
{
	switch (CurrentState)
	{
	case EGameState::EGS_BeforeStart :
		UE_LOG(LogTemp, Warning, TEXT("@EGS_BeforeStart"));
		break;
	case EGameState::EGS_Start :
		UE_LOG(LogTemp, Warning, TEXT("@EGS_Start"));
		break;
	case EGameState::EGS_WaitAnswer:
		UE_LOG(LogTemp, Warning, TEXT("@EGS_WaitAnswer"));
		break;
	case EGameState::EGS_FinishTurn:
		UE_LOG(LogTemp, Warning, TEXT("@EGS_FinishTurn"));
		break;
	case EGameState::EGS_BeforFinish:
		UE_LOG(LogTemp, Warning, TEXT("@EGS_BeforFinish"));
		break;
	case EGameState::EGS_Finish:
		UE_LOG(LogTemp, Warning, TEXT("@EGS_Finish"));
		break;
	case EGameState::EGS_Max:
		UE_LOG(LogTemp, Warning, TEXT("@EGS_Max"));
		break;
	default:
		UE_LOG(LogTemp, Warning, TEXT("@EGS_Default"));
		break;

	}
}

void ACGameStateBase::IncreasePlayerNum_Implementation()
{
	PlayerNum++;
	if (PlayerNum > 1)
	{
		GSSetStartButEnabled();
	}
}
bool ACGameStateBase::IncreasePlayerNum_Validate()
{
	return true;
}

bool ACGameStateBase::IsChanceZero()
{
	return Chance == 0;
}

void ACGameStateBase::GSSetStartButEnabled_Implementation()
{
	GSPlayerController->CSetStartButEnabled();
}
bool ACGameStateBase::GSSetStartButEnabled_Validate()
{
	return true;
}

void ACGameStateBase::GSSetStartButHiddenAll_Implementation()
{
	GSPlayerController->CSetStartButHidden();
}
bool ACGameStateBase::GSSetStartButHiddenAll_Validate()
{
	return true;
}

void ACGameStateBase::GSSetEditableTextReadWrite_Implementation()
{
	bool IsHost = GSPlayerController->UserID == "Host" ? true : false;
	if (IsHost == IsHostTurn)
	{
		GSPlayerController->CSetEditableTextReadWrite();
	}
	UE_LOG(LogTemp, Warning, TEXT("UserID : %s, IsHostTurn : %d, SetTurn : %d"), *GSPlayerController->UserID, IsHostTurn, IsHost == IsHostTurn);
}
bool ACGameStateBase::GSSetEditableTextReadWrite_Validate()
{
	return true;
}

void ACGameStateBase::GSSetEditableTextReadOnlyAll_Implementation()
{
	GSPlayerController->CSetEditableTextReadOnly();
}

bool ACGameStateBase::GSSetEditableTextReadOnlyAll_Validate()
{
	return true;
}

void ACGameStateBase::GSUpdateResult_Implementation(const FString& GMAnswer, const FString& GMResult)
{
	GSPlayerController->CUpdateResult(FMath::Floor(Chance / 2), IsHostTurn, GMAnswer, GMResult);
}
bool ACGameStateBase::GSUpdateResult_Validate(const FString& GMAnswer, const FString& GMResult)
{
	return true;
}

void ACGameStateBase::GSShowServerAnswerAll_Implementation()
{
	GSPlayerController->CShowServerAnswer(ServerAnswer);
}
bool ACGameStateBase::GSShowServerAnswerAll_Validate()
{
	return true;
}

void ACGameStateBase::GSSetFinishSettingAll_Implementation()
{
	GSPlayerController->CSetFinishSetting();
}

bool ACGameStateBase::GSSetFinishSettingAll_Validate()
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

void ACGameStateBase::SetBeforeStartSetting_Implementation()
{
	Chance = 6;
	ServerAnswer = UGenerateNumberForBaseBallGame::GenerateRandomNum();
	CurrentState = EGameState::EGS_Start;
	IsHostTurn = true;
	UE_LOG(LogTemp, Warning, TEXT("ServerAnswer : %s"), *ServerAnswer);
}
bool ACGameStateBase::SetBeforeStartSetting_Validate()
{
	return true;
}

void ACGameStateBase::SetSwitchTurnSetting_Implementation()
{
	Chance--;
	IsHostTurn = !IsHostTurn;
}
bool ACGameStateBase::SetSwitchTurnSetting_Validate()
{
	return true;
}

void ACGameStateBase::SetBeforeFinishSetting_Implementation()
{
	FTimerHandle DelayBeforeFinish;
	GetWorldTimerManager().SetTimer(DelayBeforeFinish, FTimerDelegate::CreateUObject(this, &ACGameStateBase::GSSetFinishSettingAll), 3.0, false);
}
bool ACGameStateBase::SetBeforeFinishSetting_Validate()
{
	return true;
}

