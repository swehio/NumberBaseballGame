// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DPGameModeBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SAMPLECHAT_DPGameModeBase_generated_h
#error "DPGameModeBase.generated.h already included, missing '#pragma once' in DPGameModeBase.h"
#endif
#define SAMPLECHAT_DPGameModeBase_generated_h

#define FID_SampleChat_Source_SampleChat_Public_DPGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADPGameModeBase(); \
	friend struct Z_Construct_UClass_ADPGameModeBase_Statics; \
public: \
	DECLARE_CLASS(ADPGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/SampleChat"), NO_API) \
	DECLARE_SERIALIZER(ADPGameModeBase)


#define FID_SampleChat_Source_SampleChat_Public_DPGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADPGameModeBase(ADPGameModeBase&&); \
	ADPGameModeBase(const ADPGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADPGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADPGameModeBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADPGameModeBase) \
	NO_API virtual ~ADPGameModeBase();


#define FID_SampleChat_Source_SampleChat_Public_DPGameModeBase_h_12_PROLOG
#define FID_SampleChat_Source_SampleChat_Public_DPGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SampleChat_Source_SampleChat_Public_DPGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	FID_SampleChat_Source_SampleChat_Public_DPGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SAMPLECHAT_API UClass* StaticClass<class ADPGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SampleChat_Source_SampleChat_Public_DPGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
