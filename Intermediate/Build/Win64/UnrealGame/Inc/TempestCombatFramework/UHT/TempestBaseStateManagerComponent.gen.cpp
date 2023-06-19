// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TempestCombatFramework/Public/Components/TempestBaseStateManagerComponent.h"
#include "GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTempestBaseStateManagerComponent() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	TEMPESTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UTempestBaseStateManagerComponent();
	TEMPESTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UTempestBaseStateManagerComponent_NoRegister();
	TEMPESTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UTempestBaseStateObject_NoRegister();
	TEMPESTCOMBATFRAMEWORK_API UFunction* Z_Construct_UDelegateFunction_TempestCombatFramework_OnUpdatedActiveState__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_TempestCombatFramework();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_TempestCombatFramework_OnUpdatedActiveState__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TempestCombatFramework_OnUpdatedActiveState__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/TempestBaseStateManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TempestCombatFramework_OnUpdatedActiveState__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TempestCombatFramework, nullptr, "OnUpdatedActiveState__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TempestCombatFramework_OnUpdatedActiveState__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TempestCombatFramework_OnUpdatedActiveState__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TempestCombatFramework_OnUpdatedActiveState__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TempestCombatFramework_OnUpdatedActiveState__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UTempestBaseStateManagerComponent::execClearStatesComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearStatesComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTempestBaseStateManagerComponent::execConstructStateOfClass)
	{
		P_GET_OBJECT(UClass,Z_Param_StateToConstruct);
		P_GET_OBJECT_REF(UTempestBaseStateObject,Z_Param_Out_ConstructedState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ConstructStateOfClass(Z_Param_StateToConstruct,Z_Param_Out_ConstructedState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTempestBaseStateManagerComponent::execGetCanSetQueuedStateOfClass)
	{
		P_GET_OBJECT(UClass,Z_Param_StateToSearch);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCanSetQueuedStateOfClass(Z_Param_StateToSearch);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTempestBaseStateManagerComponent::execGetQueuedStates)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<TSubclassOf<UTempestBaseStateObject> >*)Z_Param__Result=P_THIS->GetQueuedStates();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTempestBaseStateManagerComponent::execGetActivatableStates)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UTempestBaseStateObject*>*)Z_Param__Result=P_THIS->GetActivatableStates();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTempestBaseStateManagerComponent::execGetStateOfGameplayTag)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_StateGameplayTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTempestBaseStateObject**)Z_Param__Result=P_THIS->GetStateOfGameplayTag(Z_Param_StateGameplayTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTempestBaseStateManagerComponent::execGetCanPerformStateOfClass)
	{
		P_GET_OBJECT(UClass,Z_Param_ClassToLookFor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCanPerformStateOfClass(Z_Param_ClassToLookFor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTempestBaseStateManagerComponent::execGetChildStateOfClass)
	{
		P_GET_OBJECT(UClass,Z_Param_StateToSearch);
		P_GET_OBJECT_REF(UTempestBaseStateObject,Z_Param_Out_FoundState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetChildStateOfClass(Z_Param_StateToSearch,Z_Param_Out_FoundState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTempestBaseStateManagerComponent::execGetStateOfClass)
	{
		P_GET_OBJECT(UClass,Z_Param_StateToSearch);
		P_GET_OBJECT_REF(UTempestBaseStateObject,Z_Param_Out_FoundState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetStateOfClass(Z_Param_StateToSearch,Z_Param_Out_FoundState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTempestBaseStateManagerComponent::execGetCurrentActiveState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTempestBaseStateObject**)Z_Param__Result=P_THIS->GetCurrentActiveState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTempestBaseStateManagerComponent::execSetCurrentActiveState)
	{
		P_GET_OBJECT(UTempestBaseStateObject,Z_Param_NewCurrentActiveState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCurrentActiveState(Z_Param_NewCurrentActiveState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTempestBaseStateManagerComponent::execTrySetQueuedState)
	{
		P_GET_OBJECT(UClass,Z_Param_StateToQueue);
		P_GET_UBOOL(Z_Param_ConditionCheck);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TrySetQueuedState(Z_Param_StateToQueue,Z_Param_ConditionCheck);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTempestBaseStateManagerComponent::execRemoveFromQueuedStates)
	{
		P_GET_OBJECT(UClass,Z_Param_QueuedStateToRemove);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveFromQueuedStates(Z_Param_QueuedStateToRemove);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTempestBaseStateManagerComponent::execAddToQueuedStates)
	{
		P_GET_OBJECT(UClass,Z_Param_NewQueuedState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddToQueuedStates(Z_Param_NewQueuedState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTempestBaseStateManagerComponent::execTryPerformStatesOfClass)
	{
		P_GET_TARRAY(TSubclassOf<UTempestBaseStateObject> ,Z_Param_StatesToSet);
		P_GET_UBOOL(Z_Param_ConditionCheck);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TryPerformStatesOfClass(Z_Param_StatesToSet,Z_Param_ConditionCheck);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTempestBaseStateManagerComponent::execTryPerformStateOfClass)
	{
		P_GET_OBJECT(UClass,Z_Param_StateToSet);
		P_GET_UBOOL(Z_Param_ConditionCheck);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TryPerformStateOfClass(Z_Param_StateToSet,Z_Param_ConditionCheck);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTempestBaseStateManagerComponent::execPerformStateOfClass)
	{
		P_GET_OBJECT(UClass,Z_Param_StateToSet);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PerformStateOfClass(Z_Param_StateToSet);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTempestBaseStateManagerComponent::execInitializeStateManagerComponent)
	{
		P_GET_OBJECT(AActor,Z_Param_NewPerformingActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeStateManagerComponent_Implementation(Z_Param_NewPerformingActor);
		P_NATIVE_END;
	}
	struct TempestBaseStateManagerComponent_eventInitializeStateManagerComponent_Parms
	{
		AActor* NewPerformingActor;
	};
	static FName NAME_UTempestBaseStateManagerComponent_InitializeStateManagerComponent = FName(TEXT("InitializeStateManagerComponent"));
	void UTempestBaseStateManagerComponent::InitializeStateManagerComponent(AActor* NewPerformingActor)
	{
		TempestBaseStateManagerComponent_eventInitializeStateManagerComponent_Parms Parms;
		Parms.NewPerformingActor=NewPerformingActor;
		ProcessEvent(FindFunctionChecked(NAME_UTempestBaseStateManagerComponent_InitializeStateManagerComponent),&Parms);
	}
	void UTempestBaseStateManagerComponent::StaticRegisterNativesUTempestBaseStateManagerComponent()
	{
		UClass* Class = UTempestBaseStateManagerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddToQueuedStates", &UTempestBaseStateManagerComponent::execAddToQueuedStates },
			{ "ClearStatesComponent", &UTempestBaseStateManagerComponent::execClearStatesComponent },
			{ "ConstructStateOfClass", &UTempestBaseStateManagerComponent::execConstructStateOfClass },
			{ "GetActivatableStates", &UTempestBaseStateManagerComponent::execGetActivatableStates },
			{ "GetCanPerformStateOfClass", &UTempestBaseStateManagerComponent::execGetCanPerformStateOfClass },
			{ "GetCanSetQueuedStateOfClass", &UTempestBaseStateManagerComponent::execGetCanSetQueuedStateOfClass },
			{ "GetChildStateOfClass", &UTempestBaseStateManagerComponent::execGetChildStateOfClass },
			{ "GetCurrentActiveState", &UTempestBaseStateManagerComponent::execGetCurrentActiveState },
			{ "GetQueuedStates", &UTempestBaseStateManagerComponent::execGetQueuedStates },
			{ "GetStateOfClass", &UTempestBaseStateManagerComponent::execGetStateOfClass },
			{ "GetStateOfGameplayTag", &UTempestBaseStateManagerComponent::execGetStateOfGameplayTag },
			{ "InitializeStateManagerComponent", &UTempestBaseStateManagerComponent::execInitializeStateManagerComponent },
			{ "PerformStateOfClass", &UTempestBaseStateManagerComponent::execPerformStateOfClass },
			{ "RemoveFromQueuedStates", &UTempestBaseStateManagerComponent::execRemoveFromQueuedStates },
			{ "SetCurrentActiveState", &UTempestBaseStateManagerComponent::execSetCurrentActiveState },
			{ "TryPerformStateOfClass", &UTempestBaseStateManagerComponent::execTryPerformStateOfClass },
			{ "TryPerformStatesOfClass", &UTempestBaseStateManagerComponent::execTryPerformStatesOfClass },
			{ "TrySetQueuedState", &UTempestBaseStateManagerComponent::execTrySetQueuedState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTempestBaseStateManagerComponent_AddToQueuedStates_Statics
	{
		struct TempestBaseStateManagerComponent_eventAddToQueuedStates_Parms
		{
			TSubclassOf<UTempestBaseStateObject>  NewQueuedState;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_NewQueuedState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UTempestBaseStateManagerComponent_AddToQueuedStates_Statics::NewProp_NewQueuedState = { "NewQueuedState", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestBaseStateManagerComponent_eventAddToQueuedStates_Parms, NewQueuedState), Z_Construct_UClass_UClass, Z_Construct_UClass_UTempestBaseStateObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestBaseStateManagerComponent_AddToQueuedStates_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestBaseStateManagerComponent_AddToQueuedStates_Statics::NewProp_NewQueuedState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestBaseStateManagerComponent_AddToQueuedStates_Statics::Function_MetaDataParams[] = {
		{ "Category", "Setters" },
		{ "ModuleRelativePath", "Public/Components/TempestBaseStateManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestBaseStateManagerComponent_AddToQueuedStates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestBaseStateManagerComponent, nullptr, "AddToQueuedStates", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTempestBaseStateManagerComponent_AddToQueuedStates_Statics::TempestBaseStateManagerComponent_eventAddToQueuedStates_Parms), Z_Construct_UFunction_UTempestBaseStateManagerComponent_AddToQueuedStates_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseStateManagerComponent_AddToQueuedStates_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestBaseStateManagerComponent_AddToQueuedStates_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseStateManagerComponent_AddToQueuedStates_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestBaseStateManagerComponent_AddToQueuedStates()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestBaseStateManagerComponent_AddToQueuedStates_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestBaseStateManagerComponent_ClearStatesComponent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestBaseStateManagerComponent_ClearStatesComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Clearing" },
		{ "Comment", "/* Clears All The Arrays Associated For Finding and Setting States*/" },
		{ "ModuleRelativePath", "Public/Components/TempestBaseStateManagerComponent.h" },
		{ "ToolTip", "Clears All The Arrays Associated For Finding and Setting States" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestBaseStateManagerComponent_ClearStatesComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestBaseStateManagerComponent, nullptr, "ClearStatesComponent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestBaseStateManagerComponent_ClearStatesComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseStateManagerComponent_ClearStatesComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestBaseStateManagerComponent_ClearStatesComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestBaseStateManagerComponent_ClearStatesComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestBaseStateManagerComponent_ConstructStateOfClass_Statics
	{
		struct TempestBaseStateManagerComponent_eventConstructStateOfClass_Parms
		{
			TSubclassOf<UTempestBaseStateObject>  StateToConstruct;
			UTempestBaseStateObject* ConstructedState;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_StateToConstruct;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ConstructedState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UTempestBaseStateManagerComponent_ConstructStateOfClass_Statics::NewProp_StateToConstruct = { "StateToConstruct", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestBaseStateManagerComponent_eventConstructStateOfClass_Parms, StateToConstruct), Z_Construct_UClass_UClass, Z_Construct_UClass_UTempestBaseStateObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTempestBaseStateManagerComponent_ConstructStateOfClass_Statics::NewProp_ConstructedState = { "ConstructedState", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestBaseStateManagerComponent_eventConstructStateOfClass_Parms, ConstructedState), Z_Construct_UClass_UTempestBaseStateObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestBaseStateManagerComponent_ConstructStateOfClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestBaseStateManagerComponent_ConstructStateOfClass_Statics::NewProp_StateToConstruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestBaseStateManagerComponent_ConstructStateOfClass_Statics::NewProp_ConstructedState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestBaseStateManagerComponent_ConstructStateOfClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Construction" },
		{ "Comment", "/* Construction */" },
		{ "ModuleRelativePath", "Public/Components/TempestBaseStateManagerComponent.h" },
		{ "ToolTip", "Construction" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestBaseStateManagerComponent_ConstructStateOfClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestBaseStateManagerComponent, nullptr, "ConstructStateOfClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTempestBaseStateManagerComponent_ConstructStateOfClass_Statics::TempestBaseStateManagerComponent_eventConstructStateOfClass_Parms), Z_Construct_UFunction_UTempestBaseStateManagerComponent_ConstructStateOfClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseStateManagerComponent_ConstructStateOfClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestBaseStateManagerComponent_ConstructStateOfClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseStateManagerComponent_ConstructStateOfClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestBaseStateManagerComponent_ConstructStateOfClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestBaseStateManagerComponent_ConstructStateOfClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetActivatableStates_Statics
	{
		struct TempestBaseStateManagerComponent_eventGetActivatableStates_Parms
		{
			TArray<UTempestBaseStateObject*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetActivatableStates_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UTempestBaseStateObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetActivatableStates_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestBaseStateManagerComponent_eventGetActivatableStates_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetActivatableStates_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetActivatableStates_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetActivatableStates_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetActivatableStates_Statics::Function_MetaDataParams[] = {
		{ "Category", "Getters" },
		{ "ModuleRelativePath", "Public/Components/TempestBaseStateManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetActivatableStates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestBaseStateManagerComponent, nullptr, "GetActivatableStates", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetActivatableStates_Statics::TempestBaseStateManagerComponent_eventGetActivatableStates_Parms), Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetActivatableStates_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetActivatableStates_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetActivatableStates_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetActivatableStates_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetActivatableStates()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetActivatableStates_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetCanPerformStateOfClass_Statics
	{
		struct TempestBaseStateManagerComponent_eventGetCanPerformStateOfClass_Parms
		{
			TSubclassOf<UTempestBaseStateObject>  ClassToLookFor;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_ClassToLookFor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetCanPerformStateOfClass_Statics::NewProp_ClassToLookFor = { "ClassToLookFor", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestBaseStateManagerComponent_eventGetCanPerformStateOfClass_Parms, ClassToLookFor), Z_Construct_UClass_UClass, Z_Construct_UClass_UTempestBaseStateObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetCanPerformStateOfClass_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TempestBaseStateManagerComponent_eventGetCanPerformStateOfClass_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetCanPerformStateOfClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TempestBaseStateManagerComponent_eventGetCanPerformStateOfClass_Parms), &Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetCanPerformStateOfClass_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetCanPerformStateOfClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetCanPerformStateOfClass_Statics::NewProp_ClassToLookFor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetCanPerformStateOfClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetCanPerformStateOfClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Getters" },
		{ "ModuleRelativePath", "Public/Components/TempestBaseStateManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetCanPerformStateOfClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestBaseStateManagerComponent, nullptr, "GetCanPerformStateOfClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetCanPerformStateOfClass_Statics::TempestBaseStateManagerComponent_eventGetCanPerformStateOfClass_Parms), Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetCanPerformStateOfClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetCanPerformStateOfClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetCanPerformStateOfClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetCanPerformStateOfClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetCanPerformStateOfClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetCanPerformStateOfClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetCanSetQueuedStateOfClass_Statics
	{
		struct TempestBaseStateManagerComponent_eventGetCanSetQueuedStateOfClass_Parms
		{
			TSubclassOf<UTempestBaseStateObject>  StateToSearch;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_StateToSearch;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetCanSetQueuedStateOfClass_Statics::NewProp_StateToSearch = { "StateToSearch", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestBaseStateManagerComponent_eventGetCanSetQueuedStateOfClass_Parms, StateToSearch), Z_Construct_UClass_UClass, Z_Construct_UClass_UTempestBaseStateObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetCanSetQueuedStateOfClass_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TempestBaseStateManagerComponent_eventGetCanSetQueuedStateOfClass_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetCanSetQueuedStateOfClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TempestBaseStateManagerComponent_eventGetCanSetQueuedStateOfClass_Parms), &Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetCanSetQueuedStateOfClass_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetCanSetQueuedStateOfClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetCanSetQueuedStateOfClass_Statics::NewProp_StateToSearch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetCanSetQueuedStateOfClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetCanSetQueuedStateOfClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Getters" },
		{ "ModuleRelativePath", "Public/Components/TempestBaseStateManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetCanSetQueuedStateOfClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestBaseStateManagerComponent, nullptr, "GetCanSetQueuedStateOfClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetCanSetQueuedStateOfClass_Statics::TempestBaseStateManagerComponent_eventGetCanSetQueuedStateOfClass_Parms), Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetCanSetQueuedStateOfClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetCanSetQueuedStateOfClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetCanSetQueuedStateOfClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetCanSetQueuedStateOfClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetCanSetQueuedStateOfClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetCanSetQueuedStateOfClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetChildStateOfClass_Statics
	{
		struct TempestBaseStateManagerComponent_eventGetChildStateOfClass_Parms
		{
			TSubclassOf<UTempestBaseStateObject>  StateToSearch;
			UTempestBaseStateObject* FoundState;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_StateToSearch;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FoundState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetChildStateOfClass_Statics::NewProp_StateToSearch = { "StateToSearch", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestBaseStateManagerComponent_eventGetChildStateOfClass_Parms, StateToSearch), Z_Construct_UClass_UClass, Z_Construct_UClass_UTempestBaseStateObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetChildStateOfClass_Statics::NewProp_FoundState = { "FoundState", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestBaseStateManagerComponent_eventGetChildStateOfClass_Parms, FoundState), Z_Construct_UClass_UTempestBaseStateObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetChildStateOfClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetChildStateOfClass_Statics::NewProp_StateToSearch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetChildStateOfClass_Statics::NewProp_FoundState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetChildStateOfClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Getters" },
		{ "ModuleRelativePath", "Public/Components/TempestBaseStateManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetChildStateOfClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestBaseStateManagerComponent, nullptr, "GetChildStateOfClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetChildStateOfClass_Statics::TempestBaseStateManagerComponent_eventGetChildStateOfClass_Parms), Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetChildStateOfClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetChildStateOfClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetChildStateOfClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetChildStateOfClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetChildStateOfClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetChildStateOfClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetCurrentActiveState_Statics
	{
		struct TempestBaseStateManagerComponent_eventGetCurrentActiveState_Parms
		{
			UTempestBaseStateObject* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetCurrentActiveState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestBaseStateManagerComponent_eventGetCurrentActiveState_Parms, ReturnValue), Z_Construct_UClass_UTempestBaseStateObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetCurrentActiveState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetCurrentActiveState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetCurrentActiveState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Getters" },
		{ "Comment", "/* Getters */" },
		{ "ModuleRelativePath", "Public/Components/TempestBaseStateManagerComponent.h" },
		{ "ToolTip", "Getters" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetCurrentActiveState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestBaseStateManagerComponent, nullptr, "GetCurrentActiveState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetCurrentActiveState_Statics::TempestBaseStateManagerComponent_eventGetCurrentActiveState_Parms), Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetCurrentActiveState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetCurrentActiveState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetCurrentActiveState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetCurrentActiveState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetCurrentActiveState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetCurrentActiveState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetQueuedStates_Statics
	{
		struct TempestBaseStateManagerComponent_eventGetQueuedStates_Parms
		{
			TArray<TSubclassOf<UTempestBaseStateObject> > ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetQueuedStates_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UTempestBaseStateObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetQueuedStates_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestBaseStateManagerComponent_eventGetQueuedStates_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetQueuedStates_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetQueuedStates_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetQueuedStates_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetQueuedStates_Statics::Function_MetaDataParams[] = {
		{ "Category", "Getters" },
		{ "ModuleRelativePath", "Public/Components/TempestBaseStateManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetQueuedStates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestBaseStateManagerComponent, nullptr, "GetQueuedStates", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetQueuedStates_Statics::TempestBaseStateManagerComponent_eventGetQueuedStates_Parms), Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetQueuedStates_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetQueuedStates_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetQueuedStates_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetQueuedStates_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetQueuedStates()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetQueuedStates_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetStateOfClass_Statics
	{
		struct TempestBaseStateManagerComponent_eventGetStateOfClass_Parms
		{
			TSubclassOf<UTempestBaseStateObject>  StateToSearch;
			UTempestBaseStateObject* FoundState;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_StateToSearch;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FoundState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetStateOfClass_Statics::NewProp_StateToSearch = { "StateToSearch", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestBaseStateManagerComponent_eventGetStateOfClass_Parms, StateToSearch), Z_Construct_UClass_UClass, Z_Construct_UClass_UTempestBaseStateObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetStateOfClass_Statics::NewProp_FoundState = { "FoundState", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestBaseStateManagerComponent_eventGetStateOfClass_Parms, FoundState), Z_Construct_UClass_UTempestBaseStateObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetStateOfClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetStateOfClass_Statics::NewProp_StateToSearch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetStateOfClass_Statics::NewProp_FoundState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetStateOfClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Getters" },
		{ "ModuleRelativePath", "Public/Components/TempestBaseStateManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetStateOfClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestBaseStateManagerComponent, nullptr, "GetStateOfClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetStateOfClass_Statics::TempestBaseStateManagerComponent_eventGetStateOfClass_Parms), Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetStateOfClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetStateOfClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetStateOfClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetStateOfClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetStateOfClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetStateOfClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetStateOfGameplayTag_Statics
	{
		struct TempestBaseStateManagerComponent_eventGetStateOfGameplayTag_Parms
		{
			FGameplayTag StateGameplayTag;
			UTempestBaseStateObject* ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_StateGameplayTag;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetStateOfGameplayTag_Statics::NewProp_StateGameplayTag = { "StateGameplayTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestBaseStateManagerComponent_eventGetStateOfGameplayTag_Parms, StateGameplayTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetStateOfGameplayTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestBaseStateManagerComponent_eventGetStateOfGameplayTag_Parms, ReturnValue), Z_Construct_UClass_UTempestBaseStateObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetStateOfGameplayTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetStateOfGameplayTag_Statics::NewProp_StateGameplayTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetStateOfGameplayTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetStateOfGameplayTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Getters" },
		{ "ModuleRelativePath", "Public/Components/TempestBaseStateManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetStateOfGameplayTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestBaseStateManagerComponent, nullptr, "GetStateOfGameplayTag", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetStateOfGameplayTag_Statics::TempestBaseStateManagerComponent_eventGetStateOfGameplayTag_Parms), Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetStateOfGameplayTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetStateOfGameplayTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetStateOfGameplayTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetStateOfGameplayTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetStateOfGameplayTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetStateOfGameplayTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestBaseStateManagerComponent_InitializeStateManagerComponent_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewPerformingActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTempestBaseStateManagerComponent_InitializeStateManagerComponent_Statics::NewProp_NewPerformingActor = { "NewPerformingActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestBaseStateManagerComponent_eventInitializeStateManagerComponent_Parms, NewPerformingActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestBaseStateManagerComponent_InitializeStateManagerComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestBaseStateManagerComponent_InitializeStateManagerComponent_Statics::NewProp_NewPerformingActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestBaseStateManagerComponent_InitializeStateManagerComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Initialization Functions" },
		{ "ModuleRelativePath", "Public/Components/TempestBaseStateManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestBaseStateManagerComponent_InitializeStateManagerComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestBaseStateManagerComponent, nullptr, "InitializeStateManagerComponent", nullptr, nullptr, sizeof(TempestBaseStateManagerComponent_eventInitializeStateManagerComponent_Parms), Z_Construct_UFunction_UTempestBaseStateManagerComponent_InitializeStateManagerComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseStateManagerComponent_InitializeStateManagerComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestBaseStateManagerComponent_InitializeStateManagerComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseStateManagerComponent_InitializeStateManagerComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestBaseStateManagerComponent_InitializeStateManagerComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestBaseStateManagerComponent_InitializeStateManagerComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestBaseStateManagerComponent_PerformStateOfClass_Statics
	{
		struct TempestBaseStateManagerComponent_eventPerformStateOfClass_Parms
		{
			TSubclassOf<UTempestBaseStateObject>  StateToSet;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_StateToSet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UTempestBaseStateManagerComponent_PerformStateOfClass_Statics::NewProp_StateToSet = { "StateToSet", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestBaseStateManagerComponent_eventPerformStateOfClass_Parms, StateToSet), Z_Construct_UClass_UClass, Z_Construct_UClass_UTempestBaseStateObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestBaseStateManagerComponent_PerformStateOfClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestBaseStateManagerComponent_PerformStateOfClass_Statics::NewProp_StateToSet,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestBaseStateManagerComponent_PerformStateOfClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Setters" },
		{ "ModuleRelativePath", "Public/Components/TempestBaseStateManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestBaseStateManagerComponent_PerformStateOfClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestBaseStateManagerComponent, nullptr, "PerformStateOfClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTempestBaseStateManagerComponent_PerformStateOfClass_Statics::TempestBaseStateManagerComponent_eventPerformStateOfClass_Parms), Z_Construct_UFunction_UTempestBaseStateManagerComponent_PerformStateOfClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseStateManagerComponent_PerformStateOfClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestBaseStateManagerComponent_PerformStateOfClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseStateManagerComponent_PerformStateOfClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestBaseStateManagerComponent_PerformStateOfClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestBaseStateManagerComponent_PerformStateOfClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestBaseStateManagerComponent_RemoveFromQueuedStates_Statics
	{
		struct TempestBaseStateManagerComponent_eventRemoveFromQueuedStates_Parms
		{
			TSubclassOf<UTempestBaseStateObject>  QueuedStateToRemove;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_QueuedStateToRemove;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UTempestBaseStateManagerComponent_RemoveFromQueuedStates_Statics::NewProp_QueuedStateToRemove = { "QueuedStateToRemove", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestBaseStateManagerComponent_eventRemoveFromQueuedStates_Parms, QueuedStateToRemove), Z_Construct_UClass_UClass, Z_Construct_UClass_UTempestBaseStateObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestBaseStateManagerComponent_RemoveFromQueuedStates_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestBaseStateManagerComponent_RemoveFromQueuedStates_Statics::NewProp_QueuedStateToRemove,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestBaseStateManagerComponent_RemoveFromQueuedStates_Statics::Function_MetaDataParams[] = {
		{ "Category", "Setters" },
		{ "ModuleRelativePath", "Public/Components/TempestBaseStateManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestBaseStateManagerComponent_RemoveFromQueuedStates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestBaseStateManagerComponent, nullptr, "RemoveFromQueuedStates", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTempestBaseStateManagerComponent_RemoveFromQueuedStates_Statics::TempestBaseStateManagerComponent_eventRemoveFromQueuedStates_Parms), Z_Construct_UFunction_UTempestBaseStateManagerComponent_RemoveFromQueuedStates_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseStateManagerComponent_RemoveFromQueuedStates_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestBaseStateManagerComponent_RemoveFromQueuedStates_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseStateManagerComponent_RemoveFromQueuedStates_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestBaseStateManagerComponent_RemoveFromQueuedStates()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestBaseStateManagerComponent_RemoveFromQueuedStates_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestBaseStateManagerComponent_SetCurrentActiveState_Statics
	{
		struct TempestBaseStateManagerComponent_eventSetCurrentActiveState_Parms
		{
			UTempestBaseStateObject* NewCurrentActiveState;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewCurrentActiveState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTempestBaseStateManagerComponent_SetCurrentActiveState_Statics::NewProp_NewCurrentActiveState = { "NewCurrentActiveState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestBaseStateManagerComponent_eventSetCurrentActiveState_Parms, NewCurrentActiveState), Z_Construct_UClass_UTempestBaseStateObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestBaseStateManagerComponent_SetCurrentActiveState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestBaseStateManagerComponent_SetCurrentActiveState_Statics::NewProp_NewCurrentActiveState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestBaseStateManagerComponent_SetCurrentActiveState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Setters" },
		{ "ModuleRelativePath", "Public/Components/TempestBaseStateManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestBaseStateManagerComponent_SetCurrentActiveState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestBaseStateManagerComponent, nullptr, "SetCurrentActiveState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTempestBaseStateManagerComponent_SetCurrentActiveState_Statics::TempestBaseStateManagerComponent_eventSetCurrentActiveState_Parms), Z_Construct_UFunction_UTempestBaseStateManagerComponent_SetCurrentActiveState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseStateManagerComponent_SetCurrentActiveState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestBaseStateManagerComponent_SetCurrentActiveState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseStateManagerComponent_SetCurrentActiveState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestBaseStateManagerComponent_SetCurrentActiveState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestBaseStateManagerComponent_SetCurrentActiveState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestBaseStateManagerComponent_TryPerformStateOfClass_Statics
	{
		struct TempestBaseStateManagerComponent_eventTryPerformStateOfClass_Parms
		{
			TSubclassOf<UTempestBaseStateObject>  StateToSet;
			bool ConditionCheck;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_StateToSet;
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
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UTempestBaseStateManagerComponent_TryPerformStateOfClass_Statics::NewProp_StateToSet = { "StateToSet", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestBaseStateManagerComponent_eventTryPerformStateOfClass_Parms, StateToSet), Z_Construct_UClass_UClass, Z_Construct_UClass_UTempestBaseStateObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTempestBaseStateManagerComponent_TryPerformStateOfClass_Statics::NewProp_ConditionCheck_SetBit(void* Obj)
	{
		((TempestBaseStateManagerComponent_eventTryPerformStateOfClass_Parms*)Obj)->ConditionCheck = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTempestBaseStateManagerComponent_TryPerformStateOfClass_Statics::NewProp_ConditionCheck = { "ConditionCheck", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TempestBaseStateManagerComponent_eventTryPerformStateOfClass_Parms), &Z_Construct_UFunction_UTempestBaseStateManagerComponent_TryPerformStateOfClass_Statics::NewProp_ConditionCheck_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTempestBaseStateManagerComponent_TryPerformStateOfClass_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TempestBaseStateManagerComponent_eventTryPerformStateOfClass_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTempestBaseStateManagerComponent_TryPerformStateOfClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TempestBaseStateManagerComponent_eventTryPerformStateOfClass_Parms), &Z_Construct_UFunction_UTempestBaseStateManagerComponent_TryPerformStateOfClass_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestBaseStateManagerComponent_TryPerformStateOfClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestBaseStateManagerComponent_TryPerformStateOfClass_Statics::NewProp_StateToSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestBaseStateManagerComponent_TryPerformStateOfClass_Statics::NewProp_ConditionCheck,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestBaseStateManagerComponent_TryPerformStateOfClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestBaseStateManagerComponent_TryPerformStateOfClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Setters" },
		{ "CPP_Default_ConditionCheck", "true" },
		{ "ModuleRelativePath", "Public/Components/TempestBaseStateManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestBaseStateManagerComponent_TryPerformStateOfClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestBaseStateManagerComponent, nullptr, "TryPerformStateOfClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTempestBaseStateManagerComponent_TryPerformStateOfClass_Statics::TempestBaseStateManagerComponent_eventTryPerformStateOfClass_Parms), Z_Construct_UFunction_UTempestBaseStateManagerComponent_TryPerformStateOfClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseStateManagerComponent_TryPerformStateOfClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestBaseStateManagerComponent_TryPerformStateOfClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseStateManagerComponent_TryPerformStateOfClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestBaseStateManagerComponent_TryPerformStateOfClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestBaseStateManagerComponent_TryPerformStateOfClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestBaseStateManagerComponent_TryPerformStatesOfClass_Statics
	{
		struct TempestBaseStateManagerComponent_eventTryPerformStatesOfClass_Parms
		{
			TArray<TSubclassOf<UTempestBaseStateObject> > StatesToSet;
			bool ConditionCheck;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_StatesToSet_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StatesToSet;
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
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UTempestBaseStateManagerComponent_TryPerformStatesOfClass_Statics::NewProp_StatesToSet_Inner = { "StatesToSet", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UTempestBaseStateObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTempestBaseStateManagerComponent_TryPerformStatesOfClass_Statics::NewProp_StatesToSet = { "StatesToSet", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestBaseStateManagerComponent_eventTryPerformStatesOfClass_Parms, StatesToSet), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTempestBaseStateManagerComponent_TryPerformStatesOfClass_Statics::NewProp_ConditionCheck_SetBit(void* Obj)
	{
		((TempestBaseStateManagerComponent_eventTryPerformStatesOfClass_Parms*)Obj)->ConditionCheck = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTempestBaseStateManagerComponent_TryPerformStatesOfClass_Statics::NewProp_ConditionCheck = { "ConditionCheck", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TempestBaseStateManagerComponent_eventTryPerformStatesOfClass_Parms), &Z_Construct_UFunction_UTempestBaseStateManagerComponent_TryPerformStatesOfClass_Statics::NewProp_ConditionCheck_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTempestBaseStateManagerComponent_TryPerformStatesOfClass_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TempestBaseStateManagerComponent_eventTryPerformStatesOfClass_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTempestBaseStateManagerComponent_TryPerformStatesOfClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TempestBaseStateManagerComponent_eventTryPerformStatesOfClass_Parms), &Z_Construct_UFunction_UTempestBaseStateManagerComponent_TryPerformStatesOfClass_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestBaseStateManagerComponent_TryPerformStatesOfClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestBaseStateManagerComponent_TryPerformStatesOfClass_Statics::NewProp_StatesToSet_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestBaseStateManagerComponent_TryPerformStatesOfClass_Statics::NewProp_StatesToSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestBaseStateManagerComponent_TryPerformStatesOfClass_Statics::NewProp_ConditionCheck,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestBaseStateManagerComponent_TryPerformStatesOfClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestBaseStateManagerComponent_TryPerformStatesOfClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Setters" },
		{ "CPP_Default_ConditionCheck", "true" },
		{ "ModuleRelativePath", "Public/Components/TempestBaseStateManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestBaseStateManagerComponent_TryPerformStatesOfClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestBaseStateManagerComponent, nullptr, "TryPerformStatesOfClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTempestBaseStateManagerComponent_TryPerformStatesOfClass_Statics::TempestBaseStateManagerComponent_eventTryPerformStatesOfClass_Parms), Z_Construct_UFunction_UTempestBaseStateManagerComponent_TryPerformStatesOfClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseStateManagerComponent_TryPerformStatesOfClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestBaseStateManagerComponent_TryPerformStatesOfClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseStateManagerComponent_TryPerformStatesOfClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestBaseStateManagerComponent_TryPerformStatesOfClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestBaseStateManagerComponent_TryPerformStatesOfClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestBaseStateManagerComponent_TrySetQueuedState_Statics
	{
		struct TempestBaseStateManagerComponent_eventTrySetQueuedState_Parms
		{
			TSubclassOf<UTempestBaseStateObject>  StateToQueue;
			bool ConditionCheck;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_StateToQueue;
		static void NewProp_ConditionCheck_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ConditionCheck;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UTempestBaseStateManagerComponent_TrySetQueuedState_Statics::NewProp_StateToQueue = { "StateToQueue", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestBaseStateManagerComponent_eventTrySetQueuedState_Parms, StateToQueue), Z_Construct_UClass_UClass, Z_Construct_UClass_UTempestBaseStateObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTempestBaseStateManagerComponent_TrySetQueuedState_Statics::NewProp_ConditionCheck_SetBit(void* Obj)
	{
		((TempestBaseStateManagerComponent_eventTrySetQueuedState_Parms*)Obj)->ConditionCheck = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTempestBaseStateManagerComponent_TrySetQueuedState_Statics::NewProp_ConditionCheck = { "ConditionCheck", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TempestBaseStateManagerComponent_eventTrySetQueuedState_Parms), &Z_Construct_UFunction_UTempestBaseStateManagerComponent_TrySetQueuedState_Statics::NewProp_ConditionCheck_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestBaseStateManagerComponent_TrySetQueuedState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestBaseStateManagerComponent_TrySetQueuedState_Statics::NewProp_StateToQueue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestBaseStateManagerComponent_TrySetQueuedState_Statics::NewProp_ConditionCheck,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestBaseStateManagerComponent_TrySetQueuedState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Setters" },
		{ "CPP_Default_ConditionCheck", "true" },
		{ "ModuleRelativePath", "Public/Components/TempestBaseStateManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestBaseStateManagerComponent_TrySetQueuedState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestBaseStateManagerComponent, nullptr, "TrySetQueuedState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTempestBaseStateManagerComponent_TrySetQueuedState_Statics::TempestBaseStateManagerComponent_eventTrySetQueuedState_Parms), Z_Construct_UFunction_UTempestBaseStateManagerComponent_TrySetQueuedState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseStateManagerComponent_TrySetQueuedState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestBaseStateManagerComponent_TrySetQueuedState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseStateManagerComponent_TrySetQueuedState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestBaseStateManagerComponent_TrySetQueuedState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestBaseStateManagerComponent_TrySetQueuedState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTempestBaseStateManagerComponent);
	UClass* Z_Construct_UClass_UTempestBaseStateManagerComponent_NoRegister()
	{
		return UTempestBaseStateManagerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTempestBaseStateManagerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnUpdatedActiveState_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUpdatedActiveState;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActivatableStates_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActivatableStates_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActivatableStates;
		static const UECodeGen_Private::FClassPropertyParams NewProp_QueuedStates_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QueuedStates_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_QueuedStates;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PerformingActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PerformingActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentActiveState_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentActiveState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTempestBaseStateManagerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TempestCombatFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTempestBaseStateManagerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTempestBaseStateManagerComponent_AddToQueuedStates, "AddToQueuedStates" }, // 3112573655
		{ &Z_Construct_UFunction_UTempestBaseStateManagerComponent_ClearStatesComponent, "ClearStatesComponent" }, // 4193543567
		{ &Z_Construct_UFunction_UTempestBaseStateManagerComponent_ConstructStateOfClass, "ConstructStateOfClass" }, // 1615950121
		{ &Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetActivatableStates, "GetActivatableStates" }, // 513608495
		{ &Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetCanPerformStateOfClass, "GetCanPerformStateOfClass" }, // 2091328308
		{ &Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetCanSetQueuedStateOfClass, "GetCanSetQueuedStateOfClass" }, // 1688343612
		{ &Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetChildStateOfClass, "GetChildStateOfClass" }, // 2012695385
		{ &Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetCurrentActiveState, "GetCurrentActiveState" }, // 1844652765
		{ &Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetQueuedStates, "GetQueuedStates" }, // 3616954968
		{ &Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetStateOfClass, "GetStateOfClass" }, // 1189013465
		{ &Z_Construct_UFunction_UTempestBaseStateManagerComponent_GetStateOfGameplayTag, "GetStateOfGameplayTag" }, // 3731257845
		{ &Z_Construct_UFunction_UTempestBaseStateManagerComponent_InitializeStateManagerComponent, "InitializeStateManagerComponent" }, // 4147802257
		{ &Z_Construct_UFunction_UTempestBaseStateManagerComponent_PerformStateOfClass, "PerformStateOfClass" }, // 1526354631
		{ &Z_Construct_UFunction_UTempestBaseStateManagerComponent_RemoveFromQueuedStates, "RemoveFromQueuedStates" }, // 1128703427
		{ &Z_Construct_UFunction_UTempestBaseStateManagerComponent_SetCurrentActiveState, "SetCurrentActiveState" }, // 143634525
		{ &Z_Construct_UFunction_UTempestBaseStateManagerComponent_TryPerformStateOfClass, "TryPerformStateOfClass" }, // 3020898299
		{ &Z_Construct_UFunction_UTempestBaseStateManagerComponent_TryPerformStatesOfClass, "TryPerformStatesOfClass" }, // 3305906540
		{ &Z_Construct_UFunction_UTempestBaseStateManagerComponent_TrySetQueuedState, "TrySetQueuedState" }, // 2612579641
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTempestBaseStateManagerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/TempestBaseStateManagerComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/TempestBaseStateManagerComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTempestBaseStateManagerComponent_Statics::NewProp_OnUpdatedActiveState_MetaData[] = {
		{ "Category", "Base Dispatchers" },
		{ "ModuleRelativePath", "Public/Components/TempestBaseStateManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTempestBaseStateManagerComponent_Statics::NewProp_OnUpdatedActiveState = { "OnUpdatedActiveState", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTempestBaseStateManagerComponent, OnUpdatedActiveState), Z_Construct_UDelegateFunction_TempestCombatFramework_OnUpdatedActiveState__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTempestBaseStateManagerComponent_Statics::NewProp_OnUpdatedActiveState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTempestBaseStateManagerComponent_Statics::NewProp_OnUpdatedActiveState_MetaData)) }; // 222225436
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTempestBaseStateManagerComponent_Statics::NewProp_ActivatableStates_Inner = { "ActivatableStates", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UTempestBaseStateObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTempestBaseStateManagerComponent_Statics::NewProp_ActivatableStates_MetaData[] = {
		{ "Category", "Base Variables" },
		{ "ModuleRelativePath", "Public/Components/TempestBaseStateManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTempestBaseStateManagerComponent_Statics::NewProp_ActivatableStates = { "ActivatableStates", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTempestBaseStateManagerComponent, ActivatableStates), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTempestBaseStateManagerComponent_Statics::NewProp_ActivatableStates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTempestBaseStateManagerComponent_Statics::NewProp_ActivatableStates_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UTempestBaseStateManagerComponent_Statics::NewProp_QueuedStates_Inner = { "QueuedStates", nullptr, (EPropertyFlags)0x0004000000020000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UTempestBaseStateObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTempestBaseStateManagerComponent_Statics::NewProp_QueuedStates_MetaData[] = {
		{ "Category", "Base Variables" },
		{ "ModuleRelativePath", "Public/Components/TempestBaseStateManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTempestBaseStateManagerComponent_Statics::NewProp_QueuedStates = { "QueuedStates", nullptr, (EPropertyFlags)0x0014000000020005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTempestBaseStateManagerComponent, QueuedStates), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTempestBaseStateManagerComponent_Statics::NewProp_QueuedStates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTempestBaseStateManagerComponent_Statics::NewProp_QueuedStates_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTempestBaseStateManagerComponent_Statics::NewProp_PerformingActor_MetaData[] = {
		{ "Category", "Base Variables" },
		{ "ModuleRelativePath", "Public/Components/TempestBaseStateManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTempestBaseStateManagerComponent_Statics::NewProp_PerformingActor = { "PerformingActor", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTempestBaseStateManagerComponent, PerformingActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTempestBaseStateManagerComponent_Statics::NewProp_PerformingActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTempestBaseStateManagerComponent_Statics::NewProp_PerformingActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTempestBaseStateManagerComponent_Statics::NewProp_CurrentActiveState_MetaData[] = {
		{ "Category", "Base Variables" },
		{ "ModuleRelativePath", "Public/Components/TempestBaseStateManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTempestBaseStateManagerComponent_Statics::NewProp_CurrentActiveState = { "CurrentActiveState", nullptr, (EPropertyFlags)0x0020080000020005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTempestBaseStateManagerComponent, CurrentActiveState), Z_Construct_UClass_UTempestBaseStateObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTempestBaseStateManagerComponent_Statics::NewProp_CurrentActiveState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTempestBaseStateManagerComponent_Statics::NewProp_CurrentActiveState_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTempestBaseStateManagerComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTempestBaseStateManagerComponent_Statics::NewProp_OnUpdatedActiveState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTempestBaseStateManagerComponent_Statics::NewProp_ActivatableStates_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTempestBaseStateManagerComponent_Statics::NewProp_ActivatableStates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTempestBaseStateManagerComponent_Statics::NewProp_QueuedStates_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTempestBaseStateManagerComponent_Statics::NewProp_QueuedStates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTempestBaseStateManagerComponent_Statics::NewProp_PerformingActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTempestBaseStateManagerComponent_Statics::NewProp_CurrentActiveState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTempestBaseStateManagerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTempestBaseStateManagerComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTempestBaseStateManagerComponent_Statics::ClassParams = {
		&UTempestBaseStateManagerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTempestBaseStateManagerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTempestBaseStateManagerComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTempestBaseStateManagerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTempestBaseStateManagerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTempestBaseStateManagerComponent()
	{
		if (!Z_Registration_Info_UClass_UTempestBaseStateManagerComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTempestBaseStateManagerComponent.OuterSingleton, Z_Construct_UClass_UTempestBaseStateManagerComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTempestBaseStateManagerComponent.OuterSingleton;
	}
	template<> TEMPESTCOMBATFRAMEWORK_API UClass* StaticClass<UTempestBaseStateManagerComponent>()
	{
		return UTempestBaseStateManagerComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTempestBaseStateManagerComponent);
	UTempestBaseStateManagerComponent::~UTempestBaseStateManagerComponent() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Components_TempestBaseStateManagerComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Components_TempestBaseStateManagerComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTempestBaseStateManagerComponent, UTempestBaseStateManagerComponent::StaticClass, TEXT("UTempestBaseStateManagerComponent"), &Z_Registration_Info_UClass_UTempestBaseStateManagerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTempestBaseStateManagerComponent), 2293843632U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Components_TempestBaseStateManagerComponent_h_2568349757(TEXT("/Script/TempestCombatFramework"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Components_TempestBaseStateManagerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Components_TempestBaseStateManagerComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
