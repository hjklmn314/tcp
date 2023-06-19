// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TempestCombatFramework/Public/Objects/TempestAttackPropertiesObject.h"
#include "Engine/Classes/Engine/HitResult.h"
#include "GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTempestAttackPropertiesObject() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	TEMPESTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UTempestAttackPropertiesObject();
	TEMPESTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UTempestAttackPropertiesObject_NoRegister();
	TEMPESTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UTempestBaseObject();
	UPackage* Z_Construct_UPackage__Script_TempestCombatFramework();
// End Cross Module References
	DEFINE_FUNCTION(UTempestAttackPropertiesObject::execSetImpactResult)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_NewImpactResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetImpactResult(Z_Param_NewImpactResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTempestAttackPropertiesObject::execGetImpactResult)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayTag*)Z_Param__Result=P_THIS->GetImpactResult();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTempestAttackPropertiesObject::execSetHitResult)
	{
		P_GET_STRUCT(FHitResult,Z_Param_NewHitResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHitResult(Z_Param_NewHitResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTempestAttackPropertiesObject::execGetHitResult)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FHitResult*)Z_Param__Result=P_THIS->GetHitResult();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTempestAttackPropertiesObject::execSetAttackPropertyOwner)
	{
		P_GET_OBJECT(AActor,Z_Param_NewAttacker);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAttackPropertyOwner(Z_Param_NewAttacker);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTempestAttackPropertiesObject::execGetAttackPropertyOwner)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetAttackPropertyOwner();
		P_NATIVE_END;
	}
	static FName NAME_UTempestAttackPropertiesObject_ConstructAttackPropertry = FName(TEXT("ConstructAttackPropertry"));
	void UTempestAttackPropertiesObject::ConstructAttackPropertry()
	{
		ProcessEvent(FindFunctionChecked(NAME_UTempestAttackPropertiesObject_ConstructAttackPropertry),NULL);
	}
	static FName NAME_UTempestAttackPropertiesObject_ProcessAttackPropertry = FName(TEXT("ProcessAttackPropertry"));
	void UTempestAttackPropertiesObject::ProcessAttackPropertry()
	{
		ProcessEvent(FindFunctionChecked(NAME_UTempestAttackPropertiesObject_ProcessAttackPropertry),NULL);
	}
	void UTempestAttackPropertiesObject::StaticRegisterNativesUTempestAttackPropertiesObject()
	{
		UClass* Class = UTempestAttackPropertiesObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAttackPropertyOwner", &UTempestAttackPropertiesObject::execGetAttackPropertyOwner },
			{ "GetHitResult", &UTempestAttackPropertiesObject::execGetHitResult },
			{ "GetImpactResult", &UTempestAttackPropertiesObject::execGetImpactResult },
			{ "SetAttackPropertyOwner", &UTempestAttackPropertiesObject::execSetAttackPropertyOwner },
			{ "SetHitResult", &UTempestAttackPropertiesObject::execSetHitResult },
			{ "SetImpactResult", &UTempestAttackPropertiesObject::execSetImpactResult },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTempestAttackPropertiesObject_ConstructAttackPropertry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestAttackPropertiesObject_ConstructAttackPropertry_Statics::Function_MetaDataParams[] = {
		{ "Category", "Base Functions" },
		{ "ModuleRelativePath", "Public/Objects/TempestAttackPropertiesObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestAttackPropertiesObject_ConstructAttackPropertry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestAttackPropertiesObject, nullptr, "ConstructAttackPropertry", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestAttackPropertiesObject_ConstructAttackPropertry_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestAttackPropertiesObject_ConstructAttackPropertry_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestAttackPropertiesObject_ConstructAttackPropertry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestAttackPropertiesObject_ConstructAttackPropertry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestAttackPropertiesObject_GetAttackPropertyOwner_Statics
	{
		struct TempestAttackPropertiesObject_eventGetAttackPropertyOwner_Parms
		{
			AActor* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTempestAttackPropertiesObject_GetAttackPropertyOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestAttackPropertiesObject_eventGetAttackPropertyOwner_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestAttackPropertiesObject_GetAttackPropertyOwner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestAttackPropertiesObject_GetAttackPropertyOwner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestAttackPropertiesObject_GetAttackPropertyOwner_Statics::Function_MetaDataParams[] = {
		{ "Category", "Base Functions" },
		{ "ModuleRelativePath", "Public/Objects/TempestAttackPropertiesObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestAttackPropertiesObject_GetAttackPropertyOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestAttackPropertiesObject, nullptr, "GetAttackPropertyOwner", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTempestAttackPropertiesObject_GetAttackPropertyOwner_Statics::TempestAttackPropertiesObject_eventGetAttackPropertyOwner_Parms), Z_Construct_UFunction_UTempestAttackPropertiesObject_GetAttackPropertyOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestAttackPropertiesObject_GetAttackPropertyOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestAttackPropertiesObject_GetAttackPropertyOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestAttackPropertiesObject_GetAttackPropertyOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestAttackPropertiesObject_GetAttackPropertyOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestAttackPropertiesObject_GetAttackPropertyOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestAttackPropertiesObject_GetHitResult_Statics
	{
		struct TempestAttackPropertiesObject_eventGetHitResult_Parms
		{
			FHitResult ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTempestAttackPropertiesObject_GetHitResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestAttackPropertiesObject_eventGetHitResult_Parms, ReturnValue), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) }; // 1287526515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestAttackPropertiesObject_GetHitResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestAttackPropertiesObject_GetHitResult_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestAttackPropertiesObject_GetHitResult_Statics::Function_MetaDataParams[] = {
		{ "Category", "Base Functions" },
		{ "ModuleRelativePath", "Public/Objects/TempestAttackPropertiesObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestAttackPropertiesObject_GetHitResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestAttackPropertiesObject, nullptr, "GetHitResult", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTempestAttackPropertiesObject_GetHitResult_Statics::TempestAttackPropertiesObject_eventGetHitResult_Parms), Z_Construct_UFunction_UTempestAttackPropertiesObject_GetHitResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestAttackPropertiesObject_GetHitResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestAttackPropertiesObject_GetHitResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestAttackPropertiesObject_GetHitResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestAttackPropertiesObject_GetHitResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestAttackPropertiesObject_GetHitResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestAttackPropertiesObject_GetImpactResult_Statics
	{
		struct TempestAttackPropertiesObject_eventGetImpactResult_Parms
		{
			FGameplayTag ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTempestAttackPropertiesObject_GetImpactResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestAttackPropertiesObject_eventGetImpactResult_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestAttackPropertiesObject_GetImpactResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestAttackPropertiesObject_GetImpactResult_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestAttackPropertiesObject_GetImpactResult_Statics::Function_MetaDataParams[] = {
		{ "Category", "Base Functions" },
		{ "ModuleRelativePath", "Public/Objects/TempestAttackPropertiesObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestAttackPropertiesObject_GetImpactResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestAttackPropertiesObject, nullptr, "GetImpactResult", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTempestAttackPropertiesObject_GetImpactResult_Statics::TempestAttackPropertiesObject_eventGetImpactResult_Parms), Z_Construct_UFunction_UTempestAttackPropertiesObject_GetImpactResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestAttackPropertiesObject_GetImpactResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestAttackPropertiesObject_GetImpactResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestAttackPropertiesObject_GetImpactResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestAttackPropertiesObject_GetImpactResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestAttackPropertiesObject_GetImpactResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestAttackPropertiesObject_ProcessAttackPropertry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestAttackPropertiesObject_ProcessAttackPropertry_Statics::Function_MetaDataParams[] = {
		{ "Category", "Base Functions" },
		{ "ModuleRelativePath", "Public/Objects/TempestAttackPropertiesObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestAttackPropertiesObject_ProcessAttackPropertry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestAttackPropertiesObject, nullptr, "ProcessAttackPropertry", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestAttackPropertiesObject_ProcessAttackPropertry_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestAttackPropertiesObject_ProcessAttackPropertry_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestAttackPropertiesObject_ProcessAttackPropertry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestAttackPropertiesObject_ProcessAttackPropertry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestAttackPropertiesObject_SetAttackPropertyOwner_Statics
	{
		struct TempestAttackPropertiesObject_eventSetAttackPropertyOwner_Parms
		{
			AActor* NewAttacker;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewAttacker;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTempestAttackPropertiesObject_SetAttackPropertyOwner_Statics::NewProp_NewAttacker = { "NewAttacker", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestAttackPropertiesObject_eventSetAttackPropertyOwner_Parms, NewAttacker), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestAttackPropertiesObject_SetAttackPropertyOwner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestAttackPropertiesObject_SetAttackPropertyOwner_Statics::NewProp_NewAttacker,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestAttackPropertiesObject_SetAttackPropertyOwner_Statics::Function_MetaDataParams[] = {
		{ "Category", "Base Functions" },
		{ "ModuleRelativePath", "Public/Objects/TempestAttackPropertiesObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestAttackPropertiesObject_SetAttackPropertyOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestAttackPropertiesObject, nullptr, "SetAttackPropertyOwner", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTempestAttackPropertiesObject_SetAttackPropertyOwner_Statics::TempestAttackPropertiesObject_eventSetAttackPropertyOwner_Parms), Z_Construct_UFunction_UTempestAttackPropertiesObject_SetAttackPropertyOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestAttackPropertiesObject_SetAttackPropertyOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestAttackPropertiesObject_SetAttackPropertyOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestAttackPropertiesObject_SetAttackPropertyOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestAttackPropertiesObject_SetAttackPropertyOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestAttackPropertiesObject_SetAttackPropertyOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestAttackPropertiesObject_SetHitResult_Statics
	{
		struct TempestAttackPropertiesObject_eventSetHitResult_Parms
		{
			FHitResult NewHitResult;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewHitResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTempestAttackPropertiesObject_SetHitResult_Statics::NewProp_NewHitResult = { "NewHitResult", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestAttackPropertiesObject_eventSetHitResult_Parms, NewHitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) }; // 1287526515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestAttackPropertiesObject_SetHitResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestAttackPropertiesObject_SetHitResult_Statics::NewProp_NewHitResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestAttackPropertiesObject_SetHitResult_Statics::Function_MetaDataParams[] = {
		{ "Category", "Base Functions" },
		{ "ModuleRelativePath", "Public/Objects/TempestAttackPropertiesObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestAttackPropertiesObject_SetHitResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestAttackPropertiesObject, nullptr, "SetHitResult", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTempestAttackPropertiesObject_SetHitResult_Statics::TempestAttackPropertiesObject_eventSetHitResult_Parms), Z_Construct_UFunction_UTempestAttackPropertiesObject_SetHitResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestAttackPropertiesObject_SetHitResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestAttackPropertiesObject_SetHitResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestAttackPropertiesObject_SetHitResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestAttackPropertiesObject_SetHitResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestAttackPropertiesObject_SetHitResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestAttackPropertiesObject_SetImpactResult_Statics
	{
		struct TempestAttackPropertiesObject_eventSetImpactResult_Parms
		{
			FGameplayTag NewImpactResult;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewImpactResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTempestAttackPropertiesObject_SetImpactResult_Statics::NewProp_NewImpactResult = { "NewImpactResult", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestAttackPropertiesObject_eventSetImpactResult_Parms, NewImpactResult), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestAttackPropertiesObject_SetImpactResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestAttackPropertiesObject_SetImpactResult_Statics::NewProp_NewImpactResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestAttackPropertiesObject_SetImpactResult_Statics::Function_MetaDataParams[] = {
		{ "Category", "Base Functions" },
		{ "ModuleRelativePath", "Public/Objects/TempestAttackPropertiesObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestAttackPropertiesObject_SetImpactResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestAttackPropertiesObject, nullptr, "SetImpactResult", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTempestAttackPropertiesObject_SetImpactResult_Statics::TempestAttackPropertiesObject_eventSetImpactResult_Parms), Z_Construct_UFunction_UTempestAttackPropertiesObject_SetImpactResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestAttackPropertiesObject_SetImpactResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestAttackPropertiesObject_SetImpactResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestAttackPropertiesObject_SetImpactResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestAttackPropertiesObject_SetImpactResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestAttackPropertiesObject_SetImpactResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTempestAttackPropertiesObject);
	UClass* Z_Construct_UClass_UTempestAttackPropertiesObject_NoRegister()
	{
		return UTempestAttackPropertiesObject::StaticClass();
	}
	struct Z_Construct_UClass_UTempestAttackPropertiesObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackPropertyOwner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackPropertyOwner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitResult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImpactResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ImpactResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTempestAttackPropertiesObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTempestBaseObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TempestCombatFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTempestAttackPropertiesObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTempestAttackPropertiesObject_ConstructAttackPropertry, "ConstructAttackPropertry" }, // 1748543192
		{ &Z_Construct_UFunction_UTempestAttackPropertiesObject_GetAttackPropertyOwner, "GetAttackPropertyOwner" }, // 924633556
		{ &Z_Construct_UFunction_UTempestAttackPropertiesObject_GetHitResult, "GetHitResult" }, // 2822350198
		{ &Z_Construct_UFunction_UTempestAttackPropertiesObject_GetImpactResult, "GetImpactResult" }, // 1897345652
		{ &Z_Construct_UFunction_UTempestAttackPropertiesObject_ProcessAttackPropertry, "ProcessAttackPropertry" }, // 1299673084
		{ &Z_Construct_UFunction_UTempestAttackPropertiesObject_SetAttackPropertyOwner, "SetAttackPropertyOwner" }, // 3714714782
		{ &Z_Construct_UFunction_UTempestAttackPropertiesObject_SetHitResult, "SetHitResult" }, // 1141587638
		{ &Z_Construct_UFunction_UTempestAttackPropertiesObject_SetImpactResult, "SetImpactResult" }, // 2114312323
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTempestAttackPropertiesObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Objects/TempestAttackPropertiesObject.h" },
		{ "ModuleRelativePath", "Public/Objects/TempestAttackPropertiesObject.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTempestAttackPropertiesObject_Statics::NewProp_AttackPropertyOwner_MetaData[] = {
		{ "ModuleRelativePath", "Public/Objects/TempestAttackPropertiesObject.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTempestAttackPropertiesObject_Statics::NewProp_AttackPropertyOwner = { "AttackPropertyOwner", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTempestAttackPropertiesObject, AttackPropertyOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTempestAttackPropertiesObject_Statics::NewProp_AttackPropertyOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTempestAttackPropertiesObject_Statics::NewProp_AttackPropertyOwner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTempestAttackPropertiesObject_Statics::NewProp_HitResult_MetaData[] = {
		{ "ModuleRelativePath", "Public/Objects/TempestAttackPropertiesObject.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTempestAttackPropertiesObject_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTempestAttackPropertiesObject, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_UTempestAttackPropertiesObject_Statics::NewProp_HitResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTempestAttackPropertiesObject_Statics::NewProp_HitResult_MetaData)) }; // 1287526515
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTempestAttackPropertiesObject_Statics::NewProp_ImpactResult_MetaData[] = {
		{ "ModuleRelativePath", "Public/Objects/TempestAttackPropertiesObject.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTempestAttackPropertiesObject_Statics::NewProp_ImpactResult = { "ImpactResult", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTempestAttackPropertiesObject, ImpactResult), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_UTempestAttackPropertiesObject_Statics::NewProp_ImpactResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTempestAttackPropertiesObject_Statics::NewProp_ImpactResult_MetaData)) }; // 1225434376
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTempestAttackPropertiesObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTempestAttackPropertiesObject_Statics::NewProp_AttackPropertyOwner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTempestAttackPropertiesObject_Statics::NewProp_HitResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTempestAttackPropertiesObject_Statics::NewProp_ImpactResult,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTempestAttackPropertiesObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTempestAttackPropertiesObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTempestAttackPropertiesObject_Statics::ClassParams = {
		&UTempestAttackPropertiesObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTempestAttackPropertiesObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTempestAttackPropertiesObject_Statics::PropPointers),
		0,
		0x009010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UTempestAttackPropertiesObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTempestAttackPropertiesObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTempestAttackPropertiesObject()
	{
		if (!Z_Registration_Info_UClass_UTempestAttackPropertiesObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTempestAttackPropertiesObject.OuterSingleton, Z_Construct_UClass_UTempestAttackPropertiesObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTempestAttackPropertiesObject.OuterSingleton;
	}
	template<> TEMPESTCOMBATFRAMEWORK_API UClass* StaticClass<UTempestAttackPropertiesObject>()
	{
		return UTempestAttackPropertiesObject::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTempestAttackPropertiesObject);
	UTempestAttackPropertiesObject::~UTempestAttackPropertiesObject() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Objects_TempestAttackPropertiesObject_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Objects_TempestAttackPropertiesObject_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTempestAttackPropertiesObject, UTempestAttackPropertiesObject::StaticClass, TEXT("UTempestAttackPropertiesObject"), &Z_Registration_Info_UClass_UTempestAttackPropertiesObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTempestAttackPropertiesObject), 4071810643U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Objects_TempestAttackPropertiesObject_h_3072052588(TEXT("/Script/TempestCombatFramework"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Objects_TempestAttackPropertiesObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Objects_TempestAttackPropertiesObject_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
