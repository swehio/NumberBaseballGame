// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SampleChat/Public/CUserWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCUserWidget() {}

// Begin Cross Module References
SAMPLECHAT_API UClass* Z_Construct_UClass_UCUserWidget();
SAMPLECHAT_API UClass* Z_Construct_UClass_UCUserWidget_NoRegister();
SAMPLECHAT_API UFunction* Z_Construct_UDelegateFunction_SampleChat_MessageToControllerFromWidget__DelegateSignature();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_SampleChat();
// End Cross Module References

// Begin Delegate FMessageToControllerFromWidget
struct Z_Construct_UDelegateFunction_SampleChat_MessageToControllerFromWidget__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CUserWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SampleChat_MessageToControllerFromWidget__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SampleChat, nullptr, "MessageToControllerFromWidget__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SampleChat_MessageToControllerFromWidget__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SampleChat_MessageToControllerFromWidget__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_SampleChat_MessageToControllerFromWidget__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SampleChat_MessageToControllerFromWidget__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FMessageToControllerFromWidget_DelegateWrapper(const FMulticastScriptDelegate& MessageToControllerFromWidget)
{
	MessageToControllerFromWidget.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FMessageToControllerFromWidget

// Begin Class UCUserWidget Function WSetEditableTextReadOnly
static const FName NAME_UCUserWidget_WSetEditableTextReadOnly = FName(TEXT("WSetEditableTextReadOnly"));
void UCUserWidget::WSetEditableTextReadOnly()
{
	UFunction* Func = FindFunctionChecked(NAME_UCUserWidget_WSetEditableTextReadOnly);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		WSetEditableTextReadOnly_Implementation();
	}
}
struct Z_Construct_UFunction_UCUserWidget_WSetEditableTextReadOnly_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CUserWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCUserWidget_WSetEditableTextReadOnly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCUserWidget, nullptr, "WSetEditableTextReadOnly", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCUserWidget_WSetEditableTextReadOnly_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCUserWidget_WSetEditableTextReadOnly_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCUserWidget_WSetEditableTextReadOnly()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCUserWidget_WSetEditableTextReadOnly_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCUserWidget::execWSetEditableTextReadOnly)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->WSetEditableTextReadOnly_Implementation();
	P_NATIVE_END;
}
// End Class UCUserWidget Function WSetEditableTextReadOnly

// Begin Class UCUserWidget Function WSetEditableTextReadWrite
static const FName NAME_UCUserWidget_WSetEditableTextReadWrite = FName(TEXT("WSetEditableTextReadWrite"));
void UCUserWidget::WSetEditableTextReadWrite()
{
	UFunction* Func = FindFunctionChecked(NAME_UCUserWidget_WSetEditableTextReadWrite);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		WSetEditableTextReadWrite_Implementation();
	}
}
struct Z_Construct_UFunction_UCUserWidget_WSetEditableTextReadWrite_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CUserWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCUserWidget_WSetEditableTextReadWrite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCUserWidget, nullptr, "WSetEditableTextReadWrite", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCUserWidget_WSetEditableTextReadWrite_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCUserWidget_WSetEditableTextReadWrite_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCUserWidget_WSetEditableTextReadWrite()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCUserWidget_WSetEditableTextReadWrite_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCUserWidget::execWSetEditableTextReadWrite)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->WSetEditableTextReadWrite_Implementation();
	P_NATIVE_END;
}
// End Class UCUserWidget Function WSetEditableTextReadWrite

