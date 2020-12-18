// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyCourseProject/MyFloorActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyFloorActor() {}
// Cross Module References
	MYCOURSEPROJECT_API UClass* Z_Construct_UClass_AMyFloorActor_NoRegister();
	MYCOURSEPROJECT_API UClass* Z_Construct_UClass_AMyFloorActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MyCourseProject();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AMyFloorActor::execSpawnFloorWithObstacles)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnFloorWithObstacles();
		P_NATIVE_END;
	}
	void AMyFloorActor::StaticRegisterNativesAMyFloorActor()
	{
		UClass* Class = AMyFloorActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SpawnFloorWithObstacles", &AMyFloorActor::execSpawnFloorWithObstacles },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyFloorActor_SpawnFloorWithObstacles_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyFloorActor_SpawnFloorWithObstacles_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyFloorActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyFloorActor_SpawnFloorWithObstacles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyFloorActor, nullptr, "SpawnFloorWithObstacles", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyFloorActor_SpawnFloorWithObstacles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyFloorActor_SpawnFloorWithObstacles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyFloorActor_SpawnFloorWithObstacles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyFloorActor_SpawnFloorWithObstacles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMyFloorActor_NoRegister()
	{
		return AMyFloorActor::StaticClass();
	}
	struct Z_Construct_UClass_AMyFloorActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloorColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FloorColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloorMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FloorMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyRootComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyRootComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyFloorActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyCourseProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyFloorActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyFloorActor_SpawnFloorWithObstacles, "SpawnFloorWithObstacles" }, // 3729599287
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyFloorActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyFloorActor.h" },
		{ "ModuleRelativePath", "MyFloorActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyFloorActor_Statics::NewProp_FloorColor_MetaData[] = {
		{ "Category", "Box" },
		{ "ModuleRelativePath", "MyFloorActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyFloorActor_Statics::NewProp_FloorColor = { "FloorColor", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyFloorActor, FloorColor), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyFloorActor_Statics::NewProp_FloorColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyFloorActor_Statics::NewProp_FloorColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyFloorActor_Statics::NewProp_FloorMesh_MetaData[] = {
		{ "Category", "Box" },
		{ "ModuleRelativePath", "MyFloorActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyFloorActor_Statics::NewProp_FloorMesh = { "FloorMesh", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyFloorActor, FloorMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyFloorActor_Statics::NewProp_FloorMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyFloorActor_Statics::NewProp_FloorMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyFloorActor_Statics::NewProp_MyRootComp_MetaData[] = {
		{ "Category", "Box" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyFloorActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyFloorActor_Statics::NewProp_MyRootComp = { "MyRootComp", nullptr, (EPropertyFlags)0x001000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyFloorActor, MyRootComp), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyFloorActor_Statics::NewProp_MyRootComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyFloorActor_Statics::NewProp_MyRootComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyFloorActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyFloorActor_Statics::NewProp_FloorColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyFloorActor_Statics::NewProp_FloorMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyFloorActor_Statics::NewProp_MyRootComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyFloorActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyFloorActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyFloorActor_Statics::ClassParams = {
		&AMyFloorActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMyFloorActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyFloorActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMyFloorActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyFloorActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyFloorActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyFloorActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyFloorActor, 2733779432);
	template<> MYCOURSEPROJECT_API UClass* StaticClass<AMyFloorActor>()
	{
		return AMyFloorActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyFloorActor(Z_Construct_UClass_AMyFloorActor, &AMyFloorActor::StaticClass, TEXT("/Script/MyCourseProject"), TEXT("AMyFloorActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyFloorActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
