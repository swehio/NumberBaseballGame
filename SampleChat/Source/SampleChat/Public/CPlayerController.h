// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "CPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class SAMPLECHAT_API ACPlayerController : public APlayerController
{
	GENERATED_BODY()
public:
	FString UserID;
	UPROPERTY(EditAnywhere)
	TSubclassOf<UUserWidget> WidgetClass;
	class UCUserWidget* Widget;
	class ACGameStateBase* PCGameStateBase;


	void CSetStartButEnabled();
	void CSetStartButHidden();
	void CSetStartButVisible();

	void CSetEditableTextReadWrite();
	void CSetEditableTextReadOnly();

	void CUpdateResult(int32 GSRound, bool GSIsHost, const FString& GSAnswer, const FString& GSResult);
	void CUpdateTimer(float GSRemainTime, float GSTurnChangeDelayTime);

	void CUpdateHostScore(const FString& GSHostScore);
	void CUpdateGuestScore(const FString& GSGuestScore);

	void CShowServerAnswer(const FString& GSServerAnswer);
	void CSetFinishSetting();

	UFUNCTION(Server, Unreliable, WithValidation, BlueprintCallable)
	void OnSendStartToServer();
	UFUNCTION(Server, Unreliable, WithValidation, BlueprintCallable)
	void OnSendMsgToServer(const FString& Msg);

	virtual void BeginPlay() override;
};
