// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CUserWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SAMPLECHAT_CUserWidget_generated_h
#error "CUserWidget.generated.h already included, missing '#pragma once' in CUserWidget.h"
#endif
#define SAMPLECHAT_CUserWidget_generated_h

#define FID_SampleChat_Source_SampleChat_Public_CUserWidget_h_9_DELEGATE \
SAMPLECHAT_API void FMessageToControllerFromWidget_DelegateWrapper(const FMulticastScriptDelegate& MessageToControllerFromWidget);


#define FID_SampleChat_Source_SampleChat_Public_CUserWidget_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void WSetFinishSetting_Implementation(const FString& CUserID); \
	virtual void WShowServerAnswer_Implementation(const FString& CServerAnswer); \
	virtual void WUpdateGuestScore_Implementation(const FString& CGuestScore); \
	virtual void WUpdateHostScore_Implementation(const FString& CHostScore); \
	virtual void WUpdateTimer_Implementation(float CRemainTime, float CTurnChangeDelayTime); \
	virtual void WUpdateResult_Implementation(int32 CRound, bool CIsHost, const FString& CAnswer, const FString& CResult); \
	virtual void WSetEditableTextReadOnly_Implementation(); \
	virtual void WSetEditableTextReadWrite_Implementation(); \
	virtual void WSetStartButVisible_Implementation(); \
	virtual void WSetStartButHidden_Implementation(); \
	virtual void WSetStartButEnabled_Implementation(); \
	DECLARE_FUNCTION(execWSetFinishSetting); \
	DECLARE_FUNCTION(execWShowServerAnswer); \
	DECLARE_FUNCTION(execWUpdateGuestScore); \
	DECLARE_FUNCTION(execWUpdateHostScore); \
	DECLARE_FUNCTION(execWUpdateTimer); \
	DECLARE_FUNCTION(execWUpdateResult); \
	DECLARE_FUNCTION(execWSetEditableTextReadOnly); \
	DECLARE_FUNCTION(execWSetEditableTextReadWrite); \
	DECLARE_FUNCTION(execWSetStartButVisible); \
	DECLARE_FUNCTION(execWSetStartButHidden); \
	DECLARE_FUNCTION(execWSetStartButEnabled);


#define FID_SampleChat_Source_SampleChat_Public_CUserWidget_h_14_CALLBACK_WRAPPERS
#define FID_SampleChat_Source_SampleChat_Public_CUserWidget_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCUserWidget(); \
	friend struct Z_Construct_UClass_UCUserWidget_Statics; \
public: \
	DECLARE_CLASS(UCUserWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SampleChat"), NO_API) \
	DECLARE_SERIALIZER(UCUserWidget)


#define FID_SampleChat_Source_SampleChat_Public_CUserWidget_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCUserWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCUserWidget(UCUserWidget&&); \
	UCUserWidget(const UCUserWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCUserWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCUserWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCUserWidget) \
	NO_API virtual ~UCUserWidget();


#define FID_SampleChat_Source_SampleChat_Public_CUserWidget_h_11_PROLOG
#define FID_SampleChat_Source_SampleChat_Public_CUserWidget_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SampleChat_Source_SampleChat_Public_CUserWidget_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SampleChat_Source_SampleChat_Public_CUserWidget_h_14_CALLBACK_WRAPPERS \
	FID_SampleChat_Source_SampleChat_Public_CUserWidget_h_14_INCLASS_NO_PURE_DECLS \
	FID_SampleChat_Source_SampleChat_Public_CUserWidget_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SAMPLECHAT_API UClass* StaticClass<class UCUserWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SampleChat_Source_SampleChat_Public_CUserWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