// Begin Class UCUserWidget Function WSetFinishSetting
struct CUserWidget_eventWSetFinishSetting_Parms
{
	FString CUserID;
};
static const FName NAME_UCUserWidget_WSetFinishSetting = FName(TEXT("WSetFinishSetting"));
void UCUserWidget::WSetFinishSetting(const FString& CUserID)
{
	UFunction* Func = FindFunctionChecked(NAME_UCUserWidget_WSetFinishSetting);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		CUserWidget_eventWSetFinishSetting_Parms Parms;
		Parms.CUserID=CUserID;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		WSetFinishSetting_Implementation(CUserID);
	}
}
struct Z_Construct_UFunction_UCUserWidget_WSetFinishSetting_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CUserID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CUserID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCUserWidget_WSetFinishSetting_Statics::NewProp_CUserID = { "CUserID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CUserWidget_eventWSetFinishSetting_Parms, CUserID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CUserID_MetaData), NewProp_CUserID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCUserWidget_WSetFinishSetting_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUserWidget_WSetFinishSetting_Statics::NewProp_CUserID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCUserWidget_WSetFinishSetting_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCUserWidget_WSetFinishSetting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCUserWidget, nullptr, "WSetFinishSetting", nullptr, nullptr, Z_Construct_UFunction_UCUserWidget_WSetFinishSetting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCUserWidget_WSetFinishSetting_Statics::PropPointers), sizeof(CUserWidget_eventWSetFinishSetting_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCUserWidget_WSetFinishSetting_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCUserWidget_WSetFinishSetting_Statics::Function_MetaDataParams) };
static_assert(sizeof(CUserWidget_eventWSetFinishSetting_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCUserWidget_WSetFinishSetting()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCUserWidget_WSetFinishSetting_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCUserWidget::execWSetFinishSetting)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_CUserID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->WSetFinishSetting_Implementation(Z_Param_CUserID);
	P_NATIVE_END;
}
// End Class UCUserWidget Function WSetFinishSetting

// Begin Class UCUserWidget Function WSetStartButEnabled
static const FName NAME_UCUserWidget_WSetStartButEnabled = FName(TEXT("WSetStartButEnabled"));
void UCUserWidget::WSetStartButEnabled()
{
	UFunction* Func = FindFunctionChecked(NAME_UCUserWidget_WSetStartButEnabled);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		WSetStartButEnabled_Implementation();
	}
}
struct Z_Construct_UFunction_UCUserWidget_WSetStartButEnabled_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//GameMode->Widget\n" },
#endif
		{ "ModuleRelativePath", "Public/CUserWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GameMode->Widget" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCUserWidget_WSetStartButEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCUserWidget, nullptr, "WSetStartButEnabled", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCUserWidget_WSetStartButEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCUserWidget_WSetStartButEnabled_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCUserWidget_WSetStartButEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCUserWidget_WSetStartButEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCUserWidget::execWSetStartButEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->WSetStartButEnabled_Implementation();
	P_NATIVE_END;
}
// End Class UCUserWidget Function WSetStartButEnabled

// Begin Class UCUserWidget Function WSetStartButHidden
static const FName NAME_UCUserWidget_WSetStartButHidden = FName(TEXT("WSetStartButHidden"));
void UCUserWidget::WSetStartButHidden()
{
	UFunction* Func = FindFunctionChecked(NAME_UCUserWidget_WSetStartButHidden);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		WSetStartButHidden_Implementation();
	}
}
struct Z_Construct_UFunction_UCUserWidget_WSetStartButHidden_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CUserWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCUserWidget_WSetStartButHidden_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCUserWidget, nullptr, "WSetStartButHidden", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCUserWidget_WSetStartButHidden_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCUserWidget_WSetStartButHidden_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCUserWidget_WSetStartButHidden()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCUserWidget_WSetStartButHidden_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCUserWidget::execWSetStartButHidden)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->WSetStartButHidden_Implementation();
	P_NATIVE_END;
}
// End Class UCUserWidget Function WSetStartButHidden

// Begin Class UCUserWidget Function WSetStartButVisible
static const FName NAME_UCUserWidget_WSetStartButVisible = FName(TEXT("WSetStartButVisible"));
void UCUserWidget::WSetStartButVisible()
{
	UFunction* Func = FindFunctionChecked(NAME_UCUserWidget_WSetStartButVisible);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		WSetStartButVisible_Implementation();
	}
}
struct Z_Construct_UFunction_UCUserWidget_WSetStartButVisible_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CUserWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCUserWidget_WSetStartButVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCUserWidget, nullptr, "WSetStartButVisible", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCUserWidget_WSetStartButVisible_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCUserWidget_WSetStartButVisible_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCUserWidget_WSetStartButVisible()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCUserWidget_WSetStartButVisible_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCUserWidget::execWSetStartButVisible)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->WSetStartButVisible_Implementation();
	P_NATIVE_END;
}
// End Class UCUserWidget Function WSetStartButVisible

