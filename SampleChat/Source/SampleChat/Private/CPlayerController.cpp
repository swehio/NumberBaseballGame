// Fill out your copyright notice in the Description page of Project Settings.

#include "CPlayerController.h"
#include "CUserWidget.h"
#include "CGameStatebase.h"
#include "CGameModeBase.h"



void ACPlayerController::BeginPlay()
{
	Super::BeginPlay();
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
	Widget->WSetFinishSetting(UserID);
}

void ACPlayerController::CSetStartButEnabled()
{
	Widget->WSetStartButEnabled();
}

void ACPlayerController::CSetStartButHidden()
{
	Widget->WSetStartButHidden();
}

void ACPlayerController::CSetEditableTextReadWrite()
{
	Widget->WSetEditableTextReadWrite();
}

void ACPlayerController::CUpdateResult(int32 GSRound, bool GSIsHost, const FString& GSAnswer, const FString& GSResult)
{
	Widget->WUpdateResult(GSRound, GSIsHost, GSAnswer, GSResult);
	Widget->WSetEditableTextReadOnly();
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
	Widget->WSetStartButVisible();
}

void ACPlayerController::OnSendStartToServer_Implementation()
{
	ACGameModeBase* CGameModeBase = Cast<ACGameModeBase>(GetWorld()->GetAuthGameMode());
	if (CGameModeBase)
	{
		CGameModeBase->StartGame();
	}
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

