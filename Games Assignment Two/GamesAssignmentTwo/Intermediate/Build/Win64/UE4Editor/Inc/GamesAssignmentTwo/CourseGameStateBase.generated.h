// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMESASSIGNMENTTWO_CourseGameStateBase_generated_h
#error "CourseGameStateBase.generated.h already included, missing '#pragma once' in CourseGameStateBase.h"
#endif
#define GAMESASSIGNMENTTWO_CourseGameStateBase_generated_h

#define GamesAssignmentTwo_Source_GamesAssignmentTwo_CourseGameStateBase_h_16_SPARSE_DATA
#define GamesAssignmentTwo_Source_GamesAssignmentTwo_CourseGameStateBase_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_TotalPlayersOverFinishLine); \
	DECLARE_FUNCTION(execReturnPlayersFinished);


#define GamesAssignmentTwo_Source_GamesAssignmentTwo_CourseGameStateBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_TotalPlayersOverFinishLine); \
	DECLARE_FUNCTION(execReturnPlayersFinished);


#define GamesAssignmentTwo_Source_GamesAssignmentTwo_CourseGameStateBase_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACourseGameStateBase(); \
	friend struct Z_Construct_UClass_ACourseGameStateBase_Statics; \
public: \
	DECLARE_CLASS(ACourseGameStateBase, AGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GamesAssignmentTwo"), NO_API) \
	DECLARE_SERIALIZER(ACourseGameStateBase) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		PlayersOverFinishLine=NETFIELD_REP_START, \
		NETFIELD_REP_END=PlayersOverFinishLine	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define GamesAssignmentTwo_Source_GamesAssignmentTwo_CourseGameStateBase_h_16_INCLASS \
private: \
	static void StaticRegisterNativesACourseGameStateBase(); \
	friend struct Z_Construct_UClass_ACourseGameStateBase_Statics; \
public: \
	DECLARE_CLASS(ACourseGameStateBase, AGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GamesAssignmentTwo"), NO_API) \
	DECLARE_SERIALIZER(ACourseGameStateBase) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		PlayersOverFinishLine=NETFIELD_REP_START, \
		NETFIELD_REP_END=PlayersOverFinishLine	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define GamesAssignmentTwo_Source_GamesAssignmentTwo_CourseGameStateBase_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACourseGameStateBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACourseGameStateBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACourseGameStateBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACourseGameStateBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACourseGameStateBase(ACourseGameStateBase&&); \
	NO_API ACourseGameStateBase(const ACourseGameStateBase&); \
public:


#define GamesAssignmentTwo_Source_GamesAssignmentTwo_CourseGameStateBase_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACourseGameStateBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACourseGameStateBase(ACourseGameStateBase&&); \
	NO_API ACourseGameStateBase(const ACourseGameStateBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACourseGameStateBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACourseGameStateBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACourseGameStateBase)


#define GamesAssignmentTwo_Source_GamesAssignmentTwo_CourseGameStateBase_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PlayersOverFinishLine() { return STRUCT_OFFSET(ACourseGameStateBase, PlayersOverFinishLine); }


#define GamesAssignmentTwo_Source_GamesAssignmentTwo_CourseGameStateBase_h_13_PROLOG
#define GamesAssignmentTwo_Source_GamesAssignmentTwo_CourseGameStateBase_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GamesAssignmentTwo_Source_GamesAssignmentTwo_CourseGameStateBase_h_16_PRIVATE_PROPERTY_OFFSET \
	GamesAssignmentTwo_Source_GamesAssignmentTwo_CourseGameStateBase_h_16_SPARSE_DATA \
	GamesAssignmentTwo_Source_GamesAssignmentTwo_CourseGameStateBase_h_16_RPC_WRAPPERS \
	GamesAssignmentTwo_Source_GamesAssignmentTwo_CourseGameStateBase_h_16_INCLASS \
	GamesAssignmentTwo_Source_GamesAssignmentTwo_CourseGameStateBase_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GamesAssignmentTwo_Source_GamesAssignmentTwo_CourseGameStateBase_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GamesAssignmentTwo_Source_GamesAssignmentTwo_CourseGameStateBase_h_16_PRIVATE_PROPERTY_OFFSET \
	GamesAssignmentTwo_Source_GamesAssignmentTwo_CourseGameStateBase_h_16_SPARSE_DATA \
	GamesAssignmentTwo_Source_GamesAssignmentTwo_CourseGameStateBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	GamesAssignmentTwo_Source_GamesAssignmentTwo_CourseGameStateBase_h_16_INCLASS_NO_PURE_DECLS \
	GamesAssignmentTwo_Source_GamesAssignmentTwo_CourseGameStateBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESASSIGNMENTTWO_API UClass* StaticClass<class ACourseGameStateBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GamesAssignmentTwo_Source_GamesAssignmentTwo_CourseGameStateBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
