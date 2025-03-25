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
	virtual bool SetBeforeFinishSetting_Validate(); \
	virtual void SetBeforeFinishSetting_Implementation(); \
	virtual bool SetSwitchTurnSetting_Validate(); \
	virtual void SetSwitchTurnSetting_Implementation(); \
	virtual bool SetBeforeStartSetting_Validate(); \
	virtual void SetBeforeStartSetting_Implementation(); \
	virtual bool GSUpdateGuestScoreAll_Validate(const FString& ); \
	virtual void GSUpdateGuestScoreAll_Implementation(const FString& GMGuestScore); \
	virtual bool GSUpdateHostScoreAll_Validate(const FString& ); \
	virtual void GSUpdateHostScoreAll_Implementation(const FString& GMHostScore); \
	virtual bool GSUpdateScore_Validate(bool ); \
	virtual void GSUpdateScore_Implementation(bool IsHostWin); \
	virtual bool GSUpdateTimerAll_Validate(float ); \
	virtual void GSUpdateTimerAll_Implementation(float RemainTime); \
	virtual bool GSSetFinishSettingAll_Validate(); \
	virtual void GSSetFinishSettingAll_Implementation(); \
	virtual bool GSSetEditableTextReadOnlyAll_Validate(); \
	virtual void GSSetEditableTextReadOnlyAll_Implementation(); \
	virtual bool GSShowServerAnswerAll_Validate(); \
	virtual void GSShowServerAnswerAll_Implementation(); \
	virtual bool GSSetStartButHiddenAll_Validate(); \
	virtual void GSSetStartButHiddenAll_Implementation(); \
	virtual bool GSSetStartButEnabled_Validate(); \
	virtual void GSSetStartButEnabled_Implementation(); \
	virtual bool GSUpdateResult_Validate(const FString& , const FString& ); \
	virtual void GSUpdateResult_Implementation(const FString& GMAnswer, const FString& GMResult); \
	virtual bool IncreasePlayerNum_Validate(); \
	virtual void IncreasePlayerNum_Implementation(); \
	virtual bool GSSetEditableTextReadWrite_Validate(); \
	virtual void GSSetEditableTextReadWrite_Implementation(); \
	DECLARE_FUNCTION(execSetBeforeFinishSetting); \
	DECLARE_FUNCTION(execSetSwitchTurnSetting); \
	DECLARE_FUNCTION(execSetBeforeStartSetting); \
	DECLARE_FUNCTION(execGSUpdateGuestScoreAll); \
	DECLARE_FUNCTION(execGSUpdateHostScoreAll); \
	DECLARE_FUNCTION(execGSUpdateScore); \
	DECLARE_FUNCTION(execGSUpdateTimerAll); \
	DECLARE_FUNCTION(execGSSetFinishSettingAll); \
	DECLARE_FUNCTION(execGSSetEditableTextReadOnlyAll); \
	DECLARE_FUNCTION(execGSShowServerAnswerAll); \
	DECLARE_FUNCTION(execGSSetStartButHiddenAll); \
	DECLARE_FUNCTION(execGSSetStartButEnabled); \
	DECLARE_FUNCTION(execGSUpdateResult); \
	DECLARE_FUNCTION(execIncreasePlayerNum); \
	DECLARE_FUNCTION(execGSSetEditableTextReadWrite); \
	DECLARE_FUNCTION(execOnRep_CurrentState);


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
		CurrentState=NETFIELD_REP_START, \
		TurnChangeDelayTime, \
		IsHostTurn, \
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
