// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTrackEntry;
struct FSpineEvent;
#ifdef SPINEPLUGIN_SpineSkeletonAnimationComponent_generated_h
#error "SpineSkeletonAnimationComponent.generated.h already included, missing '#pragma once' in SpineSkeletonAnimationComponent.h"
#endif
#define SPINEPLUGIN_SpineSkeletonAnimationComponent_generated_h

#define Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_39_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSpineEvent_Statics; \
	static class UScriptStruct* StaticStruct();


template<> SPINEPLUGIN_API UScriptStruct* StaticStruct<struct FSpineEvent>();

#define Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_73_DELEGATE \
struct _Script_SpinePlugin_eventSpineAnimationDisposeDelegate_Parms \
{ \
	UTrackEntry* entry; \
}; \
static inline void FSpineAnimationDisposeDelegate_DelegateWrapper(const FMulticastScriptDelegate& SpineAnimationDisposeDelegate, UTrackEntry* entry) \
{ \
	_Script_SpinePlugin_eventSpineAnimationDisposeDelegate_Parms Parms; \
	Parms.entry=entry; \
	SpineAnimationDisposeDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_72_DELEGATE \
struct _Script_SpinePlugin_eventSpineAnimationEndDelegate_Parms \
{ \
	UTrackEntry* entry; \
}; \
static inline void FSpineAnimationEndDelegate_DelegateWrapper(const FMulticastScriptDelegate& SpineAnimationEndDelegate, UTrackEntry* entry) \
{ \
	_Script_SpinePlugin_eventSpineAnimationEndDelegate_Parms Parms; \
	Parms.entry=entry; \
	SpineAnimationEndDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_71_DELEGATE \
struct _Script_SpinePlugin_eventSpineAnimationCompleteDelegate_Parms \
{ \
	UTrackEntry* entry; \
}; \
static inline void FSpineAnimationCompleteDelegate_DelegateWrapper(const FMulticastScriptDelegate& SpineAnimationCompleteDelegate, UTrackEntry* entry) \
{ \
	_Script_SpinePlugin_eventSpineAnimationCompleteDelegate_Parms Parms; \
	Parms.entry=entry; \
	SpineAnimationCompleteDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_70_DELEGATE \
struct _Script_SpinePlugin_eventSpineAnimationInterruptDelegate_Parms \
{ \
	UTrackEntry* entry; \
}; \
static inline void FSpineAnimationInterruptDelegate_DelegateWrapper(const FMulticastScriptDelegate& SpineAnimationInterruptDelegate, UTrackEntry* entry) \
{ \
	_Script_SpinePlugin_eventSpineAnimationInterruptDelegate_Parms Parms; \
	Parms.entry=entry; \
	SpineAnimationInterruptDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_69_DELEGATE \
struct _Script_SpinePlugin_eventSpineAnimationEventDelegate_Parms \
{ \
	UTrackEntry* entry; \
	FSpineEvent evt; \
}; \
static inline void FSpineAnimationEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& SpineAnimationEventDelegate, UTrackEntry* entry, FSpineEvent evt) \
{ \
	_Script_SpinePlugin_eventSpineAnimationEventDelegate_Parms Parms; \
	Parms.entry=entry; \
	Parms.evt=evt; \
	SpineAnimationEventDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_68_DELEGATE \
struct _Script_SpinePlugin_eventSpineAnimationStartDelegate_Parms \
{ \
	UTrackEntry* entry; \
}; \
static inline void FSpineAnimationStartDelegate_DelegateWrapper(const FMulticastScriptDelegate& SpineAnimationStartDelegate, UTrackEntry* entry) \
{ \
	_Script_SpinePlugin_eventSpineAnimationStartDelegate_Parms Parms; \
	Parms.entry=entry; \
	SpineAnimationStartDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_77_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execisValidAnimation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->isValidAnimation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetAnimationDuration) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->getAnimationDuration(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetAnimationName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->getAnimationName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMixDuration) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_mixDuration); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMixDuration(Z_Param_mixDuration); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMixDuration) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMixDuration(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMixTime) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_mixTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMixTime(Z_Param_mixTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMixTime) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMixTime(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAlpha) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_alpha); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAlpha(Z_Param_alpha); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAlpha) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetAlpha(); \
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
	DECLARE_FUNCTION(execGetTimeScale) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetTimeScale(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTrackEnd) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_trackEnd); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTrackEnd(Z_Param_trackEnd); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTrackEnd) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetTrackEnd(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTrackTime) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_trackTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTrackTime(Z_Param_trackTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTrackTime) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetTrackTime(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDelay) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_delay); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDelay(Z_Param_delay); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDelay) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetDelay(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAnimationLast) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_animationLast); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAnimationLast(Z_Param_animationLast); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAnimationLast) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetAnimationLast(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAnimationEnd) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_animationEnd); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAnimationEnd(Z_Param_animationEnd); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAnimationEnd) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetAnimationEnd(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAnimationStart) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_animationStart); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAnimationStart(Z_Param_animationStart); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAnimationStart) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetAnimationStart(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDrawOrderThreshold) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_drawOrderThreshold); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDrawOrderThreshold(Z_Param_drawOrderThreshold); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDrawOrderThreshold) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetDrawOrderThreshold(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAttachmentThreshold) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_attachmentThreshold); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAttachmentThreshold(Z_Param_attachmentThreshold); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAttachmentThreshold) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetAttachmentThreshold(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEventThreshold) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_eventThreshold); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetEventThreshold(Z_Param_eventThreshold); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEventThreshold) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetEventThreshold(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLoop) \
	{ \
		P_GET_UBOOL(Z_Param_loop); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLoop(Z_Param_loop); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLoop) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetLoop(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTrackIndex) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetTrackIndex(); \
		P_NATIVE_END; \
	}