// Begin Class UCUserWidget Function WShowServerAnswer
struct CUserWidget_eventWShowServerAnswer_Parms
{
	FString CServerAnswer;
};
static const FName NAME_UCUserWidget_WShowServerAnswer = FName(TEXT("WShowServerAnswer"));
void UCUserWidget::WShowServerAnswer(const FString& CServerAnswer)
{
	UFunction* Func = FindFunctionChecked(NAME_UCUserWidget_WShowServerAnswer);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		CUserWidget_eventWShowServerAnswer_Parms Parms;
		Parms.CServerAnswer=CServerAnswer;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		WShowServerAnswer_Implementation(CServerAnswer);
	}
}
struct Z_Construct_UFunction_UCUserWidget_WShowServerAnswer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CServerAnswer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CServerAnswer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCUserWidget_WShowServerAnswer_Statics::NewProp_CServerAnswer = { "CServerAnswer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CUserWidget_eventWShowServerAnswer_Parms, CServerAnswer), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CServerAnswer_MetaData), NewProp_CServerAnswer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCUserWidget_WShowServerAnswer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUserWidget_WShowServerAnswer_Statics::NewProp_CServerAnswer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCUserWidget_WShowServerAnswer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCUserWidget_WShowServerAnswer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCUserWidget, nullptr, "WShowServerAnswer", nullptr, nullptr, Z_Construct_UFunction_UCUserWidget_WShowServerAnswer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCUserWidget_WShowServerAnswer_Statics::PropPointers), sizeof(CUserWidget_eventWShowServerAnswer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCUserWidget_WShowServerAnswer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCUserWidget_WShowServerAnswer_Statics::Function_MetaDataParams) };
static_assert(sizeof(CUserWidget_eventWShowServerAnswer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCUserWidget_WShowServerAnswer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCUserWidget_WShowServerAnswer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCUserWidget::execWShowServerAnswer)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_CServerAnswer);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->WShowServerAnswer_Implementation(Z_Param_CServerAnswer);
	P_NATIVE_END;
}
// End Class UCUserWidget Function WShowServerAnswer

// Begin Class UCUserWidget Function WUpdateGuestScore
struct CUserWidget_eventWUpdateGuestScore_Parms
{
	FString CGuestScore;
};
static const FName NAME_UCUserWidget_WUpdateGuestScore = FName(TEXT("WUpdateGuestScore"));
void UCUserWidget::WUpdateGuestScore(const FString& CGuestScore)
{
	UFunction* Func = FindFunctionChecked(NAME_UCUserWidget_WUpdateGuestScore);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		CUserWidget_eventWUpdateGuestScore_Parms Parms;
		Parms.CGuestScore=CGuestScore;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		WUpdateGuestScore_Implementation(CGuestScore);
	}
}
struct Z_Construct_UFunction_UCUserWidget_WUpdateGuestScore_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CGuestScore_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CGuestScore;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCUserWidget_WUpdateGuestScore_Statics::NewProp_CGuestScore = { "CGuestScore", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CUserWidget_eventWUpdateGuestScore_Parms, CGuestScore), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CGuestScore_MetaData), NewProp_CGuestScore_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCUserWidget_WUpdateGuestScore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUserWidget_WUpdateGuestScore_Statics::NewProp_CGuestScore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCUserWidget_WUpdateGuestScore_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCUserWidget_WUpdateGuestScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCUserWidget, nullptr, "WUpdateGuestScore", nullptr, nullptr, Z_Construct_UFunction_UCUserWidget_WUpdateGuestScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCUserWidget_WUpdateGuestScore_Statics::PropPointers), sizeof(CUserWidget_eventWUpdateGuestScore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCUserWidget_WUpdateGuestScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCUserWidget_WUpdateGuestScore_Statics::Function_MetaDataParams) };
static_assert(sizeof(CUserWidget_eventWUpdateGuestScore_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCUserWidget_WUpdateGuestScore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCUserWidget_WUpdateGuestScore_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCUserWidget::execWUpdateGuestScore)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_CGuestScore);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->WUpdateGuestScore_Implementation(Z_Param_CGuestScore);
	P_NATIVE_END;
}
// End Class UCUserWidget Function WUpdateGuestScore

