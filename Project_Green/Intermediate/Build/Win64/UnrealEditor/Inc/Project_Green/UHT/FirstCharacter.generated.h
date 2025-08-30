// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FirstCharacter.h"

#ifdef PROJECT_GREEN_FirstCharacter_generated_h
#error "FirstCharacter.generated.h already included, missing '#pragma once' in FirstCharacter.h"
#endif
#define PROJECT_GREEN_FirstCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AFirstCharacter **********************************************************
#define FID_Diss_git_Reality_Shift__Project_Green_Source_Project_Green_Private_FirstCharacter_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoJumpEnd); \
	DECLARE_FUNCTION(execDoJumpStart); \
	DECLARE_FUNCTION(execDoDash); \
	DECLARE_FUNCTION(execDoLook); \
	DECLARE_FUNCTION(execDoMove);


PROJECT_GREEN_API UClass* Z_Construct_UClass_AFirstCharacter_NoRegister();

#define FID_Diss_git_Reality_Shift__Project_Green_Source_Project_Green_Private_FirstCharacter_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFirstCharacter(); \
	friend struct Z_Construct_UClass_AFirstCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECT_GREEN_API UClass* Z_Construct_UClass_AFirstCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AFirstCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Project_Green"), Z_Construct_UClass_AFirstCharacter_NoRegister) \
	DECLARE_SERIALIZER(AFirstCharacter)


#define FID_Diss_git_Reality_Shift__Project_Green_Source_Project_Green_Private_FirstCharacter_h_25_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AFirstCharacter(AFirstCharacter&&) = delete; \
	AFirstCharacter(const AFirstCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFirstCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFirstCharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AFirstCharacter) \
	NO_API virtual ~AFirstCharacter();


#define FID_Diss_git_Reality_Shift__Project_Green_Source_Project_Green_Private_FirstCharacter_h_22_PROLOG
#define FID_Diss_git_Reality_Shift__Project_Green_Source_Project_Green_Private_FirstCharacter_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Diss_git_Reality_Shift__Project_Green_Source_Project_Green_Private_FirstCharacter_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Diss_git_Reality_Shift__Project_Green_Source_Project_Green_Private_FirstCharacter_h_25_INCLASS_NO_PURE_DECLS \
	FID_Diss_git_Reality_Shift__Project_Green_Source_Project_Green_Private_FirstCharacter_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AFirstCharacter;

// ********** End Class AFirstCharacter ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Diss_git_Reality_Shift__Project_Green_Source_Project_Green_Private_FirstCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
