// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MYIDPluginBPLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYIDPLUGIN_MYIDPluginBPLibrary_generated_h
#error "MYIDPluginBPLibrary.generated.h already included, missing '#pragma once' in MYIDPluginBPLibrary.h"
#endif
#define MYIDPLUGIN_MYIDPluginBPLibrary_generated_h

#define FID_SampleChat_Plugins_MYIDPlugin_Source_MYIDPlugin_Public_MYIDPluginBPLibrary_h_30_RPC_WRAPPERS \
	DECLARE_FUNCTION(execMYIDPluginSampleFunction);


#define FID_SampleChat_Plugins_MYIDPlugin_Source_MYIDPlugin_Public_MYIDPluginBPLibrary_h_30_INCLASS \
private: \
	static void StaticRegisterNativesUMYIDPluginBPLibrary(); \
	friend struct Z_Construct_UClass_UMYIDPluginBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UMYIDPluginBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MYIDPlugin"), NO_API) \
	DECLARE_SERIALIZER(UMYIDPluginBPLibrary)


#define FID_SampleChat_Plugins_MYIDPlugin_Source_MYIDPlugin_Public_MYIDPluginBPLibrary_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMYIDPluginBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMYIDPluginBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMYIDPluginBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMYIDPluginBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMYIDPluginBPLibrary(UMYIDPluginBPLibrary&&); \
	UMYIDPluginBPLibrary(const UMYIDPluginBPLibrary&); \
public: \
	NO_API virtual ~UMYIDPluginBPLibrary();


#define FID_SampleChat_Plugins_MYIDPlugin_Source_MYIDPlugin_Public_MYIDPluginBPLibrary_h_27_PROLOG
#define FID_SampleChat_Plugins_MYIDPlugin_Source_MYIDPlugin_Public_MYIDPluginBPLibrary_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SampleChat_Plugins_MYIDPlugin_Source_MYIDPlugin_Public_MYIDPluginBPLibrary_h_30_RPC_WRAPPERS \
	FID_SampleChat_Plugins_MYIDPlugin_Source_MYIDPlugin_Public_MYIDPluginBPLibrary_h_30_INCLASS \
	FID_SampleChat_Plugins_MYIDPlugin_Source_MYIDPlugin_Public_MYIDPluginBPLibrary_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYIDPLUGIN_API UClass* StaticClass<class UMYIDPluginBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SampleChat_Plugins_MYIDPlugin_Source_MYIDPlugin_Public_MYIDPluginBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
