// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMESASSIGNMENTTWO_PlayableCharacter_generated_h
#error "PlayableCharacter.generated.h already included, missing '#pragma once' in PlayableCharacter.h"
#endif
#define GAMESASSIGNMENTTWO_PlayableCharacter_generated_h

#define GamesAssignmentTwo_Source_GamesAssignmentTwo_PlayableCharacter_h_15_SPARSE_DATA
#define GamesAssignmentTwo_Source_GamesAssignmentTwo_PlayableCharacter_h_15_RPC_WRAPPERS \
	virtual bool ServerDive_Validate(); \
	virtual void ServerDive_Implementation(); \
	virtual void RPCVictorySound_Implementation(); \
 \
	DECLARE_FUNCTION(execServerDive); \
	DECLARE_FUNCTION(execRPCVictorySound);


#define GamesAssignmentTwo_Source_GamesAssignmentTwo_PlayableCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ServerDive_Validate(); \
	virtual void ServerDive_Implementation(); \
	virtual void RPCVictorySound_Implementation(); \
 \
	DECLARE_FUNCTION(execServerDive); \
	DECLARE_FUNCTION(execRPCVictorySound);


#define GamesAssignmentTwo_Source_GamesAssignmentTwo_PlayableCharacter_h_15_EVENT_PARMS
#define GamesAssignmentTwo_Source_GamesAssignmentTwo_PlayableCharacter_h_15_CALLBACK_WRAPPERS
#define GamesAssignmentTwo_Source_GamesAssignmentTwo_PlayableCharacter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayableCharacter(); \
	friend struct Z_Construct_UClass_APlayableCharacter_Statics; \
public: \
	DECLARE_CLASS(APlayableCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GamesAssignmentTwo"), NO_API) \
	DECLARE_SERIALIZER(APlayableCharacter)


#define GamesAssignmentTwo_Source_GamesAssignmentTwo_PlayableCharacter_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAPlayableCharacter(); \
	friend struct Z_Construct_UClass_APlayableCharacter_Statics; \
public: \
	DECLARE_CLASS(APlayableCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GamesAssignmentTwo"), NO_API) \
	DECLARE_SERIALIZER(APlayableCharacter)


#define GamesAssignmentTwo_Source_GamesAssignmentTwo_PlayableCharacter_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayableCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayableCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayableCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayableCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayableCharacter(APlayableCharacter&&); \
	NO_API APlayableCharacter(const APlayableCharacter&); \
public:


#define GamesAssignmentTwo_Source_GamesAssignmentTwo_PlayableCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayableCharacter(APlayableCharacter&&); \
	NO_API APlayableCharacter(const APlayableCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayableCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayableCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayableCharacter)


#define GamesAssignmentTwo_Source_GamesAssignmentTwo_PlayableCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(APlayableCharacter, Camera); } \
	FORCEINLINE static uint32 __PPO__SpringArm() { return STRUCT_OFFSET(APlayableCharacter, SpringArm); } \
	FORCEINLINE static uint32 __PPO__VictorySound() { return STRUCT_OFFSET(APlayableCharacter, VictorySound); } \
	FORCEINLINE static uint32 __PPO__SpringArmLength() { return STRUCT_OFFSET(APlayableCharacter, SpringArmLength); } \
	FORCEINLINE static uint32 __PPO__RespawnPoints() { return STRUCT_OFFSET(APlayableCharacter, RespawnPoints); }


#define GamesAssignmentTwo_Source_GamesAssignmentTwo_PlayableCharacter_h_12_PROLOG \
	GamesAssignmentTwo_Source_GamesAssignmentTwo_PlayableCharacter_h_15_EVENT_PARMS


#define GamesAssignmentTwo_Source_GamesAssignmentTwo_PlayableCharacter_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GamesAssignmentTwo_Source_GamesAssignmentTwo_PlayableCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	GamesAssignmentTwo_Source_GamesAssignmentTwo_PlayableCharacter_h_15_SPARSE_DATA \
	GamesAssignmentTwo_Source_GamesAssignmentTwo_PlayableCharacter_h_15_RPC_WRAPPERS \
	GamesAssignmentTwo_Source_GamesAssignmentTwo_PlayableCharacter_h_15_CALLBACK_WRAPPERS \
	GamesAssignmentTwo_Source_GamesAssignmentTwo_PlayableCharacter_h_15_INCLASS \
	GamesAssignmentTwo_Source_GamesAssignmentTwo_PlayableCharacter_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GamesAssignmentTwo_Source_GamesAssignmentTwo_PlayableCharacter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GamesAssignmentTwo_Source_GamesAssignmentTwo_PlayableCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	GamesAssignmentTwo_Source_GamesAssignmentTwo_PlayableCharacter_h_15_SPARSE_DATA \
	GamesAssignmentTwo_Source_GamesAssignmentTwo_PlayableCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	GamesAssignmentTwo_Source_GamesAssignmentTwo_PlayableCharacter_h_15_CALLBACK_WRAPPERS \
	GamesAssignmentTwo_Source_GamesAssignmentTwo_PlayableCharacter_h_15_INCLASS_NO_PURE_DECLS \
	GamesAssignmentTwo_Source_GamesAssignmentTwo_PlayableCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESASSIGNMENTTWO_API UClass* StaticClass<class APlayableCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GamesAssignmentTwo_Source_GamesAssignmentTwo_PlayableCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
