// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef YRTPPROJECT_YRTPProjectCharacter_generated_h
#error "YRTPProjectCharacter.generated.h already included, missing '#pragma once' in YRTPProjectCharacter.h"
#endif
#define YRTPPROJECT_YRTPProjectCharacter_generated_h

#define YRTPProject_Source_YRTPProject_YRTPProjectCharacter_h_12_RPC_WRAPPERS
#define YRTPProject_Source_YRTPProject_YRTPProjectCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define YRTPProject_Source_YRTPProject_YRTPProjectCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAYRTPProjectCharacter(); \
	friend struct Z_Construct_UClass_AYRTPProjectCharacter_Statics; \
public: \
	DECLARE_CLASS(AYRTPProjectCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/YRTPProject"), NO_API) \
	DECLARE_SERIALIZER(AYRTPProjectCharacter)


#define YRTPProject_Source_YRTPProject_YRTPProjectCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAYRTPProjectCharacter(); \
	friend struct Z_Construct_UClass_AYRTPProjectCharacter_Statics; \
public: \
	DECLARE_CLASS(AYRTPProjectCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/YRTPProject"), NO_API) \
	DECLARE_SERIALIZER(AYRTPProjectCharacter)


#define YRTPProject_Source_YRTPProject_YRTPProjectCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AYRTPProjectCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AYRTPProjectCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AYRTPProjectCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AYRTPProjectCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AYRTPProjectCharacter(AYRTPProjectCharacter&&); \
	NO_API AYRTPProjectCharacter(const AYRTPProjectCharacter&); \
public:


#define YRTPProject_Source_YRTPProject_YRTPProjectCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AYRTPProjectCharacter(AYRTPProjectCharacter&&); \
	NO_API AYRTPProjectCharacter(const AYRTPProjectCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AYRTPProjectCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AYRTPProjectCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AYRTPProjectCharacter)


#define YRTPProject_Source_YRTPProject_YRTPProjectCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AYRTPProjectCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AYRTPProjectCharacter, FollowCamera); }


#define YRTPProject_Source_YRTPProject_YRTPProjectCharacter_h_9_PROLOG
#define YRTPProject_Source_YRTPProject_YRTPProjectCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	YRTPProject_Source_YRTPProject_YRTPProjectCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	YRTPProject_Source_YRTPProject_YRTPProjectCharacter_h_12_RPC_WRAPPERS \
	YRTPProject_Source_YRTPProject_YRTPProjectCharacter_h_12_INCLASS \
	YRTPProject_Source_YRTPProject_YRTPProjectCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define YRTPProject_Source_YRTPProject_YRTPProjectCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	YRTPProject_Source_YRTPProject_YRTPProjectCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	YRTPProject_Source_YRTPProject_YRTPProjectCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	YRTPProject_Source_YRTPProject_YRTPProjectCharacter_h_12_INCLASS_NO_PURE_DECLS \
	YRTPProject_Source_YRTPProject_YRTPProjectCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> YRTPPROJECT_API UClass* StaticClass<class AYRTPProjectCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID YRTPProject_Source_YRTPProject_YRTPProjectCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