// Begin Class UCUserWidget Function WUpdateHostScore
struct CUserWidget_eventWUpdateHostScore_Parms
{
	FString CHostScore;
};
static const FName NAME_UCUserWidget_WUpdateHostScore = FName(TEXT("WUpdateHostScore"));
void UCUserWidget::WUpdateHostScore(const FString& CHostScore)
{
	UFunction* Func = FindFunctionChecked(NAME_UCUserWidget_WUpdateHostScore);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		CUserWidget_eventWUpdateHostScore_Parms Parms;
		Parms.CHostScore=CHostScore;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		WUpdateHostScore_Implementation(CHostScore);
	}
}
struct Z_Construct_UFunction_UCUserWidget_WUpdateHostScore_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CHostScore_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CHostScore;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCUserWidget_WUpdateHostScore_Statics::NewProp_CHostScore = { "CHostScore", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CUserWidget_eventWUpdateHostScore_Parms, CHostScore), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CHostScore_MetaData), NewProp_CHostScore_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCUserWidget_WUpdateHostScore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUserWidget_WUpdateHostScore_Statics::NewProp_CHostScore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCUserWidget_WUpdateHostScore_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCUserWidget_WUpdateHostScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCUserWidget, nullptr, "WUpdateHostScore", nullptr, nullptr, Z_Construct_UFunction_UCUserWidget_WUpdateHostScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCUserWidget_WUpdateHostScore_Statics::PropPointers), sizeof(CUserWidget_eventWUpdateHostScore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCUserWidget_WUpdateHostScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCUserWidget_WUpdateHostScore_Statics::Function_MetaDataParams) };
static_assert(sizeof(CUserWidget_eventWUpdateHostScore_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCUserWidget_WUpdateHostScore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCUserWidget_WUpdateHostScore_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCUserWidget::execWUpdateHostScore)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_CHostScore);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->WUpdateHostScore_Implementation(Z_Param_CHostScore);
	P_NATIVE_END;
}
// End Class UCUserWidget Function WUpdateHostScore

