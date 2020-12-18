// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyCourseProject/MyDonutSpawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyDonutSpawn() {}
// Cross Module References
	MYCOURSEPROJECT_API UClass* Z_Construct_UClass_AMyDonutSpawn_NoRegister();
	MYCOURSEPROJECT_API UClass* Z_Construct_UClass_AMyDonutSpawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_MyCourseProject();
// End Cross Module References
	void AMyDonutSpawn::StaticRegisterNativesAMyDonutSpawn()
	{
	}
	UClass* Z_Construct_UClass_AMyDonutSpawn_NoRegister()
	{
		return AMyDonutSpawn::StaticClass();
	}
	struct Z_Construct_UClass_AMyDonutSpawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyDonutSpawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_MyCourseProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyDonutSpawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyDonutSpawn.h" },
		{ "ModuleRelativePath", "MyDonutSpawn.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyDonutSpawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyDonutSpawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyDonutSpawn_Statics::ClassParams = {
		&AMyDonutSpawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMyDonutSpawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyDonutSpawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyDonutSpawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyDonutSpawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyDonutSpawn, 2049868574);
	template<> MYCOURSEPROJECT_API UClass* StaticClass<AMyDonutSpawn>()
	{
		return AMyDonutSpawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyDonutSpawn(Z_Construct_UClass_AMyDonutSpawn, &AMyDonutSpawn::StaticClass, TEXT("/Script/MyCourseProject"), TEXT("AMyDonutSpawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyDonutSpawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
