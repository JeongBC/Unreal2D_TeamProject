// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SPINEUE4_MySceneComponent_generated_h
#error "MySceneComponent.generated.h already included, missing '#pragma once' in MySceneComponent.h"
#endif
#define SPINEUE4_MySceneComponent_generated_h

#define Dev_Source_SpineUE4_MySceneComponent_h_14_RPC_WRAPPERS
#define Dev_Source_SpineUE4_MySceneComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Dev_Source_SpineUE4_MySceneComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMySceneComponent(); \
	friend struct Z_Construct_UClass_UMySceneComponent_Statics; \
public: \
	DECLARE_CLASS(UMySceneComponent, USpineSkeletonRendererComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpineUE4"), NO_API) \
	DECLARE_SERIALIZER(UMySceneComponent)


#define Dev_Source_SpineUE4_MySceneComponent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUMySceneComponent(); \
	friend struct Z_Construct_UClass_UMySceneComponent_Statics; \
public: \
	DECLARE_CLASS(UMySceneComponent, USpineSkeletonRendererComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpineUE4"), NO_API) \
	DECLARE_SERIALIZER(UMySceneComponent)


#define Dev_Source_SpineUE4_MySceneComponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMySceneComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMySceneComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMySceneComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMySceneComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMySceneComponent(UMySceneComponent&&); \
	NO_API UMySceneComponent(const UMySceneComponent&); \
public:


#define Dev_Source_SpineUE4_MySceneComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMySceneComponent(UMySceneComponent&&); \
	NO_API UMySceneComponent(const UMySceneComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMySceneComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMySceneComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMySceneComponent)


#define Dev_Source_SpineUE4_MySceneComponent_h_14_PRIVATE_PROPERTY_OFFSET
#define Dev_Source_SpineUE4_MySceneComponent_h_11_PROLOG
#define Dev_Source_SpineUE4_MySceneComponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Dev_Source_SpineUE4_MySceneComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	Dev_Source_SpineUE4_MySceneComponent_h_14_RPC_WRAPPERS \
	Dev_Source_SpineUE4_MySceneComponent_h_14_INCLASS \
	Dev_Source_SpineUE4_MySceneComponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Dev_Source_SpineUE4_MySceneComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Dev_Source_SpineUE4_MySceneComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	Dev_Source_SpineUE4_MySceneComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Dev_Source_SpineUE4_MySceneComponent_h_14_INCLASS_NO_PURE_DECLS \
	Dev_Source_SpineUE4_MySceneComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPINEUE4_API UClass* StaticClass<class UMySceneComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Dev_Source_SpineUE4_MySceneComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
