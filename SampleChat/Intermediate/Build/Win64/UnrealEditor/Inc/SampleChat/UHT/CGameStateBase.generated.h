// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CGameStateBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SAMPLECHAT_CGameStateBase_generated_h
#error "CGameStateBase.generated.h already included, missing '#pragma once' in CGameStateBase.h"
#endif
#define SAMPLECHAT_CGameStateBase_generated_h

#define FID_SampleChat_Source_SampleChat_Public_CGameStateBase_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool GSUpdateGuestScoreAll_Validate(const FString& ); \
	virtual void GSUpdateGuestScoreAll_Implementation(const FString& GMGuestScore); \
	virtual bool GSUpdateHostScoreAll_Validate(const FString& ); \
	virtual void GSUpdateHostScoreAll_Implementation(const FString& GMHostScore); \
	virtual bool GSUpdateScore_Validate(bool ); \
	virtual void GSUpdateScore_Implementation(bool IsHostWin); \
	virtual bool GSUpdateTimerAll_Validate(float ); \
	virtual void GSUpdateTimerAll_Implementation(float RemainTime); \
	virtual bool GSUpdateResult_Validate(const FString& , const FString& ); \
	virtual void GSUpdateResult_Implementation(const FString& GMAnswer, const FString& GMResult); \
	virtual bool IncreasePlayerNum_Validate(); \
	virtual void IncreasePlayerNum_Implementation(); \
	DECLARE_FUNCTION(execGSUpdateGuestScoreAll); \
	DECLARE_FUNCTION(execGSUpdateHostScoreAll); \
	DECLARE_FUNCTION(execGSUpdateScore); \
	DECLARE_FUNCTION(execGSUpdateTimerAll); \
	DECLARE_FUNCTION(execGSUpdateResult); \
	DECLARE_FUNCTION(execIncreasePlayerNum);


#define FID_SampleChat_Source_SampleChat_Public_CGameStateBase_h_23_CALLBACK_WRAPPERS
#define FID_SampleChat_Source_SampleChat_Public_CGameStateBase_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACGameStateBase(); \
	friend struct Z_Construct_UClass_ACGameStateBase_Statics; \
public: \
	DECLARE_CLASS(ACGameStateBase, AGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SampleChat"), NO_API) \
	DECLARE_SERIALIZER(ACGameStateBase)


#define FID_SampleChat_Source_SampleChat_Public_CGameStateBase_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACGameStateBase(ACGameStateBase&&); \
	ACGameStateBase(const ACGameStateBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACGameStateBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACGameStateBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACGameStateBase) \
	NO_API virtual ~ACGameStateBase();


#define FID_SampleChat_Source_SampleChat_Public_CGameStateBase_h_20_PROLOG
#define FID_SampleChat_Source_SampleChat_Public_CGameStateBase_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SampleChat_Source_SampleChat_Public_CGameStateBase_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SampleChat_Source_SampleChat_Public_CGameStateBase_h_23_CALLBACK_WRAPPERS \
	FID_SampleChat_Source_SampleChat_Public_CGameStateBase_h_23_INCLASS_NO_PURE_DECLS \
	FID_SampleChat_Source_SampleChat_Public_CGameStateBase_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SAMPLECHAT_API UClass* StaticClass<class ACGameStateBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SampleChat_Source_SampleChat_Public_CGameStateBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
