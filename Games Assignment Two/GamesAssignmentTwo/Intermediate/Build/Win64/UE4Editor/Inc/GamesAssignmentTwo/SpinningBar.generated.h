// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMESASSIGNMENTTWO_SpinningBar_generated_h
#error "SpinningBar.generated.h already included, missing '#pragma once' in SpinningBar.h"
#endif
#define GAMESASSIGNMENTTWO_SpinningBar_generated_h

#define GamesAssignmentTwo_Source_GamesAssignmentTwo_SpinningBar_h_12_SPARSE_DATA
#define GamesAssignmentTwo_Source_GamesAssignmentTwo_SpinningBar_h_12_RPC_WRAPPERS
#define GamesAssignmentTwo_Source_GamesAssignmentTwo_SpinningBar_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define GamesAssignmentTwo_Source_GamesAssignmentTwo_SpinningBar_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpinningBar(); \
	friend struct Z_Construct_UClass_ASpinningBar_Statics; \
public: \
	DECLARE_CLASS(ASpinningBar, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GamesAssignmentTwo"), NO_API) \
	DECLARE_SERIALIZER(ASpinningBar) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		RotationRate=NETFIELD_REP_START, \
		NETFIELD_REP_END=RotationRate	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define GamesAssignmentTwo_Source_GamesAssignmentTwo_SpinningBar_h_12_INCLASS \
private: \
	static void StaticRegisterNativesASpinningBar(); \
	friend struct Z_Construct_UClass_ASpinningBar_Statics; \
public: \
	DECLARE_CLASS(ASpinningBar, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GamesAssignmentTwo"), NO_API) \
	DECLARE_SERIALIZER(ASpinningBar) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		RotationRate=NETFIELD_REP_START, \
		NETFIELD_REP_END=RotationRate	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define GamesAssignmentTwo_Source_GamesAssignmentTwo_SpinningBar_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASpinningBar(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASpinningBar) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpinningBar); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpinningBar); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpinningBar(ASpinningBar&&); \
	NO_API ASpinningBar(const ASpinningBar&); \
public:


#define GamesAssignmentTwo_Source_GamesAssignmentTwo_SpinningBar_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpinningBar(ASpinningBar&&); \
	NO_API ASpinningBar(const ASpinningBar&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpinningBar); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpinningBar); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASpinningBar)


#define GamesAssignmentTwo_Source_GamesAssignmentTwo_SpinningBar_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SpinningBarMesh() { return STRUCT_OFFSET(ASpinningBar, SpinningBarMesh); } \
	FORCEINLINE static uint32 __PPO__RotationRate() { return STRUCT_OFFSET(ASpinningBar, RotationRate); }


#define GamesAssignmentTwo_Source_GamesAssignmentTwo_SpinningBar_h_9_PROLOG
#define GamesAssignmentTwo_Source_GamesAssignmentTwo_SpinningBar_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GamesAssignmentTwo_Source_GamesAssignmentTwo_SpinningBar_h_12_PRIVATE_PROPERTY_OFFSET \
	GamesAssignmentTwo_Source_GamesAssignmentTwo_SpinningBar_h_12_SPARSE_DATA \
	GamesAssignmentTwo_Source_GamesAssignmentTwo_SpinningBar_h_12_RPC_WRAPPERS \
	GamesAssignmentTwo_Source_GamesAssignmentTwo_SpinningBar_h_12_INCLASS \
	GamesAssignmentTwo_Source_GamesAssignmentTwo_SpinningBar_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GamesAssignmentTwo_Source_GamesAssignmentTwo_SpinningBar_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GamesAssignmentTwo_Source_GamesAssignmentTwo_SpinningBar_h_12_PRIVATE_PROPERTY_OFFSET \
	GamesAssignmentTwo_Source_GamesAssignmentTwo_SpinningBar_h_12_SPARSE_DATA \
	GamesAssignmentTwo_Source_GamesAssignmentTwo_SpinningBar_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	GamesAssignmentTwo_Source_GamesAssignmentTwo_SpinningBar_h_12_INCLASS_NO_PURE_DECLS \
	GamesAssignmentTwo_Source_GamesAssignmentTwo_SpinningBar_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESASSIGNMENTTWO_API UClass* StaticClass<class ASpinningBar>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GamesAssignmentTwo_Source_GamesAssignmentTwo_SpinningBar_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