// Begin Class UCUserWidget Function WUpdateResult
struct CUserWidget_eventWUpdateResult_Parms
{
	int32 CRound;
	bool CIsHost;
	FString CAnswer;
	FString CResult;
};
static const FName NAME_UCUserWidget_WUpdateResult = FName(TEXT("WUpdateResult"));
void UCUserWidget::WUpdateResult(int32 CRound, bool CIsHost, const FString& CAnswer, const FString& CResult)
{
	UFunction* Func = FindFunctionChecked(NAME_UCUserWidget_WUpdateResult);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		CUserWidget_eventWUpdateResult_Parms Parms;
		Parms.CRound=CRound;
		Parms.CIsHost=CIsHost ? true : false;
		Parms.CAnswer=CAnswer;
		Parms.CResult=CResult;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		WUpdateResult_Implementation(CRound, CIsHost, CAnswer, CResult);
	}
}
struct Z_Construct_UFunction_UCUserWidget_WUpdateResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CAnswer_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CRound;
	static void NewProp_CIsHost_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CIsHost;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CAnswer;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCUserWidget_WUpdateResult_Statics::NewProp_CRound = { "CRound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CUserWidget_eventWUpdateResult_Parms, CRound), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UCUserWidget_WUpdateResult_Statics::NewProp_CIsHost_SetBit(void* Obj)
{
	((CUserWidget_eventWUpdateResult_Parms*)Obj)->CIsHost = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCUserWidget_WUpdateResult_Statics::NewProp_CIsHost = { "CIsHost", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CUserWidget_eventWUpdateResult_Parms), &Z_Construct_UFunction_UCUserWidget_WUpdateResult_Statics::NewProp_CIsHost_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCUserWidget_WUpdateResult_Statics::NewProp_CAnswer = { "CAnswer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CUserWidget_eventWUpdateResult_Parms, CAnswer), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CAnswer_MetaData), NewProp_CAnswer_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCUserWidget_WUpdateResult_Statics::NewProp_CResult = { "CResult", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CUserWidget_eventWUpdateResult_Parms, CResult), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CResult_MetaData), NewProp_CResult_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCUserWidget_WUpdateResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUserWidget_WUpdateResult_Statics::NewProp_CRound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUserWidget_WUpdateResult_Statics::NewProp_CIsHost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUserWidget_WUpdateResult_Statics::NewProp_CAnswer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUserWidget_WUpdateResult_Statics::NewProp_CResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCUserWidget_WUpdateResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCUserWidget_WUpdateResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCUserWidget, nullptr, "WUpdateResult", nullptr, nullptr, Z_Construct_UFunction_UCUserWidget_WUpdateResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCUserWidget_WUpdateResult_Statics::PropPointers), sizeof(CUserWidget_eventWUpdateResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCUserWidget_WUpdateResult_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCUserWidget_WUpdateResult_Statics::Function_MetaDataParams) };
static_assert(sizeof(CUserWidget_eventWUpdateResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCUserWidget_WUpdateResult()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCUserWidget_WUpdateResult_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCUserWidget::execWUpdateResult)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_CRound);
	P_GET_UBOOL(Z_Param_CIsHost);
	P_GET_PROPERTY(FStrProperty,Z_Param_CAnswer);
	P_GET_PROPERTY(FStrProperty,Z_Param_CResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->WUpdateResult_Implementation(Z_Param_CRound,Z_Param_CIsHost,Z_Param_CAnswer,Z_Param_CResult);
	P_NATIVE_END;
}
// End Class UCUserWidget Function WUpdateResult

// Begin Class UCUserWidget Function WUpdateTimer
struct CUserWidget_eventWUpdateTimer_Parms
{
	float CRemainTime;
	float CTurnChangeDelayTime;
};
static const FName NAME_UCUserWidget_WUpdateTimer = FName(TEXT("WUpdateTimer"));
void UCUserWidget::WUpdateTimer(float CRemainTime, float CTurnChangeDelayTime)
{
	UFunction* Func = FindFunctionChecked(NAME_UCUserWidget_WUpdateTimer);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		CUserWidget_eventWUpdateTimer_Parms Parms;
		Parms.CRemainTime=CRemainTime;
		Parms.CTurnChangeDelayTime=CTurnChangeDelayTime;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		WUpdateTimer_Implementation(CRemainTime, CTurnChangeDelayTime);
	}
}
struct Z_Construct_UFunction_UCUserWidget_WUpdateTimer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CUserWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CRemainTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTurnChangeDelayTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCUserWidget_WUpdateTimer_Statics::NewProp_CRemainTime = { "CRemainTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CUserWidget_eventWUpdateTimer_Parms, CRemainTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCUserWidget_WUpdateTimer_Statics::NewProp_CTurnChangeDelayTime = { "CTurnChangeDelayTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CUserWidget_eventWUpdateTimer_Parms, CTurnChangeDelayTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCUserWidget_WUpdateTimer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUserWidget_WUpdateTimer_Statics::NewProp_CRemainTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUserWidget_WUpdateTimer_Statics::NewProp_CTurnChangeDelayTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCUserWidget_WUpdateTimer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCUserWidget_WUpdateTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCUserWidget, nullptr, "WUpdateTimer", nullptr, nullptr, Z_Construct_UFunction_UCUserWidget_WUpdateTimer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCUserWidget_WUpdateTimer_Statics::PropPointers), sizeof(CUserWidget_eventWUpdateTimer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCUserWidget_WUpdateTimer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCUserWidget_WUpdateTimer_Statics::Function_MetaDataParams) };
static_assert(sizeof(CUserWidget_eventWUpdateTimer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCUserWidget_WUpdateTimer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCUserWidget_WUpdateTimer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCUserWidget::execWUpdateTimer)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_CRemainTime);
	P_GET_PROPERTY(FFloatProperty,Z_Param_CTurnChangeDelayTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->WUpdateTimer_Implementation(Z_Param_CRemainTime,Z_Param_CTurnChangeDelayTime);
	P_NATIVE_END;
}
// End Class UCUserWidget Function WUpdateTimer

// Begin Class UCUserWidget
void UCUserWidget::StaticRegisterNativesUCUserWidget()
{
	UClass* Class = UCUserWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "WSetEditableTextReadOnly", &UCUserWidget::execWSetEditableTextReadOnly },
		{ "WSetEditableTextReadWrite", &UCUserWidget::execWSetEditableTextReadWrite },
		{ "WSetFinishSetting", &UCUserWidget::execWSetFinishSetting },
		{ "WSetStartButEnabled", &UCUserWidget::execWSetStartButEnabled },
		{ "WSetStartButHidden", &UCUserWidget::execWSetStartButHidden },
		{ "WSetStartButVisible", &UCUserWidget::execWSetStartButVisible },
		{ "WShowServerAnswer", &UCUserWidget::execWShowServerAnswer },
		{ "WUpdateGuestScore", &UCUserWidget::execWUpdateGuestScore },
		{ "WUpdateHostScore", &UCUserWidget::execWUpdateHostScore },
		{ "WUpdateResult", &UCUserWidget::execWUpdateResult },
		{ "WUpdateTimer", &UCUserWidget::execWUpdateTimer },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCUserWidget);
