// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyCourseProject/MyCourseProjectGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyCourseProjectGameModeBase() {}
// Cross Module References
	MYCOURSEPROJECT_API UClass* Z_Construct_UClass_AMyCourseProjectGameModeBase_NoRegister();
	MYCOURSEPROJECT_API UClass* Z_Construct_UClass_AMyCourseProjectGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_MyCourseProject();
// End Cross Module References
	DEFINE_FUNCTION(AMyCourseProjectGameModeBase::execAddScores)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddScores(Z_Param_Value);
		P_NATIVE_END;
	}
	void AMyCourseProjectGameModeBase::StaticRegisterNativesAMyCourseProjectGameModeBase()
	{
		UClass* Class = AMyCourseProjectGameModeBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddScores", &AMyCourseProjectGameModeBase::execAddScores },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyCourseProjectGameModeBase_AddScores_Statics
	{
		struct MyCourseProjectGameModeBase_eventAddScores_Parms
		{
			int32 Value;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMyCourseProjectGameModeBase_AddScores_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyCourseProjectGameModeBase_eventAddScores_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCourseProjectGameModeBase_AddScores_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCourseProjectGameModeBase_AddScores_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCourseProjectGameModeBase_AddScores_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyCourseProjectGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCourseProjectGameModeBase_AddScores_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCourseProjectGameModeBase, nullptr, "AddScores", nullptr, nullptr, sizeof(MyCourseProjectGameModeBase_eventAddScores_Parms), Z_Construct_UFunction_AMyCourseProjectGameModeBase_AddScores_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCourseProjectGameModeBase_AddScores_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyCourseProjectGameModeBase_AddScores_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCourseProjectGameModeBase_AddScores_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyCourseProjectGameModeBase_AddScores()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyCourseProjectGameModeBase_AddScores_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMyCourseProjectGameModeBase_NoRegister()
	{
		return AMyCourseProjectGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AMyCourseProjectGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Score_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Score;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyCourseProjectGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MyCourseProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyCourseProjectGameModeBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyCourseProjectGameModeBase_AddScores, "AddScores" }, // 942259316
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCourseProjectGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MyCourseProjectGameModeBase.h" },
		{ "ModuleRelativePath", "MyCourseProjectGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCourseProjectGameModeBase_Statics::NewProp_Score_MetaData[] = {
		{ "Category", "Score" },
		{ "ModuleRelativePath", "MyCourseProjectGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AMyCourseProjectGameModeBase_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyCourseProjectGameModeBase, Score), METADATA_PARAMS(Z_Construct_UClass_AMyCourseProjectGameModeBase_Statics::NewProp_Score_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyCourseProjectGameModeBase_Statics::NewProp_Score_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyCourseProjectGameModeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCourseProjectGameModeBase_Statics::NewProp_Score,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyCourseProjectGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyCourseProjectGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyCourseProjectGameModeBase_Statics::ClassParams = {
		&AMyCourseProjectGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMyCourseProjectGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyCourseProjectGameModeBase_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMyCourseProjectGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyCourseProjectGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyCourseProjectGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyCourseProjectGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyCourseProjectGameModeBase, 4095280887);
	template<> MYCOURSEPROJECT_API UClass* StaticClass<AMyCourseProjectGameModeBase>()
	{
		return AMyCourseProjectGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyCourseProjectGameModeBase(Z_Construct_UClass_AMyCourseProjectGameModeBase, &AMyCourseProjectGameModeBase::StaticClass, TEXT("/Script/MyCourseProject"), TEXT("AMyCourseProjectGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyCourseProjectGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
