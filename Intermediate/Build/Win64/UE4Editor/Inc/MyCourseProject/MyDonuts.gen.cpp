// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyCourseProject/MyDonuts.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyDonuts() {}
// Cross Module References
	MYCOURSEPROJECT_API UClass* Z_Construct_UClass_AMyDonuts_NoRegister();
	MYCOURSEPROJECT_API UClass* Z_Construct_UClass_AMyDonuts();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MyCourseProject();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
// End Cross Module References
	void AMyDonuts::StaticRegisterNativesAMyDonuts()
	{
	}
	UClass* Z_Construct_UClass_AMyDonuts_NoRegister()
	{
		return AMyDonuts::StaticClass();
	}
	struct Z_Construct_UClass_AMyDonuts_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DonColor2_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DonColor2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DonColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DonColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyMeshComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyMeshComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyRootComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyRootComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyDonuts_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyCourseProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyDonuts_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyDonuts.h" },
		{ "ModuleRelativePath", "MyDonuts.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyDonuts_Statics::NewProp_DonColor2_MetaData[] = {
		{ "Category", "Box" },
		{ "ModuleRelativePath", "MyDonuts.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyDonuts_Statics::NewProp_DonColor2 = { "DonColor2", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyDonuts, DonColor2), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyDonuts_Statics::NewProp_DonColor2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyDonuts_Statics::NewProp_DonColor2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyDonuts_Statics::NewProp_DonColor_MetaData[] = {
		{ "Category", "Box" },
		{ "ModuleRelativePath", "MyDonuts.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyDonuts_Statics::NewProp_DonColor = { "DonColor", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyDonuts, DonColor), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyDonuts_Statics::NewProp_DonColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyDonuts_Statics::NewProp_DonColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyDonuts_Statics::NewProp_MyMeshComp_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "MyDonuts.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyDonuts_Statics::NewProp_MyMeshComp = { "MyMeshComp", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyDonuts, MyMeshComp), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyDonuts_Statics::NewProp_MyMeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyDonuts_Statics::NewProp_MyMeshComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyDonuts_Statics::NewProp_MyRootComp_MetaData[] = {
		{ "Category", "Sphere" },
		{ "Comment", "//??????? ?????, ??????? ????? ?????? ???? ???????? ??? ????? ???.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyDonuts.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyDonuts_Statics::NewProp_MyRootComp = { "MyRootComp", nullptr, (EPropertyFlags)0x001000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyDonuts, MyRootComp), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyDonuts_Statics::NewProp_MyRootComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyDonuts_Statics::NewProp_MyRootComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyDonuts_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyDonuts_Statics::NewProp_DonColor2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyDonuts_Statics::NewProp_DonColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyDonuts_Statics::NewProp_MyMeshComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyDonuts_Statics::NewProp_MyRootComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyDonuts_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyDonuts>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyDonuts_Statics::ClassParams = {
		&AMyDonuts::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMyDonuts_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyDonuts_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMyDonuts_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyDonuts_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyDonuts()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyDonuts_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyDonuts, 3602141437);
	template<> MYCOURSEPROJECT_API UClass* StaticClass<AMyDonuts>()
	{
		return AMyDonuts::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyDonuts(Z_Construct_UClass_AMyDonuts, &AMyDonuts::StaticClass, TEXT("/Script/MyCourseProject"), TEXT("AMyDonuts"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyDonuts);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
