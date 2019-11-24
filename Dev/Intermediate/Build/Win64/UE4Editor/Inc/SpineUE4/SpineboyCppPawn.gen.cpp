// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpineUE4/SpineboyCppPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpineboyCppPawn() {}
// Cross Module References
	SPINEUE4_API UClass* Z_Construct_UClass_ASpineboyCppPawn_NoRegister();
	SPINEUE4_API UClass* Z_Construct_UClass_ASpineboyCppPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_SpineUE4();
// End Cross Module References
	void ASpineboyCppPawn::StaticRegisterNativesASpineboyCppPawn()
	{
	}
	UClass* Z_Construct_UClass_ASpineboyCppPawn_NoRegister()
	{
		return ASpineboyCppPawn::StaticClass();
	}
	struct Z_Construct_UClass_ASpineboyCppPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpineboyCppPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_SpineUE4,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpineboyCppPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SpineboyCppPawn.h" },
		{ "ModuleRelativePath", "SpineboyCppPawn.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpineboyCppPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpineboyCppPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASpineboyCppPawn_Statics::ClassParams = {
		&ASpineboyCppPawn::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ASpineboyCppPawn_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASpineboyCppPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpineboyCppPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASpineboyCppPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASpineboyCppPawn, 2576501603);
	template<> SPINEUE4_API UClass* StaticClass<ASpineboyCppPawn>()
	{
		return ASpineboyCppPawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASpineboyCppPawn(Z_Construct_UClass_ASpineboyCppPawn, &ASpineboyCppPawn::StaticClass, TEXT("/Script/SpineUE4"), TEXT("ASpineboyCppPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpineboyCppPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
