// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TempestCombatFramework/Public/Components/TempestCollisionManagerComponent.h"
#include "GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTempestCollisionManagerComponent() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	TEMPESTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UTempestBaseTraceObject_NoRegister();
	TEMPESTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UTempestCollisionManagerComponent();
	TEMPESTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UTempestCollisionManagerComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TempestCombatFramework();
// End Cross Module References
	DEFINE_FUNCTION(UTempestCollisionManagerComponent::execClearAvailableTraceObjects)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearAvailableTraceObjects();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTempestCollisionManagerComponent::execAddTraceToActiveTraces)
	{
		P_GET_OBJECT(UTempestBaseTraceObject,Z_Param_TraceToAdd);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddTraceToActiveTraces(Z_Param_TraceToAdd);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTempestCollisionManagerComponent::execRemoveTraceFromCreatedTraces)
	{
		P_GET_OBJECT(UTempestBaseTraceObject,Z_Param_TraceToRemove);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveTraceFromCreatedTraces(Z_Param_TraceToRemove);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTempestCollisionManagerComponent::execRemoveTraceFromActiveTraces)
	{
		P_GET_OBJECT(UTempestBaseTraceObject,Z_Param_TraceToRemove);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveTraceFromActiveTraces(Z_Param_TraceToRemove);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTempestCollisionManagerComponent::execGetTraceByClass)
	{
		P_GET_OBJECT(UClass,Z_Param_TraceToFind);
		P_GET_OBJECT_REF(UTempestBaseTraceObject,Z_Param_Out_FoundTrace);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetTraceByClass(Z_Param_TraceToFind,Z_Param_Out_FoundTrace);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTempestCollisionManagerComponent::execGetTraceOfGameplayTag)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_TraceToFind);
		P_GET_OBJECT_REF(UTempestBaseTraceObject,Z_Param_Out_FoundTrace);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetTraceOfGameplayTag(Z_Param_TraceToFind,Z_Param_Out_FoundTrace);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTempestCollisionManagerComponent::execConstructTraceOfClass)
	{
		P_GET_OBJECT(UClass,Z_Param_TraceClassToConstruct);
		P_GET_OBJECT_REF(UTempestBaseTraceObject,Z_Param_Out_CreatedTraceObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ConstructTraceOfClass(Z_Param_TraceClassToConstruct,Z_Param_Out_CreatedTraceObject);
		P_NATIVE_END;
	}
	void UTempestCollisionManagerComponent::StaticRegisterNativesUTempestCollisionManagerComponent()
	{
		UClass* Class = UTempestCollisionManagerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddTraceToActiveTraces", &UTempestCollisionManagerComponent::execAddTraceToActiveTraces },
			{ "ClearAvailableTraceObjects", &UTempestCollisionManagerComponent::execClearAvailableTraceObjects },
			{ "ConstructTraceOfClass", &UTempestCollisionManagerComponent::execConstructTraceOfClass },
			{ "GetTraceByClass", &UTempestCollisionManagerComponent::execGetTraceByClass },
			{ "GetTraceOfGameplayTag", &UTempestCollisionManagerComponent::execGetTraceOfGameplayTag },
			{ "RemoveTraceFromActiveTraces", &UTempestCollisionManagerComponent::execRemoveTraceFromActiveTraces },
			{ "RemoveTraceFromCreatedTraces", &UTempestCollisionManagerComponent::execRemoveTraceFromCreatedTraces },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTempestCollisionManagerComponent_AddTraceToActiveTraces_Statics
	{
		struct TempestCollisionManagerComponent_eventAddTraceToActiveTraces_Parms
		{
			UTempestBaseTraceObject* TraceToAdd;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TraceToAdd;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTempestCollisionManagerComponent_AddTraceToActiveTraces_Statics::NewProp_TraceToAdd = { "TraceToAdd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestCollisionManagerComponent_eventAddTraceToActiveTraces_Parms, TraceToAdd), Z_Construct_UClass_UTempestBaseTraceObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestCollisionManagerComponent_AddTraceToActiveTraces_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestCollisionManagerComponent_AddTraceToActiveTraces_Statics::NewProp_TraceToAdd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestCollisionManagerComponent_AddTraceToActiveTraces_Statics::Function_MetaDataParams[] = {
		{ "Category", "Collision Base Functions" },
		{ "ModuleRelativePath", "Public/Components/TempestCollisionManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestCollisionManagerComponent_AddTraceToActiveTraces_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestCollisionManagerComponent, nullptr, "AddTraceToActiveTraces", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTempestCollisionManagerComponent_AddTraceToActiveTraces_Statics::TempestCollisionManagerComponent_eventAddTraceToActiveTraces_Parms), Z_Construct_UFunction_UTempestCollisionManagerComponent_AddTraceToActiveTraces_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestCollisionManagerComponent_AddTraceToActiveTraces_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestCollisionManagerComponent_AddTraceToActiveTraces_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestCollisionManagerComponent_AddTraceToActiveTraces_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestCollisionManagerComponent_AddTraceToActiveTraces()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestCollisionManagerComponent_AddTraceToActiveTraces_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestCollisionManagerComponent_ClearAvailableTraceObjects_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestCollisionManagerComponent_ClearAvailableTraceObjects_Statics::Function_MetaDataParams[] = {
		{ "Category", "Collision Base Functions" },
		{ "ModuleRelativePath", "Public/Components/TempestCollisionManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestCollisionManagerComponent_ClearAvailableTraceObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestCollisionManagerComponent, nullptr, "ClearAvailableTraceObjects", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestCollisionManagerComponent_ClearAvailableTraceObjects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestCollisionManagerComponent_ClearAvailableTraceObjects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestCollisionManagerComponent_ClearAvailableTraceObjects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestCollisionManagerComponent_ClearAvailableTraceObjects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestCollisionManagerComponent_ConstructTraceOfClass_Statics
	{
		struct TempestCollisionManagerComponent_eventConstructTraceOfClass_Parms
		{
			TSubclassOf<UTempestBaseTraceObject>  TraceClassToConstruct;
			UTempestBaseTraceObject* CreatedTraceObject;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_TraceClassToConstruct;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CreatedTraceObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UTempestCollisionManagerComponent_ConstructTraceOfClass_Statics::NewProp_TraceClassToConstruct = { "TraceClassToConstruct", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestCollisionManagerComponent_eventConstructTraceOfClass_Parms, TraceClassToConstruct), Z_Construct_UClass_UClass, Z_Construct_UClass_UTempestBaseTraceObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTempestCollisionManagerComponent_ConstructTraceOfClass_Statics::NewProp_CreatedTraceObject = { "CreatedTraceObject", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestCollisionManagerComponent_eventConstructTraceOfClass_Parms, CreatedTraceObject), Z_Construct_UClass_UTempestBaseTraceObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestCollisionManagerComponent_ConstructTraceOfClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestCollisionManagerComponent_ConstructTraceOfClass_Statics::NewProp_TraceClassToConstruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestCollisionManagerComponent_ConstructTraceOfClass_Statics::NewProp_CreatedTraceObject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestCollisionManagerComponent_ConstructTraceOfClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Collision Base Functions" },
		{ "ModuleRelativePath", "Public/Components/TempestCollisionManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestCollisionManagerComponent_ConstructTraceOfClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestCollisionManagerComponent, nullptr, "ConstructTraceOfClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTempestCollisionManagerComponent_ConstructTraceOfClass_Statics::TempestCollisionManagerComponent_eventConstructTraceOfClass_Parms), Z_Construct_UFunction_UTempestCollisionManagerComponent_ConstructTraceOfClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestCollisionManagerComponent_ConstructTraceOfClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestCollisionManagerComponent_ConstructTraceOfClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestCollisionManagerComponent_ConstructTraceOfClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestCollisionManagerComponent_ConstructTraceOfClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestCollisionManagerComponent_ConstructTraceOfClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestCollisionManagerComponent_GetTraceByClass_Statics
	{
		struct TempestCollisionManagerComponent_eventGetTraceByClass_Parms
		{
			TSubclassOf<UTempestBaseTraceObject>  TraceToFind;
			UTempestBaseTraceObject* FoundTrace;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_TraceToFind;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FoundTrace;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UTempestCollisionManagerComponent_GetTraceByClass_Statics::NewProp_TraceToFind = { "TraceToFind", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestCollisionManagerComponent_eventGetTraceByClass_Parms, TraceToFind), Z_Construct_UClass_UClass, Z_Construct_UClass_UTempestBaseTraceObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTempestCollisionManagerComponent_GetTraceByClass_Statics::NewProp_FoundTrace = { "FoundTrace", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestCollisionManagerComponent_eventGetTraceByClass_Parms, FoundTrace), Z_Construct_UClass_UTempestBaseTraceObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestCollisionManagerComponent_GetTraceByClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestCollisionManagerComponent_GetTraceByClass_Statics::NewProp_TraceToFind,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestCollisionManagerComponent_GetTraceByClass_Statics::NewProp_FoundTrace,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestCollisionManagerComponent_GetTraceByClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Collision Base Functions" },
		{ "ModuleRelativePath", "Public/Components/TempestCollisionManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestCollisionManagerComponent_GetTraceByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestCollisionManagerComponent, nullptr, "GetTraceByClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTempestCollisionManagerComponent_GetTraceByClass_Statics::TempestCollisionManagerComponent_eventGetTraceByClass_Parms), Z_Construct_UFunction_UTempestCollisionManagerComponent_GetTraceByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestCollisionManagerComponent_GetTraceByClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestCollisionManagerComponent_GetTraceByClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestCollisionManagerComponent_GetTraceByClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestCollisionManagerComponent_GetTraceByClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestCollisionManagerComponent_GetTraceByClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestCollisionManagerComponent_GetTraceOfGameplayTag_Statics
	{
		struct TempestCollisionManagerComponent_eventGetTraceOfGameplayTag_Parms
		{
			FGameplayTag TraceToFind;
			UTempestBaseTraceObject* FoundTrace;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_TraceToFind;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FoundTrace;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTempestCollisionManagerComponent_GetTraceOfGameplayTag_Statics::NewProp_TraceToFind = { "TraceToFind", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestCollisionManagerComponent_eventGetTraceOfGameplayTag_Parms, TraceToFind), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTempestCollisionManagerComponent_GetTraceOfGameplayTag_Statics::NewProp_FoundTrace = { "FoundTrace", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestCollisionManagerComponent_eventGetTraceOfGameplayTag_Parms, FoundTrace), Z_Construct_UClass_UTempestBaseTraceObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestCollisionManagerComponent_GetTraceOfGameplayTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestCollisionManagerComponent_GetTraceOfGameplayTag_Statics::NewProp_TraceToFind,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestCollisionManagerComponent_GetTraceOfGameplayTag_Statics::NewProp_FoundTrace,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestCollisionManagerComponent_GetTraceOfGameplayTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Collision Base Functions" },
		{ "ModuleRelativePath", "Public/Components/TempestCollisionManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestCollisionManagerComponent_GetTraceOfGameplayTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestCollisionManagerComponent, nullptr, "GetTraceOfGameplayTag", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTempestCollisionManagerComponent_GetTraceOfGameplayTag_Statics::TempestCollisionManagerComponent_eventGetTraceOfGameplayTag_Parms), Z_Construct_UFunction_UTempestCollisionManagerComponent_GetTraceOfGameplayTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestCollisionManagerComponent_GetTraceOfGameplayTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestCollisionManagerComponent_GetTraceOfGameplayTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestCollisionManagerComponent_GetTraceOfGameplayTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestCollisionManagerComponent_GetTraceOfGameplayTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestCollisionManagerComponent_GetTraceOfGameplayTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestCollisionManagerComponent_RemoveTraceFromActiveTraces_Statics
	{
		struct TempestCollisionManagerComponent_eventRemoveTraceFromActiveTraces_Parms
		{
			UTempestBaseTraceObject* TraceToRemove;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TraceToRemove;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTempestCollisionManagerComponent_RemoveTraceFromActiveTraces_Statics::NewProp_TraceToRemove = { "TraceToRemove", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestCollisionManagerComponent_eventRemoveTraceFromActiveTraces_Parms, TraceToRemove), Z_Construct_UClass_UTempestBaseTraceObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestCollisionManagerComponent_RemoveTraceFromActiveTraces_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestCollisionManagerComponent_RemoveTraceFromActiveTraces_Statics::NewProp_TraceToRemove,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestCollisionManagerComponent_RemoveTraceFromActiveTraces_Statics::Function_MetaDataParams[] = {
		{ "Category", "Collision Base Functions" },
		{ "ModuleRelativePath", "Public/Components/TempestCollisionManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestCollisionManagerComponent_RemoveTraceFromActiveTraces_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestCollisionManagerComponent, nullptr, "RemoveTraceFromActiveTraces", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTempestCollisionManagerComponent_RemoveTraceFromActiveTraces_Statics::TempestCollisionManagerComponent_eventRemoveTraceFromActiveTraces_Parms), Z_Construct_UFunction_UTempestCollisionManagerComponent_RemoveTraceFromActiveTraces_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestCollisionManagerComponent_RemoveTraceFromActiveTraces_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestCollisionManagerComponent_RemoveTraceFromActiveTraces_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestCollisionManagerComponent_RemoveTraceFromActiveTraces_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestCollisionManagerComponent_RemoveTraceFromActiveTraces()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestCollisionManagerComponent_RemoveTraceFromActiveTraces_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestCollisionManagerComponent_RemoveTraceFromCreatedTraces_Statics
	{
		struct TempestCollisionManagerComponent_eventRemoveTraceFromCreatedTraces_Parms
		{
			UTempestBaseTraceObject* TraceToRemove;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TraceToRemove;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTempestCollisionManagerComponent_RemoveTraceFromCreatedTraces_Statics::NewProp_TraceToRemove = { "TraceToRemove", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestCollisionManagerComponent_eventRemoveTraceFromCreatedTraces_Parms, TraceToRemove), Z_Construct_UClass_UTempestBaseTraceObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestCollisionManagerComponent_RemoveTraceFromCreatedTraces_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestCollisionManagerComponent_RemoveTraceFromCreatedTraces_Statics::NewProp_TraceToRemove,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestCollisionManagerComponent_RemoveTraceFromCreatedTraces_Statics::Function_MetaDataParams[] = {
		{ "Category", "Collision Base Functions" },
		{ "ModuleRelativePath", "Public/Components/TempestCollisionManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestCollisionManagerComponent_RemoveTraceFromCreatedTraces_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestCollisionManagerComponent, nullptr, "RemoveTraceFromCreatedTraces", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTempestCollisionManagerComponent_RemoveTraceFromCreatedTraces_Statics::TempestCollisionManagerComponent_eventRemoveTraceFromCreatedTraces_Parms), Z_Construct_UFunction_UTempestCollisionManagerComponent_RemoveTraceFromCreatedTraces_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestCollisionManagerComponent_RemoveTraceFromCreatedTraces_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestCollisionManagerComponent_RemoveTraceFromCreatedTraces_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestCollisionManagerComponent_RemoveTraceFromCreatedTraces_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestCollisionManagerComponent_RemoveTraceFromCreatedTraces()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestCollisionManagerComponent_RemoveTraceFromCreatedTraces_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTempestCollisionManagerComponent);
	UClass* Z_Construct_UClass_UTempestCollisionManagerComponent_NoRegister()
	{
		return UTempestCollisionManagerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTempestCollisionManagerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveTraceObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveTraceObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveTraceObjects;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CreatedTraceObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CreatedTraceObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CreatedTraceObjects;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTempestCollisionManagerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TempestCombatFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTempestCollisionManagerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTempestCollisionManagerComponent_AddTraceToActiveTraces, "AddTraceToActiveTraces" }, // 1758061208
		{ &Z_Construct_UFunction_UTempestCollisionManagerComponent_ClearAvailableTraceObjects, "ClearAvailableTraceObjects" }, // 2174318293
		{ &Z_Construct_UFunction_UTempestCollisionManagerComponent_ConstructTraceOfClass, "ConstructTraceOfClass" }, // 2601112860
		{ &Z_Construct_UFunction_UTempestCollisionManagerComponent_GetTraceByClass, "GetTraceByClass" }, // 1485541139
		{ &Z_Construct_UFunction_UTempestCollisionManagerComponent_GetTraceOfGameplayTag, "GetTraceOfGameplayTag" }, // 429636059
		{ &Z_Construct_UFunction_UTempestCollisionManagerComponent_RemoveTraceFromActiveTraces, "RemoveTraceFromActiveTraces" }, // 3745691159
		{ &Z_Construct_UFunction_UTempestCollisionManagerComponent_RemoveTraceFromCreatedTraces, "RemoveTraceFromCreatedTraces" }, // 3329896653
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTempestCollisionManagerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/TempestCollisionManagerComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/TempestCollisionManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTempestCollisionManagerComponent_Statics::NewProp_ActiveTraceObjects_Inner = { "ActiveTraceObjects", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UTempestBaseTraceObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTempestCollisionManagerComponent_Statics::NewProp_ActiveTraceObjects_MetaData[] = {
		{ "Category", "Traces Info" },
		{ "ModuleRelativePath", "Public/Components/TempestCollisionManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTempestCollisionManagerComponent_Statics::NewProp_ActiveTraceObjects = { "ActiveTraceObjects", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTempestCollisionManagerComponent, ActiveTraceObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTempestCollisionManagerComponent_Statics::NewProp_ActiveTraceObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTempestCollisionManagerComponent_Statics::NewProp_ActiveTraceObjects_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTempestCollisionManagerComponent_Statics::NewProp_CreatedTraceObjects_Inner = { "CreatedTraceObjects", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UTempestBaseTraceObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTempestCollisionManagerComponent_Statics::NewProp_CreatedTraceObjects_MetaData[] = {
		{ "Category", "Traces Info" },
		{ "ModuleRelativePath", "Public/Components/TempestCollisionManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTempestCollisionManagerComponent_Statics::NewProp_CreatedTraceObjects = { "CreatedTraceObjects", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTempestCollisionManagerComponent, CreatedTraceObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTempestCollisionManagerComponent_Statics::NewProp_CreatedTraceObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTempestCollisionManagerComponent_Statics::NewProp_CreatedTraceObjects_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTempestCollisionManagerComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTempestCollisionManagerComponent_Statics::NewProp_ActiveTraceObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTempestCollisionManagerComponent_Statics::NewProp_ActiveTraceObjects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTempestCollisionManagerComponent_Statics::NewProp_CreatedTraceObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTempestCollisionManagerComponent_Statics::NewProp_CreatedTraceObjects,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTempestCollisionManagerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTempestCollisionManagerComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTempestCollisionManagerComponent_Statics::ClassParams = {
		&UTempestCollisionManagerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTempestCollisionManagerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTempestCollisionManagerComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTempestCollisionManagerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTempestCollisionManagerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTempestCollisionManagerComponent()
	{
		if (!Z_Registration_Info_UClass_UTempestCollisionManagerComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTempestCollisionManagerComponent.OuterSingleton, Z_Construct_UClass_UTempestCollisionManagerComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTempestCollisionManagerComponent.OuterSingleton;
	}
	template<> TEMPESTCOMBATFRAMEWORK_API UClass* StaticClass<UTempestCollisionManagerComponent>()
	{
		return UTempestCollisionManagerComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTempestCollisionManagerComponent);
	UTempestCollisionManagerComponent::~UTempestCollisionManagerComponent() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Components_TempestCollisionManagerComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Components_TempestCollisionManagerComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTempestCollisionManagerComponent, UTempestCollisionManagerComponent::StaticClass, TEXT("UTempestCollisionManagerComponent"), &Z_Registration_Info_UClass_UTempestCollisionManagerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTempestCollisionManagerComponent), 4196319942U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Components_TempestCollisionManagerComponent_h_2773365168(TEXT("/Script/TempestCombatFramework"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Components_TempestCollisionManagerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Components_TempestCollisionManagerComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