UClass* Z_Construct_UClass_UCUserWidget_NoRegister()
{
	return UCUserWidget::StaticClass();
}
struct Z_Construct_UClass_UCUserWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "CUserWidget.h" },
		{ "ModuleRelativePath", "Public/CUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MessageToControllerFromWidget_MetaData[] = {
		{ "Category", "CUserWidget" },
		{ "ModuleRelativePath", "Public/CUserWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_MessageToControllerFromWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCUserWidget_WSetEditableTextReadOnly, "WSetEditableTextReadOnly" }, // 1360948113
		{ &Z_Construct_UFunction_UCUserWidget_WSetEditableTextReadWrite, "WSetEditableTextReadWrite" }, // 902778829
		{ &Z_Construct_UFunction_UCUserWidget_WSetFinishSetting, "WSetFinishSetting" }, // 71350492
		{ &Z_Construct_UFunction_UCUserWidget_WSetStartButEnabled, "WSetStartButEnabled" }, // 3391862266
		{ &Z_Construct_UFunction_UCUserWidget_WSetStartButHidden, "WSetStartButHidden" }, // 2709334435
		{ &Z_Construct_UFunction_UCUserWidget_WSetStartButVisible, "WSetStartButVisible" }, // 3030003519
		{ &Z_Construct_UFunction_UCUserWidget_WShowServerAnswer, "WShowServerAnswer" }, // 271096448
		{ &Z_Construct_UFunction_UCUserWidget_WUpdateGuestScore, "WUpdateGuestScore" }, // 725407833
		{ &Z_Construct_UFunction_UCUserWidget_WUpdateHostScore, "WUpdateHostScore" }, // 461720921
		{ &Z_Construct_UFunction_UCUserWidget_WUpdateResult, "WUpdateResult" }, // 3053331380
		{ &Z_Construct_UFunction_UCUserWidget_WUpdateTimer, "WUpdateTimer" }, // 494227776
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCUserWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCUserWidget_Statics::NewProp_MessageToControllerFromWidget = { "MessageToControllerFromWidget", nullptr, (EPropertyFlags)0x00101000100a0001, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCUserWidget, MessageToControllerFromWidget), Z_Construct_UDelegateFunction_SampleChat_MessageToControllerFromWidget__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MessageToControllerFromWidget_MetaData), NewProp_MessageToControllerFromWidget_MetaData) }; // 1210428897
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCUserWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCUserWidget_Statics::NewProp_MessageToControllerFromWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCUserWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCUserWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_SampleChat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCUserWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCUserWidget_Statics::ClassParams = {
	&UCUserWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCUserWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCUserWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCUserWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UCUserWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCUserWidget()
{
	if (!Z_Registration_Info_UClass_UCUserWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCUserWidget.OuterSingleton, Z_Construct_UClass_UCUserWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCUserWidget.OuterSingleton;
}
template<> SAMPLECHAT_API UClass* StaticClass<UCUserWidget>()
{
	return UCUserWidget::StaticClass();
}
UCUserWidget::UCUserWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCUserWidget);
UCUserWidget::~UCUserWidget() {}
// End Class UCUserWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_SampleChat_Source_SampleChat_Public_CUserWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCUserWidget, UCUserWidget::StaticClass, TEXT("UCUserWidget"), &Z_Registration_Info_UClass_UCUserWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCUserWidget), 1449502936U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SampleChat_Source_SampleChat_Public_CUserWidget_h_3978944117(TEXT("/Script/SampleChat"),
	Z_CompiledInDeferFile_FID_SampleChat_Source_SampleChat_Public_CUserWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SampleChat_Source_SampleChat_Public_CUserWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
