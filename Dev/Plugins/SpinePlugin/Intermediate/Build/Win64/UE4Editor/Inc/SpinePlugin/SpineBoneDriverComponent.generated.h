// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USpineSkeletonComponent;
#ifdef SPINEPLUGIN_SpineBoneDriverComponent_generated_h
#error "SpineBoneDriverComponent.generated.h already included, missing '#pragma once' in SpineBoneDriverComponent.h"
#endif
#define SPINEPLUGIN_SpineBoneDriverComponent_generated_h

#define Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineBoneDriverComponent_h_39_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBeforeUpdateWorldTransform) \
	{ \
		P_GET_OBJECT(USpineSkeletonComponent,Z_Param_skeleton); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BeforeUpdateWorldTransform(Z_Param_skeleton); \
		P_NATIVE_END; \
	}


#define Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineBoneDriverComponent_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBeforeUpdateWorldTransform) \
	{ \
		P_GET_OBJECT(USpineSkeletonComponent,Z_Param_skeleton); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BeforeUpdateWorldTransform(Z_Param_skeleton); \
		P_NATIVE_END; \
	}


#define Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineBoneDriverComponent_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSpineBoneDriverComponent(); \
	friend struct Z_Construct_UClass_USpineBoneDriverComponent_Statics; \
public: \
	DECLARE_CLASS(USpineBoneDriverComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpinePlugin"), NO_API) \
	DECLARE_SERIALIZER(USpineBoneDriverComponent)


#define Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineBoneDriverComponent_h_39_INCLASS \
private: \
	static void StaticRegisterNativesUSpineBoneDriverComponent(); \
	friend struct Z_Construct_UClass_USpineBoneDriverComponent_Statics; \
public: \
	DECLARE_CLASS(USpineBoneDriverComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpinePlugin"), NO_API) \
	DECLARE_SERIALIZER(USpineBoneDriverComponent)


#define Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineBoneDriverComponent_h_39_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USpineBoneDriverComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USpineBoneDriverComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USpineBoneDriverComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpineBoneDriverComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USpineBoneDriverComponent(USpineBoneDriverComponent&&); \
	NO_API USpineBoneDriverComponent(const USpineBoneDriverComponent&); \
public:


#define Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineBoneDriverComponent_h_39_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USpineBoneDriverComponent(USpineBoneDriverComponent&&); \
	NO_API USpineBoneDriverComponent(const USpineBoneDriverComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USpineBoneDriverComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpineBoneDriverComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USpineBoneDriverComponent)


#define Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineBoneDriverComponent_h_39_PRIVATE_PROPERTY_OFFSET
#define Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineBoneDriverComponent_h_37_PROLOG
#define Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineBoneDriverComponent_h_39_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineBoneDriverComponent_h_39_PRIVATE_PROPERTY_OFFSET \
	Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineBoneDriverComponent_h_39_RPC_WRAPPERS \
	Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineBoneDriverComponent_h_39_INCLASS \
	Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineBoneDriverComponent_h_39_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineBoneDriverComponent_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineBoneDriverComponent_h_39_PRIVATE_PROPERTY_OFFSET \
	Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineBoneDriverComponent_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineBoneDriverComponent_h_39_INCLASS_NO_PURE_DECLS \
	Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineBoneDriverComponent_h_39_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPINEPLUGIN_API UClass* StaticClass<class USpineBoneDriverComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineBoneDriverComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
