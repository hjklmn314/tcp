// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TempestCombatFramework/Public/Objects/TempestBaseTraceObject.h"
#include "Engine/Classes/Engine/HitResult.h"
#include "GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTempestBaseTraceObject() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	TEMPESTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UTempestAttackPropertiesObject_NoRegister();
	TEMPESTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UTempestBaseObject();
	TEMPESTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UTempestBaseTraceObject();
	TEMPESTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UTempestBaseTraceObject_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TempestCombatFramework();
// End Cross Module References
	DEFINE_FUNCTION(UTempestBaseTraceObject::execDoCollisionTrace)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DoCollisionTrace_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTempestBaseTraceObject::execConstructAttackPropertyOfObject)
	{
		P_GET_OBJECT(UTempestAttackPropertiesObject,Z_Param_AttackPropertyToAssign);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ConstructAttackPropertyOfObject(Z_Param_AttackPropertyToAssign);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTempestBaseTraceObject::execSetTraceMeshInfo)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_NewPrimitiveComponent);
		P_GET_TARRAY(FName,Z_Param_PrimitiveComponentSocketNames);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTraceMeshInfo(Z_Param_NewPrimitiveComponent,Z_Param_PrimitiveComponentSocketNames);
		P_NATIVE_END;
	}
	struct TempestBaseTraceObject_eventOnTraceHit_Parms
	{
		FHitResult HitResult;
	};
	struct TempestBaseTraceObject_eventTickTrace_Parms
	{
		float DeltaSeconds;
	};
	struct TempestBaseTraceObject_eventToggleTrace_Parms
	{
		bool bToggle;
	};
	static FName NAME_UTempestBaseTraceObject_ConstructTrace = FName(TEXT("ConstructTrace"));
	void UTempestBaseTraceObject::ConstructTrace()
	{
		ProcessEvent(FindFunctionChecked(NAME_UTempestBaseTraceObject_ConstructTrace),NULL);
	}
	static FName NAME_UTempestBaseTraceObject_DoCollisionTrace = FName(TEXT("DoCollisionTrace"));
	void UTempestBaseTraceObject::DoCollisionTrace()
	{
		ProcessEvent(FindFunctionChecked(NAME_UTempestBaseTraceObject_DoCollisionTrace),NULL);
	}
	static FName NAME_UTempestBaseTraceObject_OnTraceHit = FName(TEXT("OnTraceHit"));
	void UTempestBaseTraceObject::OnTraceHit(FHitResult HitResult)
	{
		TempestBaseTraceObject_eventOnTraceHit_Parms Parms;
		Parms.HitResult=HitResult;
		ProcessEvent(FindFunctionChecked(NAME_UTempestBaseTraceObject_OnTraceHit),&Parms);
	}
	static FName NAME_UTempestBaseTraceObject_TickTrace = FName(TEXT("TickTrace"));
	void UTempestBaseTraceObject::TickTrace(float DeltaSeconds)
	{
		TempestBaseTraceObject_eventTickTrace_Parms Parms;
		Parms.DeltaSeconds=DeltaSeconds;
		ProcessEvent(FindFunctionChecked(NAME_UTempestBaseTraceObject_TickTrace),&Parms);
	}
	static FName NAME_UTempestBaseTraceObject_ToggleTrace = FName(TEXT("ToggleTrace"));
	void UTempestBaseTraceObject::ToggleTrace(bool bToggle)
	{
		TempestBaseTraceObject_eventToggleTrace_Parms Parms;
		Parms.bToggle=bToggle ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UTempestBaseTraceObject_ToggleTrace),&Parms);
	}
	void UTempestBaseTraceObject::StaticRegisterNativesUTempestBaseTraceObject()
	{
		UClass* Class = UTempestBaseTraceObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConstructAttackPropertyOfObject", &UTempestBaseTraceObject::execConstructAttackPropertyOfObject },
			{ "DoCollisionTrace", &UTempestBaseTraceObject::execDoCollisionTrace },
			{ "SetTraceMeshInfo", &UTempestBaseTraceObject::execSetTraceMeshInfo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTempestBaseTraceObject_ConstructAttackPropertyOfObject_Statics
	{
		struct TempestBaseTraceObject_eventConstructAttackPropertyOfObject_Parms
		{
			UTempestAttackPropertiesObject* AttackPropertyToAssign;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackPropertyToAssign;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTempestBaseTraceObject_ConstructAttackPropertyOfObject_Statics::NewProp_AttackPropertyToAssign = { "AttackPropertyToAssign", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestBaseTraceObject_eventConstructAttackPropertyOfObject_Parms, AttackPropertyToAssign), Z_Construct_UClass_UTempestAttackPropertiesObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestBaseTraceObject_ConstructAttackPropertyOfObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestBaseTraceObject_ConstructAttackPropertyOfObject_Statics::NewProp_AttackPropertyToAssign,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestBaseTraceObject_ConstructAttackPropertyOfObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Base Functions" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseTraceObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestBaseTraceObject_ConstructAttackPropertyOfObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestBaseTraceObject, nullptr, "ConstructAttackPropertyOfObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTempestBaseTraceObject_ConstructAttackPropertyOfObject_Statics::TempestBaseTraceObject_eventConstructAttackPropertyOfObject_Parms), Z_Construct_UFunction_UTempestBaseTraceObject_ConstructAttackPropertyOfObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseTraceObject_ConstructAttackPropertyOfObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestBaseTraceObject_ConstructAttackPropertyOfObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseTraceObject_ConstructAttackPropertyOfObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestBaseTraceObject_ConstructAttackPropertyOfObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestBaseTraceObject_ConstructAttackPropertyOfObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestBaseTraceObject_ConstructTrace_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestBaseTraceObject_ConstructTrace_Statics::Function_MetaDataParams[] = {
		{ "Category", "Trace Base Functions" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseTraceObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestBaseTraceObject_ConstructTrace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestBaseTraceObject, nullptr, "ConstructTrace", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestBaseTraceObject_ConstructTrace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseTraceObject_ConstructTrace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestBaseTraceObject_ConstructTrace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestBaseTraceObject_ConstructTrace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestBaseTraceObject_DoCollisionTrace_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestBaseTraceObject_DoCollisionTrace_Statics::Function_MetaDataParams[] = {
		{ "Category", "Base Functions" },
		{ "Comment", "/* This function is the function that fires the sphere trace */" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseTraceObject.h" },
		{ "ToolTip", "This function is the function that fires the sphere trace" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestBaseTraceObject_DoCollisionTrace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestBaseTraceObject, nullptr, "DoCollisionTrace", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestBaseTraceObject_DoCollisionTrace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseTraceObject_DoCollisionTrace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestBaseTraceObject_DoCollisionTrace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestBaseTraceObject_DoCollisionTrace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestBaseTraceObject_OnTraceHit_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTempestBaseTraceObject_OnTraceHit_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestBaseTraceObject_eventOnTraceHit_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) }; // 1287526515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestBaseTraceObject_OnTraceHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestBaseTraceObject_OnTraceHit_Statics::NewProp_HitResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestBaseTraceObject_OnTraceHit_Statics::Function_MetaDataParams[] = {
		{ "Category", "Base Functions" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseTraceObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestBaseTraceObject_OnTraceHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestBaseTraceObject, nullptr, "OnTraceHit", nullptr, nullptr, sizeof(TempestBaseTraceObject_eventOnTraceHit_Parms), Z_Construct_UFunction_UTempestBaseTraceObject_OnTraceHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseTraceObject_OnTraceHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestBaseTraceObject_OnTraceHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseTraceObject_OnTraceHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestBaseTraceObject_OnTraceHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestBaseTraceObject_OnTraceHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestBaseTraceObject_SetTraceMeshInfo_Statics
	{
		struct TempestBaseTraceObject_eventSetTraceMeshInfo_Parms
		{
			UPrimitiveComponent* NewPrimitiveComponent;
			TArray<FName> PrimitiveComponentSocketNames;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewPrimitiveComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewPrimitiveComponent;
		static const UECodeGen_Private::FNamePropertyParams NewProp_PrimitiveComponentSocketNames_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PrimitiveComponentSocketNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestBaseTraceObject_SetTraceMeshInfo_Statics::NewProp_NewPrimitiveComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTempestBaseTraceObject_SetTraceMeshInfo_Statics::NewProp_NewPrimitiveComponent = { "NewPrimitiveComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestBaseTraceObject_eventSetTraceMeshInfo_Parms, NewPrimitiveComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTempestBaseTraceObject_SetTraceMeshInfo_Statics::NewProp_NewPrimitiveComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseTraceObject_SetTraceMeshInfo_Statics::NewProp_NewPrimitiveComponent_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTempestBaseTraceObject_SetTraceMeshInfo_Statics::NewProp_PrimitiveComponentSocketNames_Inner = { "PrimitiveComponentSocketNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTempestBaseTraceObject_SetTraceMeshInfo_Statics::NewProp_PrimitiveComponentSocketNames = { "PrimitiveComponentSocketNames", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestBaseTraceObject_eventSetTraceMeshInfo_Parms, PrimitiveComponentSocketNames), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestBaseTraceObject_SetTraceMeshInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestBaseTraceObject_SetTraceMeshInfo_Statics::NewProp_NewPrimitiveComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestBaseTraceObject_SetTraceMeshInfo_Statics::NewProp_PrimitiveComponentSocketNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestBaseTraceObject_SetTraceMeshInfo_Statics::NewProp_PrimitiveComponentSocketNames,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestBaseTraceObject_SetTraceMeshInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Base Functions" },
		{ "Comment", "/* Setters */" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseTraceObject.h" },
		{ "ToolTip", "Setters" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestBaseTraceObject_SetTraceMeshInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestBaseTraceObject, nullptr, "SetTraceMeshInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTempestBaseTraceObject_SetTraceMeshInfo_Statics::TempestBaseTraceObject_eventSetTraceMeshInfo_Parms), Z_Construct_UFunction_UTempestBaseTraceObject_SetTraceMeshInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseTraceObject_SetTraceMeshInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestBaseTraceObject_SetTraceMeshInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseTraceObject_SetTraceMeshInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestBaseTraceObject_SetTraceMeshInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestBaseTraceObject_SetTraceMeshInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestBaseTraceObject_TickTrace_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTempestBaseTraceObject_TickTrace_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestBaseTraceObject_eventTickTrace_Parms, DeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestBaseTraceObject_TickTrace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestBaseTraceObject_TickTrace_Statics::NewProp_DeltaSeconds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestBaseTraceObject_TickTrace_Statics::Function_MetaDataParams[] = {
		{ "Category", "Trace Base Functions" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseTraceObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestBaseTraceObject_TickTrace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestBaseTraceObject, nullptr, "TickTrace", nullptr, nullptr, sizeof(TempestBaseTraceObject_eventTickTrace_Parms), Z_Construct_UFunction_UTempestBaseTraceObject_TickTrace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseTraceObject_TickTrace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestBaseTraceObject_TickTrace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseTraceObject_TickTrace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestBaseTraceObject_TickTrace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestBaseTraceObject_TickTrace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestBaseTraceObject_ToggleTrace_Statics
	{
		static void NewProp_bToggle_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bToggle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTempestBaseTraceObject_ToggleTrace_Statics::NewProp_bToggle_SetBit(void* Obj)
	{
		((TempestBaseTraceObject_eventToggleTrace_Parms*)Obj)->bToggle = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTempestBaseTraceObject_ToggleTrace_Statics::NewProp_bToggle = { "bToggle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TempestBaseTraceObject_eventToggleTrace_Parms), &Z_Construct_UFunction_UTempestBaseTraceObject_ToggleTrace_Statics::NewProp_bToggle_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestBaseTraceObject_ToggleTrace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestBaseTraceObject_ToggleTrace_Statics::NewProp_bToggle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestBaseTraceObject_ToggleTrace_Statics::Function_MetaDataParams[] = {
		{ "Category", "Trace Base Functions" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseTraceObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestBaseTraceObject_ToggleTrace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestBaseTraceObject, nullptr, "ToggleTrace", nullptr, nullptr, sizeof(TempestBaseTraceObject_eventToggleTrace_Parms), Z_Construct_UFunction_UTempestBaseTraceObject_ToggleTrace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseTraceObject_ToggleTrace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestBaseTraceObject_ToggleTrace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseTraceObject_ToggleTrace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestBaseTraceObject_ToggleTrace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestBaseTraceObject_ToggleTrace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTempestBaseTraceObject);
	UClass* Z_Construct_UClass_UTempestBaseTraceObject_NoRegister()
	{
		return UTempestBaseTraceObject::StaticClass();
	}
	struct Z_Construct_UClass_UTempestBaseTraceObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceGameplayTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TraceGameplayTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TracePrimitiveComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TracePrimitiveComponent;
		static const UECodeGen_Private::FNamePropertyParams NewProp_TracePrimitiveComponentSocketNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TracePrimitiveComponentSocketNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TracePrimitiveComponentSocketNames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceOwner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TraceOwner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackProperty_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackProperty;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTempestBaseTraceObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTempestBaseObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TempestCombatFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTempestBaseTraceObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTempestBaseTraceObject_ConstructAttackPropertyOfObject, "ConstructAttackPropertyOfObject" }, // 3277443275
		{ &Z_Construct_UFunction_UTempestBaseTraceObject_ConstructTrace, "ConstructTrace" }, // 3334741054
		{ &Z_Construct_UFunction_UTempestBaseTraceObject_DoCollisionTrace, "DoCollisionTrace" }, // 519455072
		{ &Z_Construct_UFunction_UTempestBaseTraceObject_OnTraceHit, "OnTraceHit" }, // 1501441701
		{ &Z_Construct_UFunction_UTempestBaseTraceObject_SetTraceMeshInfo, "SetTraceMeshInfo" }, // 3745146730
		{ &Z_Construct_UFunction_UTempestBaseTraceObject_TickTrace, "TickTrace" }, // 2354258020
		{ &Z_Construct_UFunction_UTempestBaseTraceObject_ToggleTrace, "ToggleTrace" }, // 523201394
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTempestBaseTraceObject_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Initialization | Trace Info Initialization | Mesh Info Initialization | Collision Trace" },
		{ "IncludePath", "Objects/TempestBaseTraceObject.h" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseTraceObject.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTempestBaseTraceObject_Statics::NewProp_TraceGameplayTag_MetaData[] = {
		{ "Category", "Initialization | Trace Info" },
		{ "Comment", "/* Trace Information */" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseTraceObject.h" },
		{ "ToolTip", "Trace Information" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTempestBaseTraceObject_Statics::NewProp_TraceGameplayTag = { "TraceGameplayTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTempestBaseTraceObject, TraceGameplayTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_UTempestBaseTraceObject_Statics::NewProp_TraceGameplayTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTempestBaseTraceObject_Statics::NewProp_TraceGameplayTag_MetaData)) }; // 1225434376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTempestBaseTraceObject_Statics::NewProp_TracePrimitiveComponent_MetaData[] = {
		{ "Category", "Initialization | Mesh Info" },
		{ "Comment", "/* Trace Mesh Information */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseTraceObject.h" },
		{ "ToolTip", "Trace Mesh Information" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTempestBaseTraceObject_Statics::NewProp_TracePrimitiveComponent = { "TracePrimitiveComponent", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTempestBaseTraceObject, TracePrimitiveComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTempestBaseTraceObject_Statics::NewProp_TracePrimitiveComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTempestBaseTraceObject_Statics::NewProp_TracePrimitiveComponent_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UTempestBaseTraceObject_Statics::NewProp_TracePrimitiveComponentSocketNames_Inner = { "TracePrimitiveComponentSocketNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTempestBaseTraceObject_Statics::NewProp_TracePrimitiveComponentSocketNames_MetaData[] = {
		{ "Category", "Initialization | Mesh Info" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseTraceObject.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTempestBaseTraceObject_Statics::NewProp_TracePrimitiveComponentSocketNames = { "TracePrimitiveComponentSocketNames", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTempestBaseTraceObject, TracePrimitiveComponentSocketNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTempestBaseTraceObject_Statics::NewProp_TracePrimitiveComponentSocketNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTempestBaseTraceObject_Statics::NewProp_TracePrimitiveComponentSocketNames_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTempestBaseTraceObject_Statics::NewProp_TraceOwner_MetaData[] = {
		{ "Category", "Trace Properties" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseTraceObject.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTempestBaseTraceObject_Statics::NewProp_TraceOwner = { "TraceOwner", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTempestBaseTraceObject, TraceOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTempestBaseTraceObject_Statics::NewProp_TraceOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTempestBaseTraceObject_Statics::NewProp_TraceOwner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTempestBaseTraceObject_Statics::NewProp_AttackProperty_MetaData[] = {
		{ "Category", "Trace Properties | Attack" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseTraceObject.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTempestBaseTraceObject_Statics::NewProp_AttackProperty = { "AttackProperty", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTempestBaseTraceObject, AttackProperty), Z_Construct_UClass_UTempestAttackPropertiesObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTempestBaseTraceObject_Statics::NewProp_AttackProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTempestBaseTraceObject_Statics::NewProp_AttackProperty_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTempestBaseTraceObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTempestBaseTraceObject_Statics::NewProp_TraceGameplayTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTempestBaseTraceObject_Statics::NewProp_TracePrimitiveComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTempestBaseTraceObject_Statics::NewProp_TracePrimitiveComponentSocketNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTempestBaseTraceObject_Statics::NewProp_TracePrimitiveComponentSocketNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTempestBaseTraceObject_Statics::NewProp_TraceOwner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTempestBaseTraceObject_Statics::NewProp_AttackProperty,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTempestBaseTraceObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTempestBaseTraceObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTempestBaseTraceObject_Statics::ClassParams = {
		&UTempestBaseTraceObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTempestBaseTraceObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTempestBaseTraceObject_Statics::PropPointers),
		0,
		0x009000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UTempestBaseTraceObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTempestBaseTraceObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTempestBaseTraceObject()
	{
		if (!Z_Registration_Info_UClass_UTempestBaseTraceObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTempestBaseTraceObject.OuterSingleton, Z_Construct_UClass_UTempestBaseTraceObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTempestBaseTraceObject.OuterSingleton;
	}
	template<> TEMPESTCOMBATFRAMEWORK_API UClass* StaticClass<UTempestBaseTraceObject>()
	{
		return UTempestBaseTraceObject::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTempestBaseTraceObject);
	UTempestBaseTraceObject::~UTempestBaseTraceObject() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Objects_TempestBaseTraceObject_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Objects_TempestBaseTraceObject_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTempestBaseTraceObject, UTempestBaseTraceObject::StaticClass, TEXT("UTempestBaseTraceObject"), &Z_Registration_Info_UClass_UTempestBaseTraceObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTempestBaseTraceObject), 2017827854U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Objects_TempestBaseTraceObject_h_1825030502(TEXT("/Script/TempestCombatFramework"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Objects_TempestBaseTraceObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Objects_TempestBaseTraceObject_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
