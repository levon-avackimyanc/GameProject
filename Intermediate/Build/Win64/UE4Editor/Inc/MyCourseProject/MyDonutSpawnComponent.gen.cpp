// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyCourseProject/MyDonutSpawnComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyDonutSpawnComponent() {}
// Cross Module References
	MYCOURSEPROJECT_API UClass* Z_Construct_UClass_UMyDonutSpawnComponent_NoRegister();
	MYCOURSEPROJECT_API UClass* Z_Construct_UClass_UMyDonutSpawnComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_MyCourseProject();
// End Cross Module References
	void UMyDonutSpawnComponent::StaticRegisterNativesUMyDonutSpawnComponent()
	{
	}
	UClass* Z_Construct_UClass_UMyDonutSpawnComponent_NoRegister()
	{
		return UMyDonutSpawnComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMyDonutSpawnComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyDonutSpawnComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MyCourseProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyDonutSpawnComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "MyDonutSpawnComponent.h" },
		{ "ModuleRelativePath", "MyDonutSpawnComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyDonutSpawnComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyDonutSpawnComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMyDonutSpawnComponent_Statics::ClassParams = {
		&UMyDonutSpawnComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMyDonutSpawnComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMyDonutSpawnComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyDonutSpawnComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMyDonutSpawnComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMyDonutSpawnComponent, 3305348084);
	template<> MYCOURSEPROJECT_API UClass* StaticClass<UMyDonutSpawnComponent>()
	{
		return UMyDonutSpawnComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMyDonutSpawnComponent(Z_Construct_UClass_UMyDonutSpawnComponent, &UMyDonutSpawnComponent::StaticClass, TEXT("/Script/MyCourseProject"), TEXT("UMyDonutSpawnComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyDonutSpawnComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
