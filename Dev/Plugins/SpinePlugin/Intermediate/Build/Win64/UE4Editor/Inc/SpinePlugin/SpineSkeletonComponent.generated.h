// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USpineSkeletonComponent;
struct FVector;
struct FTransform;
#ifdef SPINEPLUGIN_SpineSkeletonComponent_generated_h
#error "SpineSkeletonComponent.generated.h already included, missing '#pragma once' in SpineSkeletonComponent.h"
#endif
#define SPINEPLUGIN_SpineSkeletonComponent_generated_h

#define Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonComponent_h_40_DELEGATE \
struct _Script_SpinePlugin_eventSpineAfterUpdateWorldTransformDelegate_Parms \
{ \
	USpineSkeletonComponent* skeleton; \
}; \
static inline void FSpineAfterUpdateWorldTransformDelegate_DelegateWrapper(const FMulticastScriptDelegate& SpineAfterUpdateWorldTransformDelegate, USpineSkeletonComponent* skeleton) \
{ \
	_Script_SpinePlugin_eventSpineAfterUpdateWorldTransformDelegate_Parms Parms; \
	Parms.skeleton=skeleton; \
	SpineAfterUpdateWorldTransformDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonComponent_h_39_DELEGATE \
struct _Script_SpinePlugin_eventSpineBeforeUpdateWorldTransformDelegate_Parms \
{ \
	USpineSkeletonComponent* skeleton; \
}; \
static inline void FSpineBeforeUpdateWorldTransformDelegate_DelegateWrapper(const FMulticastScriptDelegate& SpineBeforeUpdateWorldTransformDelegate, USpineSkeletonComponent* skeleton) \
{ \
	_Script_SpinePlugin_eventSpineBeforeUpdateWorldTransformDelegate_Parms Parms; \
	Parms.skeleton=skeleton; \
	SpineBeforeUpdateWorldTransformDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonComponent_h_45_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAnimationDuration) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_AnimationName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetAnimationDuration(Z_Param_AnimationName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasAnimation) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_AnimationName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasAnimation(Z_Param_AnimationName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAnimations) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_Animations); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetAnimations(Z_Param_Out_Animations); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasSlot) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SlotName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasSlot(Z_Param_SlotName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSlots) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_Slots); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetSlots(Z_Param_Out_Slots); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasBone) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasBone(Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBones) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_Bones); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetBones(Z_Param_Out_Bones); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetScaleY) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetScaleY(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetScaleY) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_scaleY); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetScaleY(Z_Param_scaleY); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetScaleX) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetScaleX(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetScaleX) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_scaleX); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetScaleX(Z_Param_scaleX); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSlotsToSetupPose) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSlotsToSetupPose(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBonesToSetupPose) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBonesToSetupPose(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetToSetupPose) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetToSetupPose(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateWorldTransform) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateWorldTransform(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBoneWorldPosition) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_BoneName); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_position); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBoneWorldPosition(Z_Param_BoneName,Z_Param_Out_position); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBoneWorldTransform) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=P_THIS->GetBoneWorldTransform(Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAttachment) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_slotName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_attachmentName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SetAttachment(Z_Param_slotName,Z_Param_attachmentName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasSkin) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SkinName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasSkin(Z_Param_SkinName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSkin) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SkinName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SetSkin(Z_Param_SkinName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSkins) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_Skins); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetSkins(Z_Param_Out_Skins); \
		P_NATIVE_END; \
	}


#define Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonComponent_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAnimationDuration) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_AnimationName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetAnimationDuration(Z_Param_AnimationName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasAnimation) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_AnimationName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasAnimation(Z_Param_AnimationName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAnimations) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_Animations); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetAnimations(Z_Param_Out_Animations); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasSlot) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SlotName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasSlot(Z_Param_SlotName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSlots) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_Slots); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetSlots(Z_Param_Out_Slots); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasBone) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasBone(Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBones) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_Bones); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetBones(Z_Param_Out_Bones); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetScaleY) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetScaleY(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetScaleY) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_scaleY); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetScaleY(Z_Param_scaleY); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetScaleX) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetScaleX(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetScaleX) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_scaleX); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetScaleX(Z_Param_scaleX); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSlotsToSetupPose) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSlotsToSetupPose(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBonesToSetupPose) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBonesToSetupPose(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetToSetupPose) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetToSetupPose(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateWorldTransform) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateWorldTransform(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBoneWorldPosition) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_BoneName); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_position); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBoneWorldPosition(Z_Param_BoneName,Z_Param_Out_position); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBoneWorldTransform) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=P_THIS->GetBoneWorldTransform(Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAttachment) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_slotName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_attachmentName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SetAttachment(Z_Param_slotName,Z_Param_attachmentName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasSkin) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SkinName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasSkin(Z_Param_SkinName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSkin) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SkinName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SetSkin(Z_Param_SkinName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSkins) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_Skins); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetSkins(Z_Param_Out_Skins); \
		P_NATIVE_END; \
	}


#define Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonComponent_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSpineSkeletonComponent(); \
	friend struct Z_Construct_UClass_USpineSkeletonComponent_Statics; \
public: \
	DECLARE_CLASS(USpineSkeletonComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpinePlugin"), NO_API) \
	DECLARE_SERIALIZER(USpineSkeletonComponent)


#define Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonComponent_h_45_INCLASS \
private: \
	static void StaticRegisterNativesUSpineSkeletonComponent(); \
	friend struct Z_Construct_UClass_USpineSkeletonComponent_Statics; \
public: \
	DECLARE_CLASS(USpineSkeletonComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpinePlugin"), NO_API) \
	DECLARE_SERIALIZER(USpineSkeletonComponent)


#define Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonComponent_h_45_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USpineSkeletonComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USpineSkeletonComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USpineSkeletonComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpineSkeletonComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USpineSkeletonComponent(USpineSkeletonComponent&&); \
	NO_API USpineSkeletonComponent(const USpineSkeletonComponent&); \
public:


#define Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonComponent_h_45_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USpineSkeletonComponent(USpineSkeletonComponent&&); \
	NO_API USpineSkeletonComponent(const USpineSkeletonComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USpineSkeletonComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpineSkeletonComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USpineSkeletonComponent)


#define Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonComponent_h_45_PRIVATE_PROPERTY_OFFSET
#define Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonComponent_h_43_PROLOG
#define Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonComponent_h_45_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonComponent_h_45_PRIVATE_PROPERTY_OFFSET \
	Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonComponent_h_45_RPC_WRAPPERS \
	Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonComponent_h_45_INCLASS \
	Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonComponent_h_45_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonComponent_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonComponent_h_45_PRIVATE_PROPERTY_OFFSET \
	Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonComponent_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonComponent_h_45_INCLASS_NO_PURE_DECLS \
	Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonComponent_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPINEPLUGIN_API UClass* StaticClass<class USpineSkeletonComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
