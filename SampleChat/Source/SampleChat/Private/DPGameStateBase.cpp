// Fill out your copyright notice in the Description page of Project Settings.


#include "DPGameStateBase.h"
#include "Net/UnrealNetwork.h"

void ADPGameStateBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(ADPGameStateBase, CurrentGamePhase);
}

void ADPGameStateBase::OnRep_CurrentGamePhase()
{

}
