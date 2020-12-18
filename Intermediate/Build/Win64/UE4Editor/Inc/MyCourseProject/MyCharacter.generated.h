// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYCOURSEPROJECT_MyCharacter_generated_h
#error "MyCharacter.generated.h already included, missing '#pragma once' in MyCharacter.h"
#endif
#define MYCOURSEPROJECT_MyCharacter_generated_h

#define MyCourseProject_Source_MyCourseProject_MyCharacter_h_13_DELEGATE \
static inline void FDonatScoreEvent_DelegateWrapper(const FMulticastScriptDelegate& DonatScoreEvent) \
{ \
	DonatScoreEvent.ProcessMulticastDelegate<UObject>(NULL); \
}


#define MyCourseProject_Source_MyCourseProject_MyCharacter_h_18_SPARSE_DATA
#define MyCourseProject_Source_MyCourseProject_MyCharacter_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCollectDon);


#define MyCourseProject_Source_MyCourseProject_MyCharacter_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCollectDon);


#define MyCourseProject_Source_MyCourseProject_MyCharacter_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyCharacter(); \
	friend struct Z_Construct_UClass_AMyCharacter_Statics; \
public: \
	DECLARE_CLASS(AMyCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyCourseProject"), NO_API) \
	DECLARE_SERIALIZER(AMyCharacter)


#define MyCourseProject_Source_MyCourseProject_MyCharacter_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAMyCharacter(); \
	friend struct Z_Construct_UClass_AMyCharacter_Statics; \
public: \
	DECLARE_CLASS(AMyCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyCourseProject"), NO_API) \
	DECLARE_SERIALIZER(AMyCharacter)


#define MyCourseProject_Source_MyCourseProject_MyCharacter_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyCharacter(AMyCharacter&&); \
	NO_API AMyCharacter(const AMyCharacter&); \
public:


#define MyCourseProject_Source_MyCourseProject_MyCharacter_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyCharacter(AMyCharacter&&); \
	NO_API AMyCharacter(const AMyCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyCharacter)


#define MyCourseProject_Source_MyCourseProject_MyCharacter_h_18_PRIVATE_PROPERTY_OFFSET
#define MyCourseProject_Source_MyCourseProject_MyCharacter_h_15_PROLOG
#define MyCourseProject_Source_MyCourseProject_MyCharacter_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyCourseProject_Source_MyCourseProject_MyCharacter_h_18_PRIVATE_PROPERTY_OFFSET \
	MyCourseProject_Source_MyCourseProject_MyCharacter_h_18_SPARSE_DATA \
	MyCourseProject_Source_MyCourseProject_MyCharacter_h_18_RPC_WRAPPERS \
	MyCourseProject_Source_MyCourseProject_MyCharacter_h_18_INCLASS \
	MyCourseProject_Source_MyCourseProject_MyCharacter_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyCourseProject_Source_MyCourseProject_MyCharacter_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyCourseProject_Source_MyCourseProject_MyCharacter_h_18_PRIVATE_PROPERTY_OFFSET \
	MyCourseProject_Source_MyCourseProject_MyCharacter_h_18_SPARSE_DATA \
	MyCourseProject_Source_MyCourseProject_MyCharacter_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	MyCourseProject_Source_MyCourseProject_MyCharacter_h_18_INCLASS_NO_PURE_DECLS \
	MyCourseProject_Source_MyCourseProject_MyCharacter_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYCOURSEPROJECT_API UClass* StaticClass<class AMyCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyCourseProject_Source_MyCourseProject_MyCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
