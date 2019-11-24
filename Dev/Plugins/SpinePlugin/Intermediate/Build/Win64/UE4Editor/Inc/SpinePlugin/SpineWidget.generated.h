// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USpineWidget;
class UTrackEntry;
#ifdef SPINEPLUGIN_SpineWidget_generated_h
#error "SpineWidget.generated.h already included, missing '#pragma once' in SpineWidget.h"
#endif
#define SPINEPLUGIN_SpineWidget_generated_h

#define Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineWidget_h_41_DELEGATE \
struct _Script_SpinePlugin_eventSpineWidgetAfterUpdateWorldTransformDelegate_Parms \
{ \
	USpineWidget* skeleton; \
}; \
static inline void FSpineWidgetAfterUpdateWorldTransformDelegate_DelegateWrapper(const FMulticastScriptDelegate& SpineWidgetAfterUpdateWorldTransformDelegate, USpineWidget* skeleton) \
{ \
	_Script_SpinePlugin_eventSpineWidgetAfterUpdateWorldTransformDelegate_Parms Parms; \
	Parms.skeleton=skeleton; \
	SpineWidgetAfterUpdateWorldTransformDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineWidget_h_40_DELEGATE \
struct _Script_SpinePlugin_eventSpineWidgetBeforeUpdateWorldTransformDelegate_Parms \
{ \
	USpineWidget* skeleton; \
}; \
static inline void FSpineWidgetBeforeUpdateWorldTransformDelegate_DelegateWrapper(const FMulticastScriptDelegate& SpineWidgetBeforeUpdateWorldTransformDelegate, USpineWidget* skeleton) \
{ \
	_Script_SpinePlugin_eventSpineWidgetBeforeUpdateWorldTransformDelegate_Parms Parms; \
	Parms.skeleton=skeleton; \
	SpineWidgetBeforeUpdateWorldTransformDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineWidget_h_45_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTick) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaTime); \
		P_GET_UBOOL(Z_Param_CallDelegates); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Tick(Z_Param_DeltaTime,Z_Param_CallDelegates); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearTrack) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_trackIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearTrack(Z_Param_trackIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearTracks) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearTracks(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrent) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_trackIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTrackEntry**)Z_Param__Result=P_THIS->GetCurrent(Z_Param_trackIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddEmptyAnimation) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_trackIndex); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_mixDuration); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_delay); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTrackEntry**)Z_Param__Result=P_THIS->AddEmptyAnimation(Z_Param_trackIndex,Z_Param_mixDuration,Z_Param_delay); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEmptyAnimation) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_trackIndex); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_mixDuration); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTrackEntry**)Z_Param__Result=P_THIS->SetEmptyAnimation(Z_Param_trackIndex,Z_Param_mixDuration); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddAnimation) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_trackIndex); \
		P_GET_PROPERTY(UStrProperty,Z_Param_animationName); \
		P_GET_UBOOL(Z_Param_loop); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_delay); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTrackEntry**)Z_Param__Result=P_THIS->AddAnimation(Z_Param_trackIndex,Z_Param_animationName,Z_Param_loop,Z_Param_delay); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAnimation) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_trackIndex); \
		P_GET_PROPERTY(UStrProperty,Z_Param_animationName); \
		P_GET_UBOOL(Z_Param_loop); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTrackEntry**)Z_Param__Result=P_THIS->SetAnimation(Z_Param_trackIndex,Z_Param_animationName,Z_Param_loop); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTimeScale) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetTimeScale(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTimeScale) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_timeScale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTimeScale(Z_Param_timeScale); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPlaybackTime) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InPlaybackTime); \
		P_GET_UBOOL(Z_Param_bCallDelegates); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPlaybackTime(Z_Param_InPlaybackTime,Z_Param_bCallDelegates); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAutoPlay) \
	{ \
		P_GET_UBOOL(Z_Param_bInAutoPlays); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAutoPlay(Z_Param_bInAutoPlays); \
		P_NATIVE_END; \
	} \
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


