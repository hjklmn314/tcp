// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/TempestBaseAbilityManagerComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTempestBaseAbilityObject;
struct FGameplayTag;
#ifdef TEMPESTCOMBATFRAMEWORK_TempestBaseAbilityManagerComponent_generated_h
#error "TempestBaseAbilityManagerComponent.generated.h already included, missing '#pragma once' in TempestBaseAbilityManagerComponent.h"
#endif
#define TEMPESTCOMBATFRAMEWORK_TempestBaseAbilityManagerComponent_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Components_TempestBaseAbilityManagerComponent_h_11_DELEGATE \
static inline void FOnUpdatedActiveAbility_DelegateWrapper(const FMulticastScriptDelegate& OnUpdatedActiveAbility) \
{ \
	OnUpdatedActiveAbility.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Components_TempestBaseAbilityManagerComponent_h_16_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Components_TempestBaseAbilityManagerComponent_h_16_RPC_WRAPPERS \
	virtual void InitializeAbilitySystemComponent_Implementation(); \
 \
	DECLARE_FUNCTION(execClearAbilityComponent); \
	DECLARE_FUNCTION(execConstructAbilityOfClass); \
	DECLARE_FUNCTION(execGetAbilityOfGameplayTag); \
	DECLARE_FUNCTION(execGetChildAbilityOfClass); \
	DECLARE_FUNCTION(execGetActivatableAbilities); \
	DECLARE_FUNCTION(execGetPassiveAbilities); \
	DECLARE_FUNCTION(execGetCanPerformAbilityOfClass); \
	DECLARE_FUNCTION(execGetAbilityOfClass); \
	DECLARE_FUNCTION(execGetCurrentActiveAbility); \
	DECLARE_FUNCTION(execRemoveFromPassiveAbilities); \
	DECLARE_FUNCTION(execSetAsPassiveAbility); \
	DECLARE_FUNCTION(execSetCurrentActiveAbility); \
	DECLARE_FUNCTION(execTryPerformAbilitiesOfClass); \
	DECLARE_FUNCTION(execTryPerformAbilityOfClass); \
	DECLARE_FUNCTION(execPerformAbilityOfClass); \
	DECLARE_FUNCTION(execInitializeAbilitySystemComponent);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Components_TempestBaseAbilityManagerComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClearAbilityComponent); \
	DECLARE_FUNCTION(execConstructAbilityOfClass); \
	DECLARE_FUNCTION(execGetAbilityOfGameplayTag); \
	DECLARE_FUNCTION(execGetChildAbilityOfClass); \
	DECLARE_FUNCTION(execGetActivatableAbilities); \
	DECLARE_FUNCTION(execGetPassiveAbilities); \
	DECLARE_FUNCTION(execGetCanPerformAbilityOfClass); \
	DECLARE_FUNCTION(execGetAbilityOfClass); \
	DECLARE_FUNCTION(execGetCurrentActiveAbility); \
	DECLARE_FUNCTION(execRemoveFromPassiveAbilities); \
	DECLARE_FUNCTION(execSetAsPassiveAbility); \
	DECLARE_FUNCTION(execSetCurrentActiveAbility); \
	DECLARE_FUNCTION(execTryPerformAbilitiesOfClass); \
	DECLARE_FUNCTION(execTryPerformAbilityOfClass); \
	DECLARE_FUNCTION(execPerformAbilityOfClass); \
	DECLARE_FUNCTION(execInitializeAbilitySystemComponent);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Components_TempestBaseAbilityManagerComponent_h_16_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Components_TempestBaseAbilityManagerComponent_h_16_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Components_TempestBaseAbilityManagerComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTempestBaseAbilityManagerComponent(); \
	friend struct Z_Construct_UClass_UTempestBaseAbilityManagerComponent_Statics; \
public: \
	DECLARE_CLASS(UTempestBaseAbilityManagerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TempestCombatFramework"), NO_API) \
	DECLARE_SERIALIZER(UTempestBaseAbilityManagerComponent)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Components_TempestBaseAbilityManagerComponent_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUTempestBaseAbilityManagerComponent(); \
	friend struct Z_Construct_UClass_UTempestBaseAbilityManagerComponent_Statics; \
public: \
	DECLARE_CLASS(UTempestBaseAbilityManagerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TempestCombatFramework"), NO_API) \
	DECLARE_SERIALIZER(UTempestBaseAbilityManagerComponent)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Components_TempestBaseAbilityManagerComponent_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTempestBaseAbilityManagerComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTempestBaseAbilityManagerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTempestBaseAbilityManagerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTempestBaseAbilityManagerComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTempestBaseAbilityManagerComponent(UTempestBaseAbilityManagerComponent&&); \
	NO_API UTempestBaseAbilityManagerComponent(const UTempestBaseAbilityManagerComponent&); \
public: \
	NO_API virtual ~UTempestBaseAbilityManagerComponent();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Components_TempestBaseAbilityManagerComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTempestBaseAbilityManagerComponent(UTempestBaseAbilityManagerComponent&&); \
	NO_API UTempestBaseAbilityManagerComponent(const UTempestBaseAbilityManagerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTempestBaseAbilityManagerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTempestBaseAbilityManagerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTempestBaseAbilityManagerComponent) \
	NO_API virtual ~UTempestBaseAbilityManagerComponent();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Components_TempestBaseAbilityManagerComponent_h_13_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Components_TempestBaseAbilityManagerComponent_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Components_TempestBaseAbilityManagerComponent_h_16_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Components_TempestBaseAbilityManagerComponent_h_16_RPC_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Components_TempestBaseAbilityManagerComponent_h_16_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Components_TempestBaseAbilityManagerComponent_h_16_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Components_TempestBaseAbilityManagerComponent_h_16_INCLASS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Components_TempestBaseAbilityManagerComponent_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Components_TempestBaseAbilityManagerComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Components_TempestBaseAbilityManagerComponent_h_16_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Components_TempestBaseAbilityManagerComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Components_TempestBaseAbilityManagerComponent_h_16_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Components_TempestBaseAbilityManagerComponent_h_16_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Components_TempestBaseAbilityManagerComponent_h_16_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Components_TempestBaseAbilityManagerComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEMPESTCOMBATFRAMEWORK_API UClass* StaticClass<class UTempestBaseAbilityManagerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Components_TempestBaseAbilityManagerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
