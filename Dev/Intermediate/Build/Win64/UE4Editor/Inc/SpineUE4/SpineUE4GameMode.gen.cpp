// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpineUE4/SpineUE4GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpineUE4GameMode() {}
// Cross Module References
	SPINEUE4_API UClass* Z_Construct_UClass_ASpineUE4GameMode_NoRegister();
	SPINEUE4_API UClass* Z_Construct_UClass_ASpineUE4GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	UPackage* Z_Construct_UPackage__Script_SpineUE4();
// End Cross Module References
	void ASpineUE4GameMode::StaticRegisterNativesASpineUE4GameMode()
	{
	}
	UClass* Z_Construct_UClass_ASpineUE4GameMode_NoRegister()
	{
		return ASpineUE4GameMode::StaticClass();
	}
	struct Z_Construct_UClass_ASpineUE4GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpineUE4GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_SpineUE4,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpineUE4GameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SpineUE4GameMode.h" },
		{ "ModuleRelativePath", "SpineUE4GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpineUE4GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpineUE4GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASpineUE4GameMode_Statics::ClassParams = {
		&ASpineUE4GameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ASpineUE4GameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASpineUE4GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpineUE4GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASpineUE4GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASpineUE4GameMode, 2084690588);
	template<> SPINEUE4_API UClass* StaticClass<ASpineUE4GameMode>()
	{
		return ASpineUE4GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASpineUE4GameMode(Z_Construct_UClass_ASpineUE4GameMode, &ASpineUE4GameMode::StaticClass, TEXT("/Script/SpineUE4"), TEXT("ASpineUE4GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpineUE4GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
