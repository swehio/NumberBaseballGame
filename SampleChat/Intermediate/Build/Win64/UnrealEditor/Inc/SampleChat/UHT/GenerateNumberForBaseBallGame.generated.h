// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GenerateNumberForBaseBallGame.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SAMPLECHAT_GenerateNumberForBaseBallGame_generated_h
#error "GenerateNumberForBaseBallGame.generated.h already included, missing '#pragma once' in GenerateNumberForBaseBallGame.h"
#endif
#define SAMPLECHAT_GenerateNumberForBaseBallGame_generated_h

#define FID_SampleChat_Source_SampleChat_Public_GenerateNumberForBaseBallGame_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCheckResult); \
	DECLARE_FUNCTION(execGenerateRandomNum);


#define FID_SampleChat_Source_SampleChat_Public_GenerateNumberForBaseBallGame_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGenerateNumberForBaseBallGame(); \
	friend struct Z_Construct_UClass_UGenerateNumberForBaseBallGame_Statics; \
public: \
	DECLARE_CLASS(UGenerateNumberForBaseBallGame, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SampleChat"), NO_API) \
	DECLARE_SERIALIZER(UGenerateNumberForBaseBallGame)


#define FID_SampleChat_Source_SampleChat_Public_GenerateNumberForBaseBallGame_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGenerateNumberForBaseBallGame(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGenerateNumberForBaseBallGame(UGenerateNumberForBaseBallGame&&); \
	UGenerateNumberForBaseBallGame(const UGenerateNumberForBaseBallGame&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGenerateNumberForBaseBallGame); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGenerateNumberForBaseBallGame); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGenerateNumberForBaseBallGame) \
	NO_API virtual ~UGenerateNumberForBaseBallGame();


#define FID_SampleChat_Source_SampleChat_Public_GenerateNumberForBaseBallGame_h_9_PROLOG
#define FID_SampleChat_Source_SampleChat_Public_GenerateNumberForBaseBallGame_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SampleChat_Source_SampleChat_Public_GenerateNumberForBaseBallGame_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SampleChat_Source_SampleChat_Public_GenerateNumberForBaseBallGame_h_12_INCLASS_NO_PURE_DECLS \
	FID_SampleChat_Source_SampleChat_Public_GenerateNumberForBaseBallGame_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SAMPLECHAT_API UClass* StaticClass<class UGenerateNumberForBaseBallGame>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SampleChat_Source_SampleChat_Public_GenerateNumberForBaseBallGame_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
