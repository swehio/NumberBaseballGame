// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DPGameStateBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SAMPLECHAT_DPGameStateBase_generated_h
#error "DPGameStateBase.generated.h already included, missing '#pragma once' in DPGameStateBase.h"
#endif
#define SAMPLECHAT_DPGameStateBase_generated_h

#define FID_SampleChat_Source_SampleChat_Public_DPGameStateBase_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_CurrentGamePhase);


#define FID_SampleChat_Source_SampleChat_Public_DPGameStateBase_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADPGameStateBase(); \
	friend struct Z_Construct_UClass_ADPGameStateBase_Statics; \
public: \
	DECLARE_CLASS(ADPGameStateBase, AGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SampleChat"), NO_API) \
	DECLARE_SERIALIZER(ADPGameStateBase) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentGamePhase=NETFIELD_REP_START, \
		NETFIELD_REP_END=CurrentGamePhase	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_SampleChat_Source_SampleChat_Public_DPGameStateBase_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADPGameStateBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADPGameStateBase(ADPGameStateBase&&); \
	ADPGameStateBase(const ADPGameStateBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADPGameStateBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADPGameStateBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADPGameStateBase) \
	NO_API virtual ~ADPGameStateBase();


#define FID_SampleChat_Source_SampleChat_Public_DPGameStateBase_h_14_PROLOG
#define FID_SampleChat_Source_SampleChat_Public_DPGameStateBase_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SampleChat_Source_SampleChat_Public_DPGameStateBase_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SampleChat_Source_SampleChat_Public_DPGameStateBase_h_17_INCLASS_NO_PURE_DECLS \
	FID_SampleChat_Source_SampleChat_Public_DPGameStateBase_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SAMPLECHAT_API UClass* StaticClass<class ADPGameStateBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SampleChat_Source_SampleChat_Public_DPGameStateBase_h


#define FOREACH_ENUM_EGAMEPHASE(op) \
	op(EGamePhase::Wating) \
	op(EGamePhase::Guessing) \
	op(EGamePhase::Judging) \
	op(EGamePhase::TurnSwitching) \
	op(EGamePhase::GameOver) \
	op(EGamePhase::Max) 

enum class EGamePhase : uint8;
template<> struct TIsUEnumClass<EGamePhase> { enum { Value = true }; };
template<> SAMPLECHAT_API UEnum* StaticEnum<EGamePhase>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
