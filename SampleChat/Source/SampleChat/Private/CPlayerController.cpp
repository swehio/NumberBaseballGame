// Fill out your copyright notice in the Description page of Project Settings.

#include "CPlayerController.h"
#include "CUserWidget.h"
#include "CGameStatebase.h"
#include "CGameModeBase.h"



void ACPlayerController::BeginPlay()
{
	SetShowMouseCursor(true);

	if (GetRemoteRole() == ROLE_None)
		return;

	UserID = HasAuthority() ? "Host" : "Guest";
	if (WidgetClass)
	{
		Widget = CreateWidget<UCUserWidget>(this, WidgetClass);
		if (Widget)
		{
			Widget->AddToViewport();
		}
	}
	PCGameStateBase = Cast<ACGameStateBase>(GetWorld()->GetGameState());
}

void ACPlayerController::CSetStartButEnabled()
{
	Widget->WSetStartButEnabled();
}

void ACPlayerController::CSetStartButHidden()
{
	Widget->WSetStartButHidden();
}

void ACPlayerController::CSetStartButVisible()
{
	Widget->WSetStartButVisible();
}

void ACPlayerController::CSetEditableTextReadWrite()
{
	Widget->WSetEditableTextReadWrite();
}

void ACPlayerController::CSetEditableTextReadOnly()
{
	Widget->WSetEditableTextReadOnly();
}

void ACPlayerController::CUpdateResult(int32 GSRound, bool GSIsHost, const FString& GSAnswer, const FString& GSResult)
{
	Widget->WUpdateResult(GSRound, GSIsHost, GSAnswer, GSResult);
}

void ACPlayerController::CUpdateTimer(float GSRemainTime, float GSTurnChangeDelayTime)
{
	Widget->WUpdateTimer(GSRemainTime, GSTurnChangeDelayTime);
}

void ACPlayerController::CUpdateHostScore(const FString& GSHostScore)
{
	Widget->WUpdateHostScore(GSHostScore);
}

void ACPlayerController::CUpdateGuestScore(const FString& GSGuestScore)
{
	Widget->WUpdateGuestScore(GSGuestScore);
}

void ACPlayerController::CShowServerAnswer(const FString& GSServerAnswer)
{
	Widget->WShowServerAnswer(GSServerAnswer);
}

void ACPlayerController::CSetFinishSetting()
{
	Widget->WSetFinishSetting(UserID);
}

void ACPlayerController::OnSendStartToServer_Implementation()
{
	ACGameModeBase* CGameModeBase = Cast<ACGameModeBase>(GetWorld()->GetAuthGameMode());
	if (CGameModeBase)
	{
		CGameModeBase->StartGame();
	}
}
bool ACPlayerController::OnSendStartToServer_Validate()
{
	return true;
}

void ACPlayerController::OnSendMsgToServer_Implementation(const FString& Msg)
{
	AGameModeBase* GameModeBase = GetWorld()->GetAuthGameMode();
	if (GameModeBase)
	{
		ACGameModeBase* CGameModeBase = Cast<ACGameModeBase>(GameModeBase);
		if (CGameModeBase)
		{
			CGameModeBase->GotMessageFromClient(Msg);
		}
	}
}
bool ACPlayerController::OnSendMsgToServer_Validate(const FString& Msg)
{
	return true;
}

