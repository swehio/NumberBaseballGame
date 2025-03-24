// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CUserWidget.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FMessageToControllerFromWidget);

UCLASS()
class SAMPLECHAT_API UCUserWidget : public UUserWidget
{
	GENERATED_BODY()
public:

	UPROPERTY(BlueprintAssignable, VisibleAnywhere, BlueprintCallable)
	FMessageToControllerFromWidget MessageToControllerFromWidget;

	//GameMode->Widget

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void WSetStartButEnabled();
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void WSetStartButHidden();
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void WSetStartButVisible();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void WSetEditableTextReadWrite();
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void WSetEditableTextReadOnly();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void WUpdateResult(int32 CRound, bool CIsHost, const FString& CAnswer, const FString& CResult);
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void WUpdateTimer(float CRemainTime, float CTurnChangeDelayTime);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void WUpdateHostScore(const FString& CHostScore);
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void WUpdateGuestScore(const FString& CGuestScore);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void WShowServerAnswer(const FString& CServerAnswer);
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void WSetFinishSetting(const FString& CUserID);

	//Widget->GameMode

};
