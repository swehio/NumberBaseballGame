// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CPlayerState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SAMPLECHAT_CPlayerState_generated_h
#error "CPlayerState.generated.h already included, missing '#pragma once' in CPlayerState.h"
#endif
#define SAMPLECHAT_CPlayerState_generated_h

#define FID_SampleChat_Source_SampleChat_Public_CPlayerState_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACPlayerState(); \
	friend struct Z_Construct_UClass_ACPlayerState_Statics; \
public: \
	DECLARE_CLASS(ACPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SampleChat"), NO_API) \
	DECLARE_SERIALIZER(ACPlayerState)


#define FID_SampleChat_Source_SampleChat_Public_CPlayerState_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACPlayerState(ACPlayerState&&); \
	ACPlayerState(const ACPlayerState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACPlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACPlayerState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACPlayerState) \
	NO_API virtual ~ACPlayerState();


#define FID_SampleChat_Source_SampleChat_Public_CPlayerState_h_12_PROLOG
#define FID_SampleChat_Source_SampleChat_Public_CPlayerState_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SampleChat_Source_SampleChat_Public_CPlayerState_h_15_INCLASS_NO_PURE_DECLS \
	FID_SampleChat_Source_SampleChat_Public_CPlayerState_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SAMPLECHAT_API UClass* StaticClass<class ACPlayerState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SampleChat_Source_SampleChat_Public_CPlayerState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
