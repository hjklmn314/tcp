// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TempestCombatFramework/Public/Components/TempestBaseAbilityManagerComponent.h"
#include "GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTempestBaseAbilityManagerComponent() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	TEMPESTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UTempestBaseAbilityManagerComponent();
	TEMPESTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UTempestBaseAbilityManagerComponent_NoRegister();
	TEMPESTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UTempestBaseAbilityObject_NoRegister();
	TEMPESTCOMBATFRAMEWORK_API UFunction* Z_Construct_UDelegateFunction_TempestCombatFramework_OnUpdatedActiveAbility__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_TempestCombatFramework();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_TempestCombatFramework_OnUpdatedActiveAbility__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TempestCombatFramework_OnUpdatedActiveAbility__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/TempestBaseAbilityManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TempestCombatFramework_OnUpdatedActiveAbility__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TempestCombatFramework, nullptr, "OnUpdatedActiveAbility__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TempestCombatFramework_OnUpdatedActiveAbility__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TempestCombatFramework_OnUpdatedActiveAbility__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TempestCombatFramework_OnUpdatedActiveAbility__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TempestCombatFramework_OnUpdatedActiveAbility__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UTempestBaseAbilityManagerComponent::execClearAbilityComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearAbilityComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTempestBaseAbilityManagerComponent::execConstructAbilityOfClass)
	{
		P_GET_OBJECT(UClass,Z_Param_AbilityToConstruct);
		P_GET_OBJECT_REF(UTempestBaseAbilityObject,Z_Param_Out_ConstructedAbility);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ConstructAbilityOfClass(Z_Param_AbilityToConstruct,Z_Param_Out_ConstructedAbility);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTempestBaseAbilityManagerComponent::execGetAbilityOfGameplayTag)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_AbilityGameplayTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTempestBaseAbilityObject**)Z_Param__Result=P_THIS->GetAbilityOfGameplayTag(Z_Param_AbilityGameplayTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTempestBaseAbilityManagerComponent::execGetChildAbilityOfClass)
	{
		P_GET_OBJECT(UClass,Z_Param_AbilityToSearch);
		P_GET_OBJECT_REF(UTempestBaseAbilityObject,Z_Param_Out_FoundAbility);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetChildAbilityOfClass(Z_Param_AbilityToSearch,Z_Param_Out_FoundAbility);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTempestBaseAbilityManagerComponent::execGetActivatableAbilities)
	{
		P_GET_TARRAY_REF(UTempestBaseAbilityObject*,Z_Param_Out_ActivatableAbilitiesArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetActivatableAbilities(Z_Param_Out_ActivatableAbilitiesArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTempestBaseAbilityManagerComponent::execGetPassiveAbilities)
	{
		P_GET_TARRAY_REF(UTempestBaseAbilityObject*,Z_Param_Out_PassiveAbilitiesArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetPassiveAbilities(Z_Param_Out_PassiveAbilitiesArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTempestBaseAbilityManagerComponent::execGetCanPerformAbilityOfClass)
	{
		P_GET_OBJECT(UClass,Z_Param_AbilityToSearch);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCanPerformAbilityOfClass(Z_Param_AbilityToSearch);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTempestBaseAbilityManagerComponent::execGetAbilityOfClass)
	{
		P_GET_OBJECT(UClass,Z_Param_AbilityToSearch);
		P_GET_OBJECT_REF(UTempestBaseAbilityObject,Z_Param_Out_FoundAbility);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAbilityOfClass(Z_Param_AbilityToSearch,Z_Param_Out_FoundAbility);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTempestBaseAbilityManagerComponent::execGetCurrentActiveAbility)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTempestBaseAbilityObject**)Z_Param__Result=P_THIS->GetCurrentActiveAbility();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTempestBaseAbilityManagerComponent::execRemoveFromPassiveAbilities)
	{
		P_GET_OBJECT(UTempestBaseAbilityObject,Z_Param_AbilityToRemove);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveFromPassiveAbilities(Z_Param_AbilityToRemove);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTempestBaseAbilityManagerComponent::execSetAsPassiveAbility)
	{
		P_GET_OBJECT(UTempestBaseAbilityObject,Z_Param_NewPassiveAbility);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAsPassiveAbility(Z_Param_NewPassiveAbility);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTempestBaseAbilityManagerComponent::execSetCurrentActiveAbility)
	{
		P_GET_OBJECT(UTempestBaseAbilityObject,Z_Param_NewCurrentActiveAbility);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCurrentActiveAbility(Z_Param_NewCurrentActiveAbility);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTempestBaseAbilityManagerComponent::execTryPerformAbilitiesOfClass)
	{
		P_GET_TARRAY(TSubclassOf<UTempestBaseAbilityObject> ,Z_Param_AbilitiesToSet);
		P_GET_UBOOL(Z_Param_ConditionCheck);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TryPerformAbilitiesOfClass(Z_Param_AbilitiesToSet,Z_Param_ConditionCheck);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTempestBaseAbilityManagerComponent::execTryPerformAbilityOfClass)
	{
		P_GET_OBJECT(UClass,Z_Param_AbilityToSet);
		P_GET_UBOOL(Z_Param_ConditionCheck);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TryPerformAbilityOfClass(Z_Param_AbilityToSet,Z_Param_ConditionCheck);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTempestBaseAbilityManagerComponent::execPerformAbilityOfClass)
	{
		P_GET_OBJECT(UClass,Z_Param_AbilityToSet);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PerformAbilityOfClass(Z_Param_AbilityToSet);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTempestBaseAbilityManagerComponent::execInitializeAbilitySystemComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeAbilitySystemComponent_Implementation();
		P_NATIVE_END;
	}
	struct TempestBaseAbilityManagerComponent_eventEndAbilityOfClass_Parms
	{
		TSubclassOf<UTempestBaseAbilityObject>  AbilityToEnd;
		bool bInterrupt;
	};
	static FName NAME_UTempestBaseAbilityManagerComponent_EndAbilityOfClass = FName(TEXT("EndAbilityOfClass"));
	void UTempestBaseAbilityManagerComponent::EndAbilityOfClass(TSubclassOf<UTempestBaseAbilityObject>  AbilityToEnd, bool bInterrupt)
	{
		TempestBaseAbilityManagerComponent_eventEndAbilityOfClass_Parms Parms;
		Parms.AbilityToEnd=AbilityToEnd;
		Parms.bInterrupt=bInterrupt ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UTempestBaseAbilityManagerComponent_EndAbilityOfClass),&Parms);
	}
	static FName NAME_UTempestBaseAbilityManagerComponent_InitializeAbilitySystemComponent = FName(TEXT("InitializeAbilitySystemComponent"));
	void UTempestBaseAbilityManagerComponent::InitializeAbilitySystemComponent()
	{
		ProcessEvent(FindFunctionChecked(NAME_UTempestBaseAbilityManagerComponent_InitializeAbilitySystemComponent),NULL);
	}
	static FName NAME_UTempestBaseAbilityManagerComponent_ResetAbilityComponent = FName(TEXT("ResetAbilityComponent"));
	void UTempestBaseAbilityManagerComponent::ResetAbilityComponent()
	{
		ProcessEvent(FindFunctionChecked(NAME_UTempestBaseAbilityManagerComponent_ResetAbilityComponent),NULL);
	}
	void UTempestBaseAbilityManagerComponent::StaticRegisterNativesUTempestBaseAbilityManagerComponent()
	{
		UClass* Class = UTempestBaseAbilityManagerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearAbilityComponent", &UTempestBaseAbilityManagerComponent::execClearAbilityComponent },
			{ "ConstructAbilityOfClass", &UTempestBaseAbilityManagerComponent::execConstructAbilityOfClass },
			{ "GetAbilityOfClass", &UTempestBaseAbilityManagerComponent::execGetAbilityOfClass },
			{ "GetAbilityOfGameplayTag", &UTempestBaseAbilityManagerComponent::execGetAbilityOfGameplayTag },
			{ "GetActivatableAbilities", &UTempestBaseAbilityManagerComponent::execGetActivatableAbilities },
			{ "GetCanPerformAbilityOfClass", &UTempestBaseAbilityManagerComponent::execGetCanPerformAbilityOfClass },
			{ "GetChildAbilityOfClass", &UTempestBaseAbilityManagerComponent::execGetChildAbilityOfClass },
			{ "GetCurrentActiveAbility", &UTempestBaseAbilityManagerComponent::execGetCurrentActiveAbility },
			{ "GetPassiveAbilities", &UTempestBaseAbilityManagerComponent::execGetPassiveAbilities },
			{ "InitializeAbilitySystemComponent", &UTempestBaseAbilityManagerComponent::execInitializeAbilitySystemComponent },
			{ "PerformAbilityOfClass", &UTempestBaseAbilityManagerComponent::execPerformAbilityOfClass },
			{ "RemoveFromPassiveAbilities", &UTempestBaseAbilityManagerComponent::execRemoveFromPassiveAbilities },
			{ "SetAsPassiveAbility", &UTempestBaseAbilityManagerComponent::execSetAsPassiveAbility },
			{ "SetCurrentActiveAbility", &UTempestBaseAbilityManagerComponent::execSetCurrentActiveAbility },
			{ "TryPerformAbilitiesOfClass", &UTempestBaseAbilityManagerComponent::execTryPerformAbilitiesOfClass },
			{ "TryPerformAbilityOfClass", &UTempestBaseAbilityManagerComponent::execTryPerformAbilityOfClass },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_ClearAbilityComponent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_ClearAbilityComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Clear" },
		{ "Comment", "/* Clears All The Arrays Associated For Finding and Setting Abilities*/" },
		{ "ModuleRelativePath", "Public/Components/TempestBaseAbilityManagerComponent.h" },
		{ "ToolTip", "Clears All The Arrays Associated For Finding and Setting Abilities" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_ClearAbilityComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestBaseAbilityManagerComponent, nullptr, "ClearAbilityComponent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_ClearAbilityComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_ClearAbilityComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_ClearAbilityComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_ClearAbilityComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_ConstructAbilityOfClass_Statics
	{
		struct TempestBaseAbilityManagerComponent_eventConstructAbilityOfClass_Parms
		{
			TSubclassOf<UTempestBaseAbilityObject>  AbilityToConstruct;
			UTempestBaseAbilityObject* ConstructedAbility;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_AbilityToConstruct;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ConstructedAbility;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_ConstructAbilityOfClass_Statics::NewProp_AbilityToConstruct = { "AbilityToConstruct", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestBaseAbilityManagerComponent_eventConstructAbilityOfClass_Parms, AbilityToConstruct), Z_Construct_UClass_UClass, Z_Construct_UClass_UTempestBaseAbilityObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_ConstructAbilityOfClass_Statics::NewProp_ConstructedAbility = { "ConstructedAbility", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestBaseAbilityManagerComponent_eventConstructAbilityOfClass_Parms, ConstructedAbility), Z_Construct_UClass_UTempestBaseAbilityObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_ConstructAbilityOfClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_ConstructAbilityOfClass_Statics::NewProp_AbilityToConstruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_ConstructAbilityOfClass_Statics::NewProp_ConstructedAbility,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_ConstructAbilityOfClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Construction" },
		{ "Comment", "/* Construction */" },
		{ "ModuleRelativePath", "Public/Components/TempestBaseAbilityManagerComponent.h" },
		{ "ToolTip", "Construction" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_ConstructAbilityOfClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestBaseAbilityManagerComponent, nullptr, "ConstructAbilityOfClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_ConstructAbilityOfClass_Statics::TempestBaseAbilityManagerComponent_eventConstructAbilityOfClass_Parms), Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_ConstructAbilityOfClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_ConstructAbilityOfClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_ConstructAbilityOfClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_ConstructAbilityOfClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_ConstructAbilityOfClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_ConstructAbilityOfClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_EndAbilityOfClass_Statics
	{
		static const UECodeGen_Private::FClassPropertyParams NewProp_AbilityToEnd;
		static void NewProp_bInterrupt_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInterrupt;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_EndAbilityOfClass_Statics::NewProp_AbilityToEnd = { "AbilityToEnd", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestBaseAbilityManagerComponent_eventEndAbilityOfClass_Parms, AbilityToEnd), Z_Construct_UClass_UClass, Z_Construct_UClass_UTempestBaseAbilityObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_EndAbilityOfClass_Statics::NewProp_bInterrupt_SetBit(void* Obj)
	{
		((TempestBaseAbilityManagerComponent_eventEndAbilityOfClass_Parms*)Obj)->bInterrupt = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_EndAbilityOfClass_Statics::NewProp_bInterrupt = { "bInterrupt", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TempestBaseAbilityManagerComponent_eventEndAbilityOfClass_Parms), &Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_EndAbilityOfClass_Statics::NewProp_bInterrupt_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_EndAbilityOfClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_EndAbilityOfClass_Statics::NewProp_AbilityToEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_EndAbilityOfClass_Statics::NewProp_bInterrupt,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_EndAbilityOfClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Performing Ability" },
		{ "ModuleRelativePath", "Public/Components/TempestBaseAbilityManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_EndAbilityOfClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestBaseAbilityManagerComponent, nullptr, "EndAbilityOfClass", nullptr, nullptr, sizeof(TempestBaseAbilityManagerComponent_eventEndAbilityOfClass_Parms), Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_EndAbilityOfClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_EndAbilityOfClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_EndAbilityOfClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_EndAbilityOfClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_EndAbilityOfClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_EndAbilityOfClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetAbilityOfClass_Statics
	{
		struct TempestBaseAbilityManagerComponent_eventGetAbilityOfClass_Parms
		{
			TSubclassOf<UTempestBaseAbilityObject>  AbilityToSearch;
			UTempestBaseAbilityObject* FoundAbility;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_AbilityToSearch;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FoundAbility;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetAbilityOfClass_Statics::NewProp_AbilityToSearch = { "AbilityToSearch", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestBaseAbilityManagerComponent_eventGetAbilityOfClass_Parms, AbilityToSearch), Z_Construct_UClass_UClass, Z_Construct_UClass_UTempestBaseAbilityObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetAbilityOfClass_Statics::NewProp_FoundAbility = { "FoundAbility", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestBaseAbilityManagerComponent_eventGetAbilityOfClass_Parms, FoundAbility), Z_Construct_UClass_UTempestBaseAbilityObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetAbilityOfClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetAbilityOfClass_Statics::NewProp_AbilityToSearch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetAbilityOfClass_Statics::NewProp_FoundAbility,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetAbilityOfClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Getters" },
		{ "ModuleRelativePath", "Public/Components/TempestBaseAbilityManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetAbilityOfClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestBaseAbilityManagerComponent, nullptr, "GetAbilityOfClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetAbilityOfClass_Statics::TempestBaseAbilityManagerComponent_eventGetAbilityOfClass_Parms), Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetAbilityOfClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetAbilityOfClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetAbilityOfClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetAbilityOfClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetAbilityOfClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetAbilityOfClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetAbilityOfGameplayTag_Statics
	{
		struct TempestBaseAbilityManagerComponent_eventGetAbilityOfGameplayTag_Parms
		{
			FGameplayTag AbilityGameplayTag;
			UTempestBaseAbilityObject* ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityGameplayTag;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetAbilityOfGameplayTag_Statics::NewProp_AbilityGameplayTag = { "AbilityGameplayTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestBaseAbilityManagerComponent_eventGetAbilityOfGameplayTag_Parms, AbilityGameplayTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetAbilityOfGameplayTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestBaseAbilityManagerComponent_eventGetAbilityOfGameplayTag_Parms, ReturnValue), Z_Construct_UClass_UTempestBaseAbilityObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetAbilityOfGameplayTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetAbilityOfGameplayTag_Statics::NewProp_AbilityGameplayTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetAbilityOfGameplayTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetAbilityOfGameplayTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Getters" },
		{ "ModuleRelativePath", "Public/Components/TempestBaseAbilityManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetAbilityOfGameplayTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestBaseAbilityManagerComponent, nullptr, "GetAbilityOfGameplayTag", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetAbilityOfGameplayTag_Statics::TempestBaseAbilityManagerComponent_eventGetAbilityOfGameplayTag_Parms), Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetAbilityOfGameplayTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetAbilityOfGameplayTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetAbilityOfGameplayTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetAbilityOfGameplayTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetAbilityOfGameplayTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetAbilityOfGameplayTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetActivatableAbilities_Statics
	{
		struct TempestBaseAbilityManagerComponent_eventGetActivatableAbilities_Parms
		{
			TArray<UTempestBaseAbilityObject*> ActivatableAbilitiesArray;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActivatableAbilitiesArray_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActivatableAbilitiesArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetActivatableAbilities_Statics::NewProp_ActivatableAbilitiesArray_Inner = { "ActivatableAbilitiesArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UTempestBaseAbilityObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetActivatableAbilities_Statics::NewProp_ActivatableAbilitiesArray = { "ActivatableAbilitiesArray", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestBaseAbilityManagerComponent_eventGetActivatableAbilities_Parms, ActivatableAbilitiesArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetActivatableAbilities_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetActivatableAbilities_Statics::NewProp_ActivatableAbilitiesArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetActivatableAbilities_Statics::NewProp_ActivatableAbilitiesArray,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetActivatableAbilities_Statics::Function_MetaDataParams[] = {
		{ "Category", "Getters" },
		{ "ModuleRelativePath", "Public/Components/TempestBaseAbilityManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetActivatableAbilities_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestBaseAbilityManagerComponent, nullptr, "GetActivatableAbilities", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetActivatableAbilities_Statics::TempestBaseAbilityManagerComponent_eventGetActivatableAbilities_Parms), Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetActivatableAbilities_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetActivatableAbilities_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetActivatableAbilities_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetActivatableAbilities_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetActivatableAbilities()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetActivatableAbilities_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetCanPerformAbilityOfClass_Statics
	{
		struct TempestBaseAbilityManagerComponent_eventGetCanPerformAbilityOfClass_Parms
		{
			TSubclassOf<UTempestBaseAbilityObject>  AbilityToSearch;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_AbilityToSearch;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetCanPerformAbilityOfClass_Statics::NewProp_AbilityToSearch = { "AbilityToSearch", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestBaseAbilityManagerComponent_eventGetCanPerformAbilityOfClass_Parms, AbilityToSearch), Z_Construct_UClass_UClass, Z_Construct_UClass_UTempestBaseAbilityObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetCanPerformAbilityOfClass_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TempestBaseAbilityManagerComponent_eventGetCanPerformAbilityOfClass_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetCanPerformAbilityOfClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TempestBaseAbilityManagerComponent_eventGetCanPerformAbilityOfClass_Parms), &Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetCanPerformAbilityOfClass_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetCanPerformAbilityOfClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetCanPerformAbilityOfClass_Statics::NewProp_AbilityToSearch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetCanPerformAbilityOfClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetCanPerformAbilityOfClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Getters" },
		{ "ModuleRelativePath", "Public/Components/TempestBaseAbilityManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetCanPerformAbilityOfClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestBaseAbilityManagerComponent, nullptr, "GetCanPerformAbilityOfClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetCanPerformAbilityOfClass_Statics::TempestBaseAbilityManagerComponent_eventGetCanPerformAbilityOfClass_Parms), Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetCanPerformAbilityOfClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetCanPerformAbilityOfClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetCanPerformAbilityOfClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetCanPerformAbilityOfClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetCanPerformAbilityOfClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetCanPerformAbilityOfClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetChildAbilityOfClass_Statics
	{
		struct TempestBaseAbilityManagerComponent_eventGetChildAbilityOfClass_Parms
		{
			TSubclassOf<UTempestBaseAbilityObject>  AbilityToSearch;
			UTempestBaseAbilityObject* FoundAbility;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_AbilityToSearch;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FoundAbility;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetChildAbilityOfClass_Statics::NewProp_AbilityToSearch = { "AbilityToSearch", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestBaseAbilityManagerComponent_eventGetChildAbilityOfClass_Parms, AbilityToSearch), Z_Construct_UClass_UClass, Z_Construct_UClass_UTempestBaseAbilityObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetChildAbilityOfClass_Statics::NewProp_FoundAbility = { "FoundAbility", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestBaseAbilityManagerComponent_eventGetChildAbilityOfClass_Parms, FoundAbility), Z_Construct_UClass_UTempestBaseAbilityObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetChildAbilityOfClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetChildAbilityOfClass_Statics::NewProp_AbilityToSearch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetChildAbilityOfClass_Statics::NewProp_FoundAbility,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetChildAbilityOfClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Getters" },
		{ "ModuleRelativePath", "Public/Components/TempestBaseAbilityManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetChildAbilityOfClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestBaseAbilityManagerComponent, nullptr, "GetChildAbilityOfClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetChildAbilityOfClass_Statics::TempestBaseAbilityManagerComponent_eventGetChildAbilityOfClass_Parms), Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetChildAbilityOfClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetChildAbilityOfClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetChildAbilityOfClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetChildAbilityOfClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetChildAbilityOfClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetChildAbilityOfClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetCurrentActiveAbility_Statics
	{
		struct TempestBaseAbilityManagerComponent_eventGetCurrentActiveAbility_Parms
		{
			UTempestBaseAbilityObject* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetCurrentActiveAbility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestBaseAbilityManagerComponent_eventGetCurrentActiveAbility_Parms, ReturnValue), Z_Construct_UClass_UTempestBaseAbilityObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetCurrentActiveAbility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetCurrentActiveAbility_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetCurrentActiveAbility_Statics::Function_MetaDataParams[] = {
		{ "Category", "Getters" },
		{ "Comment", "/* Getters */" },
		{ "ModuleRelativePath", "Public/Components/TempestBaseAbilityManagerComponent.h" },
		{ "ToolTip", "Getters" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetCurrentActiveAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestBaseAbilityManagerComponent, nullptr, "GetCurrentActiveAbility", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetCurrentActiveAbility_Statics::TempestBaseAbilityManagerComponent_eventGetCurrentActiveAbility_Parms), Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetCurrentActiveAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetCurrentActiveAbility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetCurrentActiveAbility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetCurrentActiveAbility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetCurrentActiveAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetCurrentActiveAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetPassiveAbilities_Statics
	{
		struct TempestBaseAbilityManagerComponent_eventGetPassiveAbilities_Parms
		{
			TArray<UTempestBaseAbilityObject*> PassiveAbilitiesArray;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PassiveAbilitiesArray_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PassiveAbilitiesArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetPassiveAbilities_Statics::NewProp_PassiveAbilitiesArray_Inner = { "PassiveAbilitiesArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UTempestBaseAbilityObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetPassiveAbilities_Statics::NewProp_PassiveAbilitiesArray = { "PassiveAbilitiesArray", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestBaseAbilityManagerComponent_eventGetPassiveAbilities_Parms, PassiveAbilitiesArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetPassiveAbilities_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetPassiveAbilities_Statics::NewProp_PassiveAbilitiesArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetPassiveAbilities_Statics::NewProp_PassiveAbilitiesArray,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetPassiveAbilities_Statics::Function_MetaDataParams[] = {
		{ "Category", "Getters" },
		{ "ModuleRelativePath", "Public/Components/TempestBaseAbilityManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetPassiveAbilities_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestBaseAbilityManagerComponent, nullptr, "GetPassiveAbilities", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetPassiveAbilities_Statics::TempestBaseAbilityManagerComponent_eventGetPassiveAbilities_Parms), Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetPassiveAbilities_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetPassiveAbilities_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetPassiveAbilities_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetPassiveAbilities_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetPassiveAbilities()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetPassiveAbilities_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_InitializeAbilitySystemComponent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_InitializeAbilitySystemComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Initialization Functions" },
		{ "ModuleRelativePath", "Public/Components/TempestBaseAbilityManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_InitializeAbilitySystemComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestBaseAbilityManagerComponent, nullptr, "InitializeAbilitySystemComponent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_InitializeAbilitySystemComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_InitializeAbilitySystemComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_InitializeAbilitySystemComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_InitializeAbilitySystemComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_PerformAbilityOfClass_Statics
	{
		struct TempestBaseAbilityManagerComponent_eventPerformAbilityOfClass_Parms
		{
			TSubclassOf<UTempestBaseAbilityObject>  AbilityToSet;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_AbilityToSet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_PerformAbilityOfClass_Statics::NewProp_AbilityToSet = { "AbilityToSet", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestBaseAbilityManagerComponent_eventPerformAbilityOfClass_Parms, AbilityToSet), Z_Construct_UClass_UClass, Z_Construct_UClass_UTempestBaseAbilityObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_PerformAbilityOfClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_PerformAbilityOfClass_Statics::NewProp_AbilityToSet,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_PerformAbilityOfClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Performing Ability" },
		{ "ModuleRelativePath", "Public/Components/TempestBaseAbilityManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_PerformAbilityOfClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestBaseAbilityManagerComponent, nullptr, "PerformAbilityOfClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_PerformAbilityOfClass_Statics::TempestBaseAbilityManagerComponent_eventPerformAbilityOfClass_Parms), Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_PerformAbilityOfClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_PerformAbilityOfClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_PerformAbilityOfClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_PerformAbilityOfClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_PerformAbilityOfClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_PerformAbilityOfClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_RemoveFromPassiveAbilities_Statics
	{
		struct TempestBaseAbilityManagerComponent_eventRemoveFromPassiveAbilities_Parms
		{
			UTempestBaseAbilityObject* AbilityToRemove;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilityToRemove;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_RemoveFromPassiveAbilities_Statics::NewProp_AbilityToRemove = { "AbilityToRemove", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestBaseAbilityManagerComponent_eventRemoveFromPassiveAbilities_Parms, AbilityToRemove), Z_Construct_UClass_UTempestBaseAbilityObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_RemoveFromPassiveAbilities_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_RemoveFromPassiveAbilities_Statics::NewProp_AbilityToRemove,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_RemoveFromPassiveAbilities_Statics::Function_MetaDataParams[] = {
		{ "Category", "Performing Ability" },
		{ "ModuleRelativePath", "Public/Components/TempestBaseAbilityManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_RemoveFromPassiveAbilities_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestBaseAbilityManagerComponent, nullptr, "RemoveFromPassiveAbilities", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_RemoveFromPassiveAbilities_Statics::TempestBaseAbilityManagerComponent_eventRemoveFromPassiveAbilities_Parms), Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_RemoveFromPassiveAbilities_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_RemoveFromPassiveAbilities_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_RemoveFromPassiveAbilities_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_RemoveFromPassiveAbilities_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_RemoveFromPassiveAbilities()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_RemoveFromPassiveAbilities_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_ResetAbilityComponent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_ResetAbilityComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Performing Ability" },
		{ "ModuleRelativePath", "Public/Components/TempestBaseAbilityManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_ResetAbilityComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestBaseAbilityManagerComponent, nullptr, "ResetAbilityComponent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_ResetAbilityComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_ResetAbilityComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_ResetAbilityComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_ResetAbilityComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_SetAsPassiveAbility_Statics
	{
		struct TempestBaseAbilityManagerComponent_eventSetAsPassiveAbility_Parms
		{
			UTempestBaseAbilityObject* NewPassiveAbility;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewPassiveAbility;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_SetAsPassiveAbility_Statics::NewProp_NewPassiveAbility = { "NewPassiveAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestBaseAbilityManagerComponent_eventSetAsPassiveAbility_Parms, NewPassiveAbility), Z_Construct_UClass_UTempestBaseAbilityObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_SetAsPassiveAbility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_SetAsPassiveAbility_Statics::NewProp_NewPassiveAbility,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_SetAsPassiveAbility_Statics::Function_MetaDataParams[] = {
		{ "Category", "Performing Ability" },
		{ "ModuleRelativePath", "Public/Components/TempestBaseAbilityManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_SetAsPassiveAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestBaseAbilityManagerComponent, nullptr, "SetAsPassiveAbility", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_SetAsPassiveAbility_Statics::TempestBaseAbilityManagerComponent_eventSetAsPassiveAbility_Parms), Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_SetAsPassiveAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_SetAsPassiveAbility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_SetAsPassiveAbility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_SetAsPassiveAbility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_SetAsPassiveAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_SetAsPassiveAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_SetCurrentActiveAbility_Statics
	{
		struct TempestBaseAbilityManagerComponent_eventSetCurrentActiveAbility_Parms
		{
			UTempestBaseAbilityObject* NewCurrentActiveAbility;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewCurrentActiveAbility;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_SetCurrentActiveAbility_Statics::NewProp_NewCurrentActiveAbility = { "NewCurrentActiveAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestBaseAbilityManagerComponent_eventSetCurrentActiveAbility_Parms, NewCurrentActiveAbility), Z_Construct_UClass_UTempestBaseAbilityObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_SetCurrentActiveAbility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_SetCurrentActiveAbility_Statics::NewProp_NewCurrentActiveAbility,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_SetCurrentActiveAbility_Statics::Function_MetaDataParams[] = {
		{ "Category", "Performing Ability" },
		{ "ModuleRelativePath", "Public/Components/TempestBaseAbilityManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_SetCurrentActiveAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestBaseAbilityManagerComponent, nullptr, "SetCurrentActiveAbility", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_SetCurrentActiveAbility_Statics::TempestBaseAbilityManagerComponent_eventSetCurrentActiveAbility_Parms), Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_SetCurrentActiveAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_SetCurrentActiveAbility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_SetCurrentActiveAbility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_SetCurrentActiveAbility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_SetCurrentActiveAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_SetCurrentActiveAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_TryPerformAbilitiesOfClass_Statics
	{
		struct TempestBaseAbilityManagerComponent_eventTryPerformAbilitiesOfClass_Parms
		{
			TArray<TSubclassOf<UTempestBaseAbilityObject> > AbilitiesToSet;
			bool ConditionCheck;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_AbilitiesToSet_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AbilitiesToSet;
		static void NewProp_ConditionCheck_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ConditionCheck;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_TryPerformAbilitiesOfClass_Statics::NewProp_AbilitiesToSet_Inner = { "AbilitiesToSet", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UTempestBaseAbilityObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_TryPerformAbilitiesOfClass_Statics::NewProp_AbilitiesToSet = { "AbilitiesToSet", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestBaseAbilityManagerComponent_eventTryPerformAbilitiesOfClass_Parms, AbilitiesToSet), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_TryPerformAbilitiesOfClass_Statics::NewProp_ConditionCheck_SetBit(void* Obj)
	{
		((TempestBaseAbilityManagerComponent_eventTryPerformAbilitiesOfClass_Parms*)Obj)->ConditionCheck = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_TryPerformAbilitiesOfClass_Statics::NewProp_ConditionCheck = { "ConditionCheck", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TempestBaseAbilityManagerComponent_eventTryPerformAbilitiesOfClass_Parms), &Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_TryPerformAbilitiesOfClass_Statics::NewProp_ConditionCheck_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_TryPerformAbilitiesOfClass_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TempestBaseAbilityManagerComponent_eventTryPerformAbilitiesOfClass_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_TryPerformAbilitiesOfClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TempestBaseAbilityManagerComponent_eventTryPerformAbilitiesOfClass_Parms), &Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_TryPerformAbilitiesOfClass_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_TryPerformAbilitiesOfClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_TryPerformAbilitiesOfClass_Statics::NewProp_AbilitiesToSet_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_TryPerformAbilitiesOfClass_Statics::NewProp_AbilitiesToSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_TryPerformAbilitiesOfClass_Statics::NewProp_ConditionCheck,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_TryPerformAbilitiesOfClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_TryPerformAbilitiesOfClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Performing Ability" },
		{ "CPP_Default_ConditionCheck", "true" },
		{ "ModuleRelativePath", "Public/Components/TempestBaseAbilityManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_TryPerformAbilitiesOfClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestBaseAbilityManagerComponent, nullptr, "TryPerformAbilitiesOfClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_TryPerformAbilitiesOfClass_Statics::TempestBaseAbilityManagerComponent_eventTryPerformAbilitiesOfClass_Parms), Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_TryPerformAbilitiesOfClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_TryPerformAbilitiesOfClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_TryPerformAbilitiesOfClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_TryPerformAbilitiesOfClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_TryPerformAbilitiesOfClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_TryPerformAbilitiesOfClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_TryPerformAbilityOfClass_Statics
	{
		struct TempestBaseAbilityManagerComponent_eventTryPerformAbilityOfClass_Parms
		{
			TSubclassOf<UTempestBaseAbilityObject>  AbilityToSet;
			bool ConditionCheck;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_AbilityToSet;
		static void NewProp_ConditionCheck_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ConditionCheck;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_TryPerformAbilityOfClass_Statics::NewProp_AbilityToSet = { "AbilityToSet", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestBaseAbilityManagerComponent_eventTryPerformAbilityOfClass_Parms, AbilityToSet), Z_Construct_UClass_UClass, Z_Construct_UClass_UTempestBaseAbilityObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_TryPerformAbilityOfClass_Statics::NewProp_ConditionCheck_SetBit(void* Obj)
	{
		((TempestBaseAbilityManagerComponent_eventTryPerformAbilityOfClass_Parms*)Obj)->ConditionCheck = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_TryPerformAbilityOfClass_Statics::NewProp_ConditionCheck = { "ConditionCheck", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TempestBaseAbilityManagerComponent_eventTryPerformAbilityOfClass_Parms), &Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_TryPerformAbilityOfClass_Statics::NewProp_ConditionCheck_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_TryPerformAbilityOfClass_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TempestBaseAbilityManagerComponent_eventTryPerformAbilityOfClass_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_TryPerformAbilityOfClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TempestBaseAbilityManagerComponent_eventTryPerformAbilityOfClass_Parms), &Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_TryPerformAbilityOfClass_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_TryPerformAbilityOfClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_TryPerformAbilityOfClass_Statics::NewProp_AbilityToSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_TryPerformAbilityOfClass_Statics::NewProp_ConditionCheck,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_TryPerformAbilityOfClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_TryPerformAbilityOfClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Performing Ability" },
		{ "CPP_Default_ConditionCheck", "true" },
		{ "ModuleRelativePath", "Public/Components/TempestBaseAbilityManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_TryPerformAbilityOfClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestBaseAbilityManagerComponent, nullptr, "TryPerformAbilityOfClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_TryPerformAbilityOfClass_Statics::TempestBaseAbilityManagerComponent_eventTryPerformAbilityOfClass_Parms), Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_TryPerformAbilityOfClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_TryPerformAbilityOfClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_TryPerformAbilityOfClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_TryPerformAbilityOfClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_TryPerformAbilityOfClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_TryPerformAbilityOfClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTempestBaseAbilityManagerComponent);
	UClass* Z_Construct_UClass_UTempestBaseAbilityManagerComponent_NoRegister()
	{
		return UTempestBaseAbilityManagerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTempestBaseAbilityManagerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnUpdatedActiveAbility_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUpdatedActiveAbility;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentActiveAbility_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentActiveAbility;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PassiveAbilities_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PassiveAbilities_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PassiveAbilities;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActivatableAbilities_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActivatableAbilities_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActivatableAbilities;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTempestBaseAbilityManagerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TempestCombatFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTempestBaseAbilityManagerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_ClearAbilityComponent, "ClearAbilityComponent" }, // 874592716
		{ &Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_ConstructAbilityOfClass, "ConstructAbilityOfClass" }, // 2960710374
		{ &Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_EndAbilityOfClass, "EndAbilityOfClass" }, // 2991098432
		{ &Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetAbilityOfClass, "GetAbilityOfClass" }, // 304698921
		{ &Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetAbilityOfGameplayTag, "GetAbilityOfGameplayTag" }, // 3666701792
		{ &Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetActivatableAbilities, "GetActivatableAbilities" }, // 442325352
		{ &Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetCanPerformAbilityOfClass, "GetCanPerformAbilityOfClass" }, // 3207963869
		{ &Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetChildAbilityOfClass, "GetChildAbilityOfClass" }, // 2499708618
		{ &Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetCurrentActiveAbility, "GetCurrentActiveAbility" }, // 3255374068
		{ &Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_GetPassiveAbilities, "GetPassiveAbilities" }, // 1256015435
		{ &Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_InitializeAbilitySystemComponent, "InitializeAbilitySystemComponent" }, // 2734606081
		{ &Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_PerformAbilityOfClass, "PerformAbilityOfClass" }, // 2546474462
		{ &Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_RemoveFromPassiveAbilities, "RemoveFromPassiveAbilities" }, // 2769272196
		{ &Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_ResetAbilityComponent, "ResetAbilityComponent" }, // 3740403065
		{ &Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_SetAsPassiveAbility, "SetAsPassiveAbility" }, // 328512326
		{ &Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_SetCurrentActiveAbility, "SetCurrentActiveAbility" }, // 279122271
		{ &Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_TryPerformAbilitiesOfClass, "TryPerformAbilitiesOfClass" }, // 2222007888
		{ &Z_Construct_UFunction_UTempestBaseAbilityManagerComponent_TryPerformAbilityOfClass, "TryPerformAbilityOfClass" }, // 2481478266
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTempestBaseAbilityManagerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/TempestBaseAbilityManagerComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/TempestBaseAbilityManagerComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTempestBaseAbilityManagerComponent_Statics::NewProp_OnUpdatedActiveAbility_MetaData[] = {
		{ "Category", "Base Dispatchers" },
		{ "ModuleRelativePath", "Public/Components/TempestBaseAbilityManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTempestBaseAbilityManagerComponent_Statics::NewProp_OnUpdatedActiveAbility = { "OnUpdatedActiveAbility", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTempestBaseAbilityManagerComponent, OnUpdatedActiveAbility), Z_Construct_UDelegateFunction_TempestCombatFramework_OnUpdatedActiveAbility__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTempestBaseAbilityManagerComponent_Statics::NewProp_OnUpdatedActiveAbility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTempestBaseAbilityManagerComponent_Statics::NewProp_OnUpdatedActiveAbility_MetaData)) }; // 3160471989
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTempestBaseAbilityManagerComponent_Statics::NewProp_CurrentActiveAbility_MetaData[] = {
		{ "Category", "Base Variables" },
		{ "ModuleRelativePath", "Public/Components/TempestBaseAbilityManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTempestBaseAbilityManagerComponent_Statics::NewProp_CurrentActiveAbility = { "CurrentActiveAbility", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTempestBaseAbilityManagerComponent, CurrentActiveAbility), Z_Construct_UClass_UTempestBaseAbilityObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTempestBaseAbilityManagerComponent_Statics::NewProp_CurrentActiveAbility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTempestBaseAbilityManagerComponent_Statics::NewProp_CurrentActiveAbility_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTempestBaseAbilityManagerComponent_Statics::NewProp_PassiveAbilities_Inner = { "PassiveAbilities", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UTempestBaseAbilityObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTempestBaseAbilityManagerComponent_Statics::NewProp_PassiveAbilities_MetaData[] = {
		{ "Category", "Base Variables" },
		{ "ModuleRelativePath", "Public/Components/TempestBaseAbilityManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTempestBaseAbilityManagerComponent_Statics::NewProp_PassiveAbilities = { "PassiveAbilities", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTempestBaseAbilityManagerComponent, PassiveAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTempestBaseAbilityManagerComponent_Statics::NewProp_PassiveAbilities_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTempestBaseAbilityManagerComponent_Statics::NewProp_PassiveAbilities_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTempestBaseAbilityManagerComponent_Statics::NewProp_ActivatableAbilities_Inner = { "ActivatableAbilities", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UTempestBaseAbilityObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTempestBaseAbilityManagerComponent_Statics::NewProp_ActivatableAbilities_MetaData[] = {
		{ "Category", "Base Variables" },
		{ "ModuleRelativePath", "Public/Components/TempestBaseAbilityManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTempestBaseAbilityManagerComponent_Statics::NewProp_ActivatableAbilities = { "ActivatableAbilities", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTempestBaseAbilityManagerComponent, ActivatableAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTempestBaseAbilityManagerComponent_Statics::NewProp_ActivatableAbilities_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTempestBaseAbilityManagerComponent_Statics::NewProp_ActivatableAbilities_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTempestBaseAbilityManagerComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTempestBaseAbilityManagerComponent_Statics::NewProp_OnUpdatedActiveAbility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTempestBaseAbilityManagerComponent_Statics::NewProp_CurrentActiveAbility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTempestBaseAbilityManagerComponent_Statics::NewProp_PassiveAbilities_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTempestBaseAbilityManagerComponent_Statics::NewProp_PassiveAbilities,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTempestBaseAbilityManagerComponent_Statics::NewProp_ActivatableAbilities_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTempestBaseAbilityManagerComponent_Statics::NewProp_ActivatableAbilities,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTempestBaseAbilityManagerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTempestBaseAbilityManagerComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTempestBaseAbilityManagerComponent_Statics::ClassParams = {
		&UTempestBaseAbilityManagerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTempestBaseAbilityManagerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTempestBaseAbilityManagerComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTempestBaseAbilityManagerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTempestBaseAbilityManagerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTempestBaseAbilityManagerComponent()
	{
		if (!Z_Registration_Info_UClass_UTempestBaseAbilityManagerComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTempestBaseAbilityManagerComponent.OuterSingleton, Z_Construct_UClass_UTempestBaseAbilityManagerComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTempestBaseAbilityManagerComponent.OuterSingleton;
	}
	template<> TEMPESTCOMBATFRAMEWORK_API UClass* StaticClass<UTempestBaseAbilityManagerComponent>()
	{
		return UTempestBaseAbilityManagerComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTempestBaseAbilityManagerComponent);
	UTempestBaseAbilityManagerComponent::~UTempestBaseAbilityManagerComponent() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Components_TempestBaseAbilityManagerComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Components_TempestBaseAbilityManagerComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTempestBaseAbilityManagerComponent, UTempestBaseAbilityManagerComponent::StaticClass, TEXT("UTempestBaseAbilityManagerComponent"), &Z_Registration_Info_UClass_UTempestBaseAbilityManagerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTempestBaseAbilityManagerComponent), 430297350U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Components_TempestBaseAbilityManagerComponent_h_3949502660(TEXT("/Script/TempestCombatFramework"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Components_TempestBaseAbilityManagerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Components_TempestBaseAbilityManagerComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