#define Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_77_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execisValidAnimation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->isValidAnimation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetAnimationDuration) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->getAnimationDuration(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetAnimationName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->getAnimationName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMixDuration) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_mixDuration); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMixDuration(Z_Param_mixDuration); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMixDuration) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMixDuration(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMixTime) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_mixTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMixTime(Z_Param_mixTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMixTime) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMixTime(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAlpha) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_alpha); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAlpha(Z_Param_alpha); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAlpha) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetAlpha(); \
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
	DECLARE_FUNCTION(execGetTimeScale) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetTimeScale(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTrackEnd) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_trackEnd); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTrackEnd(Z_Param_trackEnd); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTrackEnd) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetTrackEnd(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTrackTime) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_trackTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTrackTime(Z_Param_trackTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTrackTime) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetTrackTime(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDelay) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_delay); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDelay(Z_Param_delay); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDelay) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetDelay(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAnimationLast) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_animationLast); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAnimationLast(Z_Param_animationLast); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAnimationLast) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetAnimationLast(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAnimationEnd) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_animationEnd); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAnimationEnd(Z_Param_animationEnd); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAnimationEnd) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetAnimationEnd(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAnimationStart) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_animationStart); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAnimationStart(Z_Param_animationStart); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAnimationStart) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetAnimationStart(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDrawOrderThreshold) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_drawOrderThreshold); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDrawOrderThreshold(Z_Param_drawOrderThreshold); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDrawOrderThreshold) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetDrawOrderThreshold(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAttachmentThreshold) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_attachmentThreshold); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAttachmentThreshold(Z_Param_attachmentThreshold); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAttachmentThreshold) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetAttachmentThreshold(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEventThreshold) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_eventThreshold); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetEventThreshold(Z_Param_eventThreshold); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEventThreshold) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetEventThreshold(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLoop) \
	{ \
		P_GET_UBOOL(Z_Param_loop); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLoop(Z_Param_loop); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLoop) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetLoop(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTrackIndex) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetTrackIndex(); \
		P_NATIVE_END; \
	}


#define Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_77_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTrackEntry(); \
	friend struct Z_Construct_UClass_UTrackEntry_Statics; \