#define Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineWidget_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTick) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaTime); \
		P_GET_UBOOL(Z_Param_CallDelegates); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Tick(Z_Param_DeltaTime,Z_Param_CallDelegates); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearTrack) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_trackIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearTrack(Z_Param_trackIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearTracks) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearTracks(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrent) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_trackIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTrackEntry**)Z_Param__Result=P_THIS->GetCurrent(Z_Param_trackIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddEmptyAnimation) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_trackIndex); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_mixDuration); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_delay); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTrackEntry**)Z_Param__Result=P_THIS->AddEmptyAnimation(Z_Param_trackIndex,Z_Param_mixDuration,Z_Param_delay); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEmptyAnimation) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_trackIndex); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_mixDuration); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTrackEntry**)Z_Param__Result=P_THIS->SetEmptyAnimation(Z_Param_trackIndex,Z_Param_mixDuration); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddAnimation) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_trackIndex); \
		P_GET_PROPERTY(UStrProperty,Z_Param_animationName); \
		P_GET_UBOOL(Z_Param_loop); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_delay); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTrackEntry**)Z_Param__Result=P_THIS->AddAnimation(Z_Param_trackIndex,Z_Param_animationName,Z_Param_loop,Z_Param_delay); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAnimation) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_trackIndex); \
		P_GET_PROPERTY(UStrProperty,Z_Param_animationName); \
		P_GET_UBOOL(Z_Param_loop); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTrackEntry**)Z_Param__Result=P_THIS->SetAnimation(Z_Param_trackIndex,Z_Param_animationName,Z_Param_loop); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTimeScale) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetTimeScale(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTimeScale) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_timeScale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTimeScale(Z_Param_timeScale); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPlaybackTime) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InPlaybackTime); \
		P_GET_UBOOL(Z_Param_bCallDelegates); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPlaybackTime(Z_Param_InPlaybackTime,Z_Param_bCallDelegates); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAutoPlay) \
	{ \
		P_GET_UBOOL(Z_Param_bInAutoPlays); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAutoPlay(Z_Param_bInAutoPlays); \
		P_NATIVE_END; \
	} \
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


#define Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineWidget_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSpineWidget(); \
	friend struct Z_Construct_UClass_USpineWidget_Statics; \
public: \
	DECLARE_CLASS(USpineWidget, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SpinePlugin"), NO_API) \
	DECLARE_SERIALIZER(USpineWidget)


#define Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineWidget_h_45_INCLASS \
private: \
	static void StaticRegisterNativesUSpineWidget(); \
	friend struct Z_Construct_UClass_USpineWidget_Statics; \
public: \
	DECLARE_CLASS(USpineWidget, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SpinePlugin"), NO_API) \
	DECLARE_SERIALIZER(USpineWidget)


#define Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineWidget_h_45_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USpineWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USpineWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USpineWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpineWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USpineWidget(USpineWidget&&); \
	NO_API USpineWidget(const USpineWidget&); \
public:


#define Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineWidget_h_45_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USpineWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USpineWidget(USpineWidget&&); \
	NO_API USpineWidget(const USpineWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USpineWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpineWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USpineWidget)


#define Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineWidget_h_45_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__atlasNormalBlendMaterials() { return STRUCT_OFFSET(USpineWidget, atlasNormalBlendMaterials); } \
	FORCEINLINE static uint32 __PPO__atlasAdditiveBlendMaterials() { return STRUCT_OFFSET(USpineWidget, atlasAdditiveBlendMaterials); } \
	FORCEINLINE static uint32 __PPO__atlasMultiplyBlendMaterials() { return STRUCT_OFFSET(USpineWidget, atlasMultiplyBlendMaterials); } \
	FORCEINLINE static uint32 __PPO__atlasScreenBlendMaterials() { return STRUCT_OFFSET(USpineWidget, atlasScreenBlendMaterials); } \
	FORCEINLINE static uint32 __PPO__trackEntries() { return STRUCT_OFFSET(USpineWidget, trackEntries); } \
	FORCEINLINE static uint32 __PPO__bAutoPlaying() { return STRUCT_OFFSET(USpineWidget, bAutoPlaying); }


#define Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineWidget_h_43_PROLOG
#define Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineWidget_h_45_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineWidget_h_45_PRIVATE_PROPERTY_OFFSET \
	Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineWidget_h_45_RPC_WRAPPERS \
	Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineWidget_h_45_INCLASS \
	Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineWidget_h_45_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineWidget_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineWidget_h_45_PRIVATE_PROPERTY_OFFSET \
	Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineWidget_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineWidget_h_45_INCLASS_NO_PURE_DECLS \
	Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineWidget_h_45_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SpineWidget."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPINEPLUGIN_API UClass* StaticClass<class USpineWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
