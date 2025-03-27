// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CGameModeBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SAMPLECHAT_CGameModeBase_generated_h
#error "CGameModeBase.generated.h already included, missing '#pragma once' in CGameModeBase.h"
#endif
#define SAMPLECHAT_CGameModeBase_generated_h

#define FID_SampleChat_Source_SampleChat_Public_CGameModeBase_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACGameModeBase(); \
	friend struct Z_Construct_UClass_ACGameModeBase_Statics; \
public: \
	DECLARE_CLASS(ACGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/SampleChat"), NO_API) \
	DECLARE_SERIALIZER(ACGameModeBase)


#define FID_SampleChat_Source_SampleChat_Public_CGameModeBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACGameModeBase(ACGameModeBase&&); \
	ACGameModeBase(const ACGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACGameModeBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACGameModeBase) \
	NO_API virtual ~ACGameModeBase();


#define FID_SampleChat_Source_SampleChat_Public_CGameModeBase_h_11_PROLOG
#define FID_SampleChat_Source_SampleChat_Public_CGameModeBase_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SampleChat_Source_SampleChat_Public_CGameModeBase_h_14_INCLASS_NO_PURE_DECLS \
	FID_SampleChat_Source_SampleChat_Public_CGameModeBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SAMPLECHAT_API UClass* StaticClass<class ACGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SampleChat_Source_SampleChat_Public_CGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
