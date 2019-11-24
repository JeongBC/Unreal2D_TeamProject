// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SPINEPLUGIN_SpineAtlasAsset_generated_h
#error "SpineAtlasAsset.generated.h already included, missing '#pragma once' in SpineAtlasAsset.h"
#endif
#define SPINEPLUGIN_SpineAtlasAsset_generated_h

#define Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineAtlasAsset_h_38_RPC_WRAPPERS
#define Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineAtlasAsset_h_38_RPC_WRAPPERS_NO_PURE_DECLS
#if WITH_EDITORONLY_DATA
#define Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineAtlasAsset_h_38_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(USpineAtlasAsset, NO_API)


#else
#define Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineAtlasAsset_h_38_ARCHIVESERIALIZER
#endif
#define Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineAtlasAsset_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSpineAtlasAsset(); \
	friend struct Z_Construct_UClass_USpineAtlasAsset_Statics; \
public: \
	DECLARE_CLASS(USpineAtlasAsset, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SpinePlugin"), NO_API) \
	DECLARE_SERIALIZER(USpineAtlasAsset) \
	Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineAtlasAsset_h_38_ARCHIVESERIALIZER


#define Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineAtlasAsset_h_38_INCLASS \
private: \
	static void StaticRegisterNativesUSpineAtlasAsset(); \
	friend struct Z_Construct_UClass_USpineAtlasAsset_Statics; \
public: \
	DECLARE_CLASS(USpineAtlasAsset, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SpinePlugin"), NO_API) \
	DECLARE_SERIALIZER(USpineAtlasAsset) \
	Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineAtlasAsset_h_38_ARCHIVESERIALIZER


#define Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineAtlasAsset_h_38_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USpineAtlasAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USpineAtlasAsset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USpineAtlasAsset); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpineAtlasAsset); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USpineAtlasAsset(USpineAtlasAsset&&); \
	NO_API USpineAtlasAsset(const USpineAtlasAsset&); \
public:


#define Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineAtlasAsset_h_38_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USpineAtlasAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USpineAtlasAsset(USpineAtlasAsset&&); \
	NO_API USpineAtlasAsset(const USpineAtlasAsset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USpineAtlasAsset); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpineAtlasAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USpineAtlasAsset)


#define Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineAtlasAsset_h_38_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__rawData() { return STRUCT_OFFSET(USpineAtlasAsset, rawData); } \
	FORCEINLINE static uint32 __PPO__atlasFileName() { return STRUCT_OFFSET(USpineAtlasAsset, atlasFileName); }


#define Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineAtlasAsset_h_36_PROLOG
#define Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineAtlasAsset_h_38_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineAtlasAsset_h_38_PRIVATE_PROPERTY_OFFSET \
	Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineAtlasAsset_h_38_RPC_WRAPPERS \
	Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineAtlasAsset_h_38_INCLASS \
	Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineAtlasAsset_h_38_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineAtlasAsset_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineAtlasAsset_h_38_PRIVATE_PROPERTY_OFFSET \
	Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineAtlasAsset_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineAtlasAsset_h_38_INCLASS_NO_PURE_DECLS \
	Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineAtlasAsset_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPINEPLUGIN_API UClass* StaticClass<class USpineAtlasAsset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineAtlasAsset_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
