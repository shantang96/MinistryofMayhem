// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MINISTRYOFMAYHEM_SpawnManager_generated_h
#error "SpawnManager.generated.h already included, missing '#pragma once' in SpawnManager.h"
#endif
#define MINISTRYOFMAYHEM_SpawnManager_generated_h

#define MinistryofMayhem_Source_MinistryofMayhem_SpawnManager_h_11_RPC_WRAPPERS
#define MinistryofMayhem_Source_MinistryofMayhem_SpawnManager_h_11_RPC_WRAPPERS_NO_PURE_DECLS
#define MinistryofMayhem_Source_MinistryofMayhem_SpawnManager_h_11_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesASpawnManager(); \
	friend MINISTRYOFMAYHEM_API class UClass* Z_Construct_UClass_ASpawnManager(); \
	public: \
	DECLARE_CLASS(ASpawnManager, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MinistryofMayhem"), NO_API) \
	DECLARE_SERIALIZER(ASpawnManager) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MinistryofMayhem_Source_MinistryofMayhem_SpawnManager_h_11_INCLASS \
	private: \
	static void StaticRegisterNativesASpawnManager(); \
	friend MINISTRYOFMAYHEM_API class UClass* Z_Construct_UClass_ASpawnManager(); \
	public: \
	DECLARE_CLASS(ASpawnManager, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MinistryofMayhem"), NO_API) \
	DECLARE_SERIALIZER(ASpawnManager) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MinistryofMayhem_Source_MinistryofMayhem_SpawnManager_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASpawnManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASpawnManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpawnManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpawnManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpawnManager(ASpawnManager&&); \
	NO_API ASpawnManager(const ASpawnManager&); \
public:


#define MinistryofMayhem_Source_MinistryofMayhem_SpawnManager_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpawnManager(ASpawnManager&&); \
	NO_API ASpawnManager(const ASpawnManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpawnManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpawnManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASpawnManager)


#define MinistryofMayhem_Source_MinistryofMayhem_SpawnManager_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SpawnPoints() { return STRUCT_OFFSET(ASpawnManager, SpawnPoints); } \
	FORCEINLINE static uint32 __PPO__CharacterClass() { return STRUCT_OFFSET(ASpawnManager, CharacterClass); }


#define MinistryofMayhem_Source_MinistryofMayhem_SpawnManager_h_8_PROLOG
#define MinistryofMayhem_Source_MinistryofMayhem_SpawnManager_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MinistryofMayhem_Source_MinistryofMayhem_SpawnManager_h_11_PRIVATE_PROPERTY_OFFSET \
	MinistryofMayhem_Source_MinistryofMayhem_SpawnManager_h_11_RPC_WRAPPERS \
	MinistryofMayhem_Source_MinistryofMayhem_SpawnManager_h_11_INCLASS \
	MinistryofMayhem_Source_MinistryofMayhem_SpawnManager_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MinistryofMayhem_Source_MinistryofMayhem_SpawnManager_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MinistryofMayhem_Source_MinistryofMayhem_SpawnManager_h_11_PRIVATE_PROPERTY_OFFSET \
	MinistryofMayhem_Source_MinistryofMayhem_SpawnManager_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	MinistryofMayhem_Source_MinistryofMayhem_SpawnManager_h_11_INCLASS_NO_PURE_DECLS \
	MinistryofMayhem_Source_MinistryofMayhem_SpawnManager_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MinistryofMayhem_Source_MinistryofMayhem_SpawnManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
