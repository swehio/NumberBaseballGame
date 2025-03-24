// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CPlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SAMPLECHAT_CPlayerController_generated_h
#error "CPlayerController.generated.h already included, missing '#pragma once' in CPlayerController.h"
#endif
#define SAMPLECHAT_CPlayerController_generated_h

#define FID_SampleChat_Source_SampleChat_Public_CPlayerController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACPlayerController(); \
	friend struct Z_Construct_UClass_ACPlayerController_Statics; \
public: \
	DECLARE_CLASS(ACPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SampleChat"), NO_API) \
	DECLARE_SERIALIZER(ACPlayerController)


#define FID_SampleChat_Source_SampleChat_Public_CPlayerController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACPlayerController(ACPlayerController&&); \
	ACPlayerController(const ACPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACPlayerController) \
	NO_API virtual ~ACPlayerController();


#define FID_SampleChat_Source_SampleChat_Public_CPlayerController_h_12_PROLOG
#define FID_SampleChat_Source_SampleChat_Public_CPlayerController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SampleChat_Source_SampleChat_Public_CPlayerController_h_15_INCLASS_NO_PURE_DECLS \
	FID_SampleChat_Source_SampleChat_Public_CPlayerController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SAMPLECHAT_API UClass* StaticClass<class ACPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SampleChat_Source_SampleChat_Public_CPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