public: \
	DECLARE_CLASS(UTrackEntry, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SpinePlugin"), NO_API) \
	DECLARE_SERIALIZER(UTrackEntry)


#define Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_77_INCLASS \
private: \
	static void StaticRegisterNativesUTrackEntry(); \
	friend struct Z_Construct_UClass_UTrackEntry_Statics; \
public: \
	DECLARE_CLASS(UTrackEntry, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SpinePlugin"), NO_API) \
	DECLARE_SERIALIZER(UTrackEntry)


#define Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_77_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTrackEntry(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTrackEntry) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTrackEntry); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTrackEntry); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTrackEntry(UTrackEntry&&); \
	NO_API UTrackEntry(const UTrackEntry&); \
public:


#define Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_77_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTrackEntry(UTrackEntry&&); \
	NO_API UTrackEntry(const UTrackEntry&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTrackEntry); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTrackEntry); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTrackEntry)


#define Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_77_PRIVATE_PROPERTY_OFFSET
#define Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_75_PROLOG
#define Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_77_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_77_PRIVATE_PROPERTY_OFFSET \
	Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_77_RPC_WRAPPERS \
	Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_77_INCLASS \
	Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_77_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_77_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_77_PRIVATE_PROPERTY_OFFSET \
	Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_77_RPC_WRAPPERS_NO_PURE_DECLS \
	Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_77_INCLASS_NO_PURE_DECLS \
	Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_77_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPINEPLUGIN_API UClass* StaticClass<class UTrackEntry>();

#define Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_193_RPC_WRAPPERS \
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
	}


#define Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_193_RPC_WRAPPERS_NO_PURE_DECLS \
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
	}


#define Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_193_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSpineSkeletonAnimationComponent(); \
	friend struct Z_Construct_UClass_USpineSkeletonAnimationComponent_Statics; \
public: \
	DECLARE_CLASS(USpineSkeletonAnimationComponent, USpineSkeletonComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpinePlugin"), NO_API) \
	DECLARE_SERIALIZER(USpineSkeletonAnimationComponent)


#define Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_193_INCLASS \
private: \
	static void StaticRegisterNativesUSpineSkeletonAnimationComponent(); \
	friend struct Z_Construct_UClass_USpineSkeletonAnimationComponent_Statics; \
public: \
	DECLARE_CLASS(USpineSkeletonAnimationComponent, USpineSkeletonComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpinePlugin"), NO_API) \
	DECLARE_SERIALIZER(USpineSkeletonAnimationComponent)


#define Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_193_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USpineSkeletonAnimationComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USpineSkeletonAnimationComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USpineSkeletonAnimationComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpineSkeletonAnimationComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USpineSkeletonAnimationComponent(USpineSkeletonAnimationComponent&&); \
	NO_API USpineSkeletonAnimationComponent(const USpineSkeletonAnimationComponent&); \
public:


#define Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_193_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USpineSkeletonAnimationComponent(USpineSkeletonAnimationComponent&&); \
	NO_API USpineSkeletonAnimationComponent(const USpineSkeletonAnimationComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USpineSkeletonAnimationComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpineSkeletonAnimationComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USpineSkeletonAnimationComponent)


#define Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_193_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__trackEntries() { return STRUCT_OFFSET(USpineSkeletonAnimationComponent, trackEntries); } \
	FORCEINLINE static uint32 __PPO__bAutoPlaying() { return STRUCT_OFFSET(USpineSkeletonAnimationComponent, bAutoPlaying); }


#define Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_191_PROLOG
#define Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_193_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_193_PRIVATE_PROPERTY_OFFSET \
	Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_193_RPC_WRAPPERS \
	Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_193_INCLASS \
	Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_193_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_193_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_193_PRIVATE_PROPERTY_OFFSET \
	Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_193_RPC_WRAPPERS_NO_PURE_DECLS \
	Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_193_INCLASS_NO_PURE_DECLS \
	Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_193_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPINEPLUGIN_API UClass* StaticClass<class USpineSkeletonAnimationComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Dev_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
