// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyCourseProject/MyObstacles.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyObstacles() {}
// Cross Module References
	MYCOURSEPROJECT_API UClass* Z_Construct_UClass_AMyObstacles_NoRegister();
	MYCOURSEPROJECT_API UClass* Z_Construct_UClass_AMyObstacles();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MyCourseProject();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AMyObstacles::execGetEndScore)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetEndScore();
		P_NATIVE_END;
	}
	void AMyObstacles::StaticRegisterNativesAMyObstacles()
	{
		UClass* Class = AMyObstacles::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetEndScore", &AMyObstacles::execGetEndScore },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyObstacles_GetEndScore_Statics
	{
		struct MyObstacles_eventGetEndScore_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMyObstacles_GetEndScore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyObstacles_eventGetEndScore_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyObstacles_GetEndScore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyObstacles_GetEndScore_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyObstacles_GetEndScore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyObstacles.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyObstacles_GetEndScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyObstacles, nullptr, "GetEndScore", nullptr, nullptr, sizeof(MyObstacles_eventGetEndScore_Parms), Z_Construct_UFunction_AMyObstacles_GetEndScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyObstacles_GetEndScore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyObstacles_GetEndScore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyObstacles_GetEndScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyObstacles_GetEndScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyObstacles_GetEndScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMyObstacles_NoRegister()
	{
		return AMyObstacles::StaticClass();
	}
	struct Z_Construct_UClass_AMyObstacles_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VehColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VehColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyRootComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyRootComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyObstacles_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyCourseProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyObstacles_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyObstacles_GetEndScore, "GetEndScore" }, // 80083965
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyObstacles_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyObstacles.h" },
		{ "ModuleRelativePath", "MyObstacles.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyObstacles_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "Box" },
		{ "ModuleRelativePath", "MyObstacles.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyObstacles_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyObstacles, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyObstacles_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyObstacles_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyObstacles_Statics::NewProp_VehColor_MetaData[] = {
		{ "Category", "Box" },
		{ "ModuleRelativePath", "MyObstacles.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyObstacles_Statics::NewProp_VehColor = { "VehColor", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyObstacles, VehColor), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyObstacles_Statics::NewProp_VehColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyObstacles_Statics::NewProp_VehColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyObstacles_Statics::NewProp_MyRootComp_MetaData[] = {
		{ "Category", "Box" },
		{ "Comment", "//??????? ????, ??????? ????? ?????? ???? ???????? ??? ?????? ???????????.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyObstacles.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyObstacles_Statics::NewProp_MyRootComp = { "MyRootComp", nullptr, (EPropertyFlags)0x001000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyObstacles, MyRootComp), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyObstacles_Statics::NewProp_MyRootComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyObstacles_Statics::NewProp_MyRootComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyObstacles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyObstacles_Statics::NewProp_Mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyObstacles_Statics::NewProp_VehColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyObstacles_Statics::NewProp_MyRootComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyObstacles_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyObstacles>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyObstacles_Statics::ClassParams = {
		&AMyObstacles::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMyObstacles_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyObstacles_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMyObstacles_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyObstacles_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyObstacles()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyObstacles_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyObstacles, 728299747);
	template<> MYCOURSEPROJECT_API UClass* StaticClass<AMyObstacles>()
	{
		return AMyObstacles::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyObstacles(Z_Construct_UClass_AMyObstacles, &AMyObstacles::StaticClass, TEXT("/Script/MyCourseProject"), TEXT("AMyObstacles"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyObstacles);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
