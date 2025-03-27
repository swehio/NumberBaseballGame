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

#define FID_SampleChat_Source_SampleChat_Public_CGameStateBase_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void GSShowServerAnswerAll_Implementation(); \
	virtual void SetSwitchTurnSetting_Implementation(); \
	virtual void GSUpdateGuestScoreAll_Implementation(const FString& GMGuestScore); \
	virtual void GSUpdateHostScoreAll_Implementation(const FString& GMHostScore); \
	virtual void GSUpdateScore_Implementation(bool IsHostWin); \
	virtual void GSUpdateResult_Implementation(const FString& GMAnswer, const FString& GMResult); \
	virtual void GSUpdateTimerAll_Implementation(float RemainTime); \
	virtual void GSSetEditableTextReadWrite_Implementation(); \
	virtual void GSSetStartButHiddenAll_Implementation(); \
	virtual void GSSetStartButEnabled_Implementation(); \
	virtual void IncreasePlayerNum_Implementation(); \
	virtual void SetBeforeStartSetting_Implementation(); \
	DECLARE_FUNCTION(execGSShowServerAnswerAll); \
	DECLARE_FUNCTION(execSetSwitchTurnSetting); \
	DECLARE_FUNCTION(execGSUpdateGuestScoreAll); \
	DECLARE_FUNCTION(execGSUpdateHostScoreAll); \
	DECLARE_FUNCTION(execGSUpdateScore); \
	DECLARE_FUNCTION(execGSUpdateResult); \
	DECLARE_FUNCTION(execGSUpdateTimerAll); \
	DECLARE_FUNCTION(execGSSetEditableTextReadWrite); \
	DECLARE_FUNCTION(execGSSetStartButHiddenAll); \
	DECLARE_FUNCTION(execGSSetStartButEnabled); \
	DECLARE_FUNCTION(execIncreasePlayerNum); \
	DECLARE_FUNCTION(execSetBeforeStartSetting);


#define FID_SampleChat_Source_SampleChat_Public_CGameStateBase_h_24_CALLBACK_WRAPPERS
#define FID_SampleChat_Source_SampleChat_Public_CGameStateBase_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACGameStateBase(); \
	friend struct Z_Construct_UClass_ACGameStateBase_Statics; \
public: \
	DECLARE_CLASS(ACGameStateBase, AGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SampleChat"), NO_API) \
	DECLARE_SERIALIZER(ACGameStateBase) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		IsHostTurn=NETFIELD_REP_START, \
		Chance, \
		ServerAnswer, \
		NETFIELD_REP_END=ServerAnswer	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_SampleChat_Source_SampleChat_Public_CGameStateBase_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACGameStateBase(ACGameStateBase&&); \
	ACGameStateBase(const ACGameStateBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACGameStateBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACGameStateBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACGameStateBase) \
	NO_API virtual ~ACGameStateBase();


#define FID_SampleChat_Source_SampleChat_Public_CGameStateBase_h_21_PROLOG
#define FID_SampleChat_Source_SampleChat_Public_CGameStateBase_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SampleChat_Source_SampleChat_Public_CGameStateBase_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SampleChat_Source_SampleChat_Public_CGameStateBase_h_24_CALLBACK_WRAPPERS \
	FID_SampleChat_Source_SampleChat_Public_CGameStateBase_h_24_INCLASS_NO_PURE_DECLS \
	FID_SampleChat_Source_SampleChat_Public_CGameStateBase_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SAMPLECHAT_API UClass* StaticClass<class ACGameStateBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SampleChat_Source_SampleChat_Public_CGameStateBase_h


#define FOREACH_ENUM_EGAMESTATE(op) \
	op(EGameState::EGS_BeforeStart) \
	op(EGameState::EGS_Start) \
	op(EGameState::EGS_WaitAnswer) \
	op(EGameState::EGS_FinishTurn) \
	op(EGameState::EGS_BeforFinish) \
	op(EGameState::EGS_Finish) \
	op(EGameState::EGS_Max) 

enum class EGameState : uint8;
template<> struct TIsUEnumClass<EGameState> { enum { Value = true }; };
template<> SAMPLECHAT_API UEnum* StaticEnum<EGameState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
