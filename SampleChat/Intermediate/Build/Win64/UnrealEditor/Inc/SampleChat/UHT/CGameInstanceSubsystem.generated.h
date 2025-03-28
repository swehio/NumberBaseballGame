// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CGameInstanceSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SAMPLECHAT_CGameInstanceSubsystem_generated_h
#error "CGameInstanceSubsystem.generated.h already included, missing '#pragma once' in CGameInstanceSubsystem.h"
#endif
#define SAMPLECHAT_CGameInstanceSubsystem_generated_h

#define FID_SampleChat_Source_SampleChat_Public_CGameInstanceSubsystem_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGISSSetUserName); \
	DECLARE_FUNCTION(execGISSGetUserName);


#define FID_SampleChat_Source_SampleChat_Public_CGameInstanceSubsystem_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCGameInstanceSubsystem(); \
	friend struct Z_Construct_UClass_UCGameInstanceSubsystem_Statics; \
public: \
	DECLARE_CLASS(UCGameInstanceSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SampleChat"), NO_API) \
	DECLARE_SERIALIZER(UCGameInstanceSubsystem)


#define FID_SampleChat_Source_SampleChat_Public_CGameInstanceSubsystem_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCGameInstanceSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCGameInstanceSubsystem(UCGameInstanceSubsystem&&); \
	UCGameInstanceSubsystem(const UCGameInstanceSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCGameInstanceSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCGameInstanceSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCGameInstanceSubsystem) \
	NO_API virtual ~UCGameInstanceSubsystem();


#define FID_SampleChat_Source_SampleChat_Public_CGameInstanceSubsystem_h_12_PROLOG
#define FID_SampleChat_Source_SampleChat_Public_CGameInstanceSubsystem_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SampleChat_Source_SampleChat_Public_CGameInstanceSubsystem_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SampleChat_Source_SampleChat_Public_CGameInstanceSubsystem_h_15_INCLASS_NO_PURE_DECLS \
	FID_SampleChat_Source_SampleChat_Public_CGameInstanceSubsystem_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SAMPLECHAT_API UClass* StaticClass<class UCGameInstanceSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SampleChat_Source_SampleChat_Public_CGameInstanceSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
