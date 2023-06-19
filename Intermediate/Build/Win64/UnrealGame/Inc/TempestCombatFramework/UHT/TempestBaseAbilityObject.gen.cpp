// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TempestCombatFramework/Public/Objects/TempestBaseAbilityObject.h"
#include "GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTempestBaseAbilityObject() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	TEMPESTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UTempestBaseAbilityObject();
	TEMPESTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UTempestBaseAbilityObject_NoRegister();
	TEMPESTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UTempestBaseObject();
	UPackage* Z_Construct_UPackage__Script_TempestCombatFramework();
// End Cross Module References
	DEFINE_FUNCTION(UTempestBaseAbilityObject::execSetPerformingActor)
	{
		P_GET_OBJECT(AActor,Z_Param_NewPerformingActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPerformingActor(Z_Param_NewPerformingActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTempestBaseAbilityObject::execSetActiveAbilityMontage)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_NewActiveMontage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetActiveAbilityMontage(Z_Param_NewActiveMontage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTempestBaseAbilityObject::execGetActiveAbilityMontage)
	{
		P_GET_OBJECT_REF(UAnimMontage,Z_Param_Out_CurrentActiveMontage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetActiveAbilityMontage(Z_Param_Out_CurrentActiveMontage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTempestBaseAbilityObject::execGetPerformingActor)
	{
		P_GET_OBJECT_REF(AActor,Z_Param_Out_CurrentPerformingActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetPerformingActor(Z_Param_Out_CurrentPerformingActor);
		P_NATIVE_END;
	}
	struct TempestBaseAbilityObject_eventCanAbilityBeCanceled_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		TempestBaseAbilityObject_eventCanAbilityBeCanceled_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct TempestBaseAbilityObject_eventCanIntteruptAbility_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		TempestBaseAbilityObject_eventCanIntteruptAbility_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct TempestBaseAbilityObject_eventCanPerformAbility_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		TempestBaseAbilityObject_eventCanPerformAbility_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct TempestBaseAbilityObject_eventCanRePerformAbility_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		TempestBaseAbilityObject_eventCanRePerformAbility_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct TempestBaseAbilityObject_eventGetIsAbilityOnCooldown_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		TempestBaseAbilityObject_eventGetIsAbilityOnCooldown_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct TempestBaseAbilityObject_eventTickAbility_Parms
	{
		float TickTime;
	};
	static FName NAME_UTempestBaseAbilityObject_ApplyAbilityCooldown = FName(TEXT("ApplyAbilityCooldown"));
	void UTempestBaseAbilityObject::ApplyAbilityCooldown()
	{
		ProcessEvent(FindFunctionChecked(NAME_UTempestBaseAbilityObject_ApplyAbilityCooldown),NULL);
	}
	static FName NAME_UTempestBaseAbilityObject_CanAbilityBeCanceled = FName(TEXT("CanAbilityBeCanceled"));
	bool UTempestBaseAbilityObject::CanAbilityBeCanceled()
	{
		TempestBaseAbilityObject_eventCanAbilityBeCanceled_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UTempestBaseAbilityObject_CanAbilityBeCanceled),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UTempestBaseAbilityObject_CancelAbility = FName(TEXT("CancelAbility"));
	void UTempestBaseAbilityObject::CancelAbility()
	{
		ProcessEvent(FindFunctionChecked(NAME_UTempestBaseAbilityObject_CancelAbility),NULL);
	}
	static FName NAME_UTempestBaseAbilityObject_CanIntteruptAbility = FName(TEXT("CanIntteruptAbility"));
	bool UTempestBaseAbilityObject::CanIntteruptAbility()
	{
		TempestBaseAbilityObject_eventCanIntteruptAbility_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UTempestBaseAbilityObject_CanIntteruptAbility),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UTempestBaseAbilityObject_CanPerformAbility = FName(TEXT("CanPerformAbility"));
	bool UTempestBaseAbilityObject::CanPerformAbility()
	{
		TempestBaseAbilityObject_eventCanPerformAbility_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UTempestBaseAbilityObject_CanPerformAbility),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UTempestBaseAbilityObject_CanRePerformAbility = FName(TEXT("CanRePerformAbility"));
	bool UTempestBaseAbilityObject::CanRePerformAbility()
	{
		TempestBaseAbilityObject_eventCanRePerformAbility_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UTempestBaseAbilityObject_CanRePerformAbility),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UTempestBaseAbilityObject_ConstructAbility = FName(TEXT("ConstructAbility"));
	void UTempestBaseAbilityObject::ConstructAbility()
	{
		ProcessEvent(FindFunctionChecked(NAME_UTempestBaseAbilityObject_ConstructAbility),NULL);
	}
	static FName NAME_UTempestBaseAbilityObject_CooldownReset = FName(TEXT("CooldownReset"));
	void UTempestBaseAbilityObject::CooldownReset()
	{
		ProcessEvent(FindFunctionChecked(NAME_UTempestBaseAbilityObject_CooldownReset),NULL);
	}
	static FName NAME_UTempestBaseAbilityObject_EndAbility = FName(TEXT("EndAbility"));
	void UTempestBaseAbilityObject::EndAbility()
	{
		ProcessEvent(FindFunctionChecked(NAME_UTempestBaseAbilityObject_EndAbility),NULL);
	}
	static FName NAME_UTempestBaseAbilityObject_GetIsAbilityOnCooldown = FName(TEXT("GetIsAbilityOnCooldown"));
	bool UTempestBaseAbilityObject::GetIsAbilityOnCooldown()
	{
		TempestBaseAbilityObject_eventGetIsAbilityOnCooldown_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UTempestBaseAbilityObject_GetIsAbilityOnCooldown),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UTempestBaseAbilityObject_InterruptAbility = FName(TEXT("InterruptAbility"));
	void UTempestBaseAbilityObject::InterruptAbility()
	{
		ProcessEvent(FindFunctionChecked(NAME_UTempestBaseAbilityObject_InterruptAbility),NULL);
	}
	static FName NAME_UTempestBaseAbilityObject_StartAbility = FName(TEXT("StartAbility"));
	void UTempestBaseAbilityObject::StartAbility()
	{
		ProcessEvent(FindFunctionChecked(NAME_UTempestBaseAbilityObject_StartAbility),NULL);
	}
	static FName NAME_UTempestBaseAbilityObject_TickAbility = FName(TEXT("TickAbility"));
	void UTempestBaseAbilityObject::TickAbility(float TickTime)
	{
		TempestBaseAbilityObject_eventTickAbility_Parms Parms;
		Parms.TickTime=TickTime;
		ProcessEvent(FindFunctionChecked(NAME_UTempestBaseAbilityObject_TickAbility),&Parms);
	}
	void UTempestBaseAbilityObject::StaticRegisterNativesUTempestBaseAbilityObject()
	{
		UClass* Class = UTempestBaseAbilityObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetActiveAbilityMontage", &UTempestBaseAbilityObject::execGetActiveAbilityMontage },
			{ "GetPerformingActor", &UTempestBaseAbilityObject::execGetPerformingActor },
			{ "SetActiveAbilityMontage", &UTempestBaseAbilityObject::execSetActiveAbilityMontage },
			{ "SetPerformingActor", &UTempestBaseAbilityObject::execSetPerformingActor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTempestBaseAbilityObject_ApplyAbilityCooldown_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestBaseAbilityObject_ApplyAbilityCooldown_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability Base Functions" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseAbilityObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestBaseAbilityObject_ApplyAbilityCooldown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestBaseAbilityObject, nullptr, "ApplyAbilityCooldown", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestBaseAbilityObject_ApplyAbilityCooldown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseAbilityObject_ApplyAbilityCooldown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestBaseAbilityObject_ApplyAbilityCooldown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestBaseAbilityObject_ApplyAbilityCooldown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestBaseAbilityObject_CanAbilityBeCanceled_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTempestBaseAbilityObject_CanAbilityBeCanceled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TempestBaseAbilityObject_eventCanAbilityBeCanceled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTempestBaseAbilityObject_CanAbilityBeCanceled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TempestBaseAbilityObject_eventCanAbilityBeCanceled_Parms), &Z_Construct_UFunction_UTempestBaseAbilityObject_CanAbilityBeCanceled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestBaseAbilityObject_CanAbilityBeCanceled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestBaseAbilityObject_CanAbilityBeCanceled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestBaseAbilityObject_CanAbilityBeCanceled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability Getters" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseAbilityObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestBaseAbilityObject_CanAbilityBeCanceled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestBaseAbilityObject, nullptr, "CanAbilityBeCanceled", nullptr, nullptr, sizeof(TempestBaseAbilityObject_eventCanAbilityBeCanceled_Parms), Z_Construct_UFunction_UTempestBaseAbilityObject_CanAbilityBeCanceled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseAbilityObject_CanAbilityBeCanceled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestBaseAbilityObject_CanAbilityBeCanceled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseAbilityObject_CanAbilityBeCanceled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestBaseAbilityObject_CanAbilityBeCanceled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestBaseAbilityObject_CanAbilityBeCanceled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestBaseAbilityObject_CancelAbility_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestBaseAbilityObject_CancelAbility_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability Base Functions" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseAbilityObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestBaseAbilityObject_CancelAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestBaseAbilityObject, nullptr, "CancelAbility", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestBaseAbilityObject_CancelAbility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseAbilityObject_CancelAbility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestBaseAbilityObject_CancelAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestBaseAbilityObject_CancelAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestBaseAbilityObject_CanIntteruptAbility_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTempestBaseAbilityObject_CanIntteruptAbility_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TempestBaseAbilityObject_eventCanIntteruptAbility_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTempestBaseAbilityObject_CanIntteruptAbility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TempestBaseAbilityObject_eventCanIntteruptAbility_Parms), &Z_Construct_UFunction_UTempestBaseAbilityObject_CanIntteruptAbility_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestBaseAbilityObject_CanIntteruptAbility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestBaseAbilityObject_CanIntteruptAbility_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestBaseAbilityObject_CanIntteruptAbility_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability Getters" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseAbilityObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestBaseAbilityObject_CanIntteruptAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestBaseAbilityObject, nullptr, "CanIntteruptAbility", nullptr, nullptr, sizeof(TempestBaseAbilityObject_eventCanIntteruptAbility_Parms), Z_Construct_UFunction_UTempestBaseAbilityObject_CanIntteruptAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseAbilityObject_CanIntteruptAbility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestBaseAbilityObject_CanIntteruptAbility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseAbilityObject_CanIntteruptAbility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestBaseAbilityObject_CanIntteruptAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestBaseAbilityObject_CanIntteruptAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestBaseAbilityObject_CanPerformAbility_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTempestBaseAbilityObject_CanPerformAbility_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TempestBaseAbilityObject_eventCanPerformAbility_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTempestBaseAbilityObject_CanPerformAbility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TempestBaseAbilityObject_eventCanPerformAbility_Parms), &Z_Construct_UFunction_UTempestBaseAbilityObject_CanPerformAbility_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestBaseAbilityObject_CanPerformAbility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestBaseAbilityObject_CanPerformAbility_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestBaseAbilityObject_CanPerformAbility_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability Getters" },
		{ "Comment", "/* Ability Getters */" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseAbilityObject.h" },
		{ "ToolTip", "Ability Getters" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestBaseAbilityObject_CanPerformAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestBaseAbilityObject, nullptr, "CanPerformAbility", nullptr, nullptr, sizeof(TempestBaseAbilityObject_eventCanPerformAbility_Parms), Z_Construct_UFunction_UTempestBaseAbilityObject_CanPerformAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseAbilityObject_CanPerformAbility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestBaseAbilityObject_CanPerformAbility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseAbilityObject_CanPerformAbility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestBaseAbilityObject_CanPerformAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestBaseAbilityObject_CanPerformAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestBaseAbilityObject_CanRePerformAbility_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTempestBaseAbilityObject_CanRePerformAbility_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TempestBaseAbilityObject_eventCanRePerformAbility_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTempestBaseAbilityObject_CanRePerformAbility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TempestBaseAbilityObject_eventCanRePerformAbility_Parms), &Z_Construct_UFunction_UTempestBaseAbilityObject_CanRePerformAbility_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestBaseAbilityObject_CanRePerformAbility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestBaseAbilityObject_CanRePerformAbility_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestBaseAbilityObject_CanRePerformAbility_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability Getters" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseAbilityObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestBaseAbilityObject_CanRePerformAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestBaseAbilityObject, nullptr, "CanRePerformAbility", nullptr, nullptr, sizeof(TempestBaseAbilityObject_eventCanRePerformAbility_Parms), Z_Construct_UFunction_UTempestBaseAbilityObject_CanRePerformAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseAbilityObject_CanRePerformAbility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestBaseAbilityObject_CanRePerformAbility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseAbilityObject_CanRePerformAbility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestBaseAbilityObject_CanRePerformAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestBaseAbilityObject_CanRePerformAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestBaseAbilityObject_ConstructAbility_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestBaseAbilityObject_ConstructAbility_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability Base Functions" },
		{ "Comment", "/* Ability Main Functions */" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseAbilityObject.h" },
		{ "ToolTip", "Ability Main Functions" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestBaseAbilityObject_ConstructAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestBaseAbilityObject, nullptr, "ConstructAbility", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestBaseAbilityObject_ConstructAbility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseAbilityObject_ConstructAbility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestBaseAbilityObject_ConstructAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestBaseAbilityObject_ConstructAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestBaseAbilityObject_CooldownReset_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestBaseAbilityObject_CooldownReset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability Base Functions" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseAbilityObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestBaseAbilityObject_CooldownReset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestBaseAbilityObject, nullptr, "CooldownReset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestBaseAbilityObject_CooldownReset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseAbilityObject_CooldownReset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestBaseAbilityObject_CooldownReset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestBaseAbilityObject_CooldownReset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestBaseAbilityObject_EndAbility_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestBaseAbilityObject_EndAbility_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability Base Functions" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseAbilityObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestBaseAbilityObject_EndAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestBaseAbilityObject, nullptr, "EndAbility", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestBaseAbilityObject_EndAbility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseAbilityObject_EndAbility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestBaseAbilityObject_EndAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestBaseAbilityObject_EndAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestBaseAbilityObject_GetActiveAbilityMontage_Statics
	{
		struct TempestBaseAbilityObject_eventGetActiveAbilityMontage_Parms
		{
			UAnimMontage* CurrentActiveMontage;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentActiveMontage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTempestBaseAbilityObject_GetActiveAbilityMontage_Statics::NewProp_CurrentActiveMontage = { "CurrentActiveMontage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestBaseAbilityObject_eventGetActiveAbilityMontage_Parms, CurrentActiveMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestBaseAbilityObject_GetActiveAbilityMontage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestBaseAbilityObject_GetActiveAbilityMontage_Statics::NewProp_CurrentActiveMontage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestBaseAbilityObject_GetActiveAbilityMontage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability Getters" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseAbilityObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestBaseAbilityObject_GetActiveAbilityMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestBaseAbilityObject, nullptr, "GetActiveAbilityMontage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTempestBaseAbilityObject_GetActiveAbilityMontage_Statics::TempestBaseAbilityObject_eventGetActiveAbilityMontage_Parms), Z_Construct_UFunction_UTempestBaseAbilityObject_GetActiveAbilityMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseAbilityObject_GetActiveAbilityMontage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestBaseAbilityObject_GetActiveAbilityMontage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseAbilityObject_GetActiveAbilityMontage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestBaseAbilityObject_GetActiveAbilityMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestBaseAbilityObject_GetActiveAbilityMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestBaseAbilityObject_GetIsAbilityOnCooldown_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTempestBaseAbilityObject_GetIsAbilityOnCooldown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TempestBaseAbilityObject_eventGetIsAbilityOnCooldown_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTempestBaseAbilityObject_GetIsAbilityOnCooldown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TempestBaseAbilityObject_eventGetIsAbilityOnCooldown_Parms), &Z_Construct_UFunction_UTempestBaseAbilityObject_GetIsAbilityOnCooldown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestBaseAbilityObject_GetIsAbilityOnCooldown_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestBaseAbilityObject_GetIsAbilityOnCooldown_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestBaseAbilityObject_GetIsAbilityOnCooldown_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability Getters" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseAbilityObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestBaseAbilityObject_GetIsAbilityOnCooldown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestBaseAbilityObject, nullptr, "GetIsAbilityOnCooldown", nullptr, nullptr, sizeof(TempestBaseAbilityObject_eventGetIsAbilityOnCooldown_Parms), Z_Construct_UFunction_UTempestBaseAbilityObject_GetIsAbilityOnCooldown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseAbilityObject_GetIsAbilityOnCooldown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestBaseAbilityObject_GetIsAbilityOnCooldown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseAbilityObject_GetIsAbilityOnCooldown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestBaseAbilityObject_GetIsAbilityOnCooldown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestBaseAbilityObject_GetIsAbilityOnCooldown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestBaseAbilityObject_GetPerformingActor_Statics
	{
		struct TempestBaseAbilityObject_eventGetPerformingActor_Parms
		{
			AActor* CurrentPerformingActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentPerformingActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTempestBaseAbilityObject_GetPerformingActor_Statics::NewProp_CurrentPerformingActor = { "CurrentPerformingActor", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestBaseAbilityObject_eventGetPerformingActor_Parms, CurrentPerformingActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestBaseAbilityObject_GetPerformingActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestBaseAbilityObject_GetPerformingActor_Statics::NewProp_CurrentPerformingActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestBaseAbilityObject_GetPerformingActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability Getters" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseAbilityObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestBaseAbilityObject_GetPerformingActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestBaseAbilityObject, nullptr, "GetPerformingActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTempestBaseAbilityObject_GetPerformingActor_Statics::TempestBaseAbilityObject_eventGetPerformingActor_Parms), Z_Construct_UFunction_UTempestBaseAbilityObject_GetPerformingActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseAbilityObject_GetPerformingActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestBaseAbilityObject_GetPerformingActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseAbilityObject_GetPerformingActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestBaseAbilityObject_GetPerformingActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestBaseAbilityObject_GetPerformingActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestBaseAbilityObject_InterruptAbility_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestBaseAbilityObject_InterruptAbility_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability Base Functions" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseAbilityObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestBaseAbilityObject_InterruptAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestBaseAbilityObject, nullptr, "InterruptAbility", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestBaseAbilityObject_InterruptAbility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseAbilityObject_InterruptAbility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestBaseAbilityObject_InterruptAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestBaseAbilityObject_InterruptAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestBaseAbilityObject_SetActiveAbilityMontage_Statics
	{
		struct TempestBaseAbilityObject_eventSetActiveAbilityMontage_Parms
		{
			UAnimMontage* NewActiveMontage;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewActiveMontage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTempestBaseAbilityObject_SetActiveAbilityMontage_Statics::NewProp_NewActiveMontage = { "NewActiveMontage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestBaseAbilityObject_eventSetActiveAbilityMontage_Parms, NewActiveMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestBaseAbilityObject_SetActiveAbilityMontage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestBaseAbilityObject_SetActiveAbilityMontage_Statics::NewProp_NewActiveMontage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestBaseAbilityObject_SetActiveAbilityMontage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability Setters" },
		{ "Comment", "/* Ability Setters */" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseAbilityObject.h" },
		{ "ToolTip", "Ability Setters" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestBaseAbilityObject_SetActiveAbilityMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestBaseAbilityObject, nullptr, "SetActiveAbilityMontage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTempestBaseAbilityObject_SetActiveAbilityMontage_Statics::TempestBaseAbilityObject_eventSetActiveAbilityMontage_Parms), Z_Construct_UFunction_UTempestBaseAbilityObject_SetActiveAbilityMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseAbilityObject_SetActiveAbilityMontage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestBaseAbilityObject_SetActiveAbilityMontage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseAbilityObject_SetActiveAbilityMontage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestBaseAbilityObject_SetActiveAbilityMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestBaseAbilityObject_SetActiveAbilityMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestBaseAbilityObject_SetPerformingActor_Statics
	{
		struct TempestBaseAbilityObject_eventSetPerformingActor_Parms
		{
			AActor* NewPerformingActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewPerformingActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTempestBaseAbilityObject_SetPerformingActor_Statics::NewProp_NewPerformingActor = { "NewPerformingActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestBaseAbilityObject_eventSetPerformingActor_Parms, NewPerformingActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestBaseAbilityObject_SetPerformingActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestBaseAbilityObject_SetPerformingActor_Statics::NewProp_NewPerformingActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestBaseAbilityObject_SetPerformingActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability Setters" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseAbilityObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestBaseAbilityObject_SetPerformingActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestBaseAbilityObject, nullptr, "SetPerformingActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTempestBaseAbilityObject_SetPerformingActor_Statics::TempestBaseAbilityObject_eventSetPerformingActor_Parms), Z_Construct_UFunction_UTempestBaseAbilityObject_SetPerformingActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseAbilityObject_SetPerformingActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestBaseAbilityObject_SetPerformingActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseAbilityObject_SetPerformingActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestBaseAbilityObject_SetPerformingActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestBaseAbilityObject_SetPerformingActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestBaseAbilityObject_StartAbility_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestBaseAbilityObject_StartAbility_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability Base Functions" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseAbilityObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestBaseAbilityObject_StartAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestBaseAbilityObject, nullptr, "StartAbility", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestBaseAbilityObject_StartAbility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseAbilityObject_StartAbility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestBaseAbilityObject_StartAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestBaseAbilityObject_StartAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestBaseAbilityObject_TickAbility_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TickTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTempestBaseAbilityObject_TickAbility_Statics::NewProp_TickTime = { "TickTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestBaseAbilityObject_eventTickAbility_Parms, TickTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestBaseAbilityObject_TickAbility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestBaseAbilityObject_TickAbility_Statics::NewProp_TickTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestBaseAbilityObject_TickAbility_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability Base Functions" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseAbilityObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestBaseAbilityObject_TickAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestBaseAbilityObject, nullptr, "TickAbility", nullptr, nullptr, sizeof(TempestBaseAbilityObject_eventTickAbility_Parms), Z_Construct_UFunction_UTempestBaseAbilityObject_TickAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseAbilityObject_TickAbility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestBaseAbilityObject_TickAbility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseAbilityObject_TickAbility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestBaseAbilityObject_TickAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestBaseAbilityObject_TickAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTempestBaseAbilityObject);
	UClass* Z_Construct_UClass_UTempestBaseAbilityObject_NoRegister()
	{
		return UTempestBaseAbilityObject::StaticClass();
	}
	struct Z_Construct_UClass_UTempestBaseAbilityObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityGameplayTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityGameplayTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasCooldown_MetaData[];
#endif
		static void NewProp_bHasCooldown_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasCooldown;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CooldownDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CooldownDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveAbilityMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveAbilityMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PerformingActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PerformingActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAbilityOnCooldown_MetaData[];
#endif
		static void NewProp_bAbilityOnCooldown_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAbilityOnCooldown;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTempestBaseAbilityObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTempestBaseObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TempestCombatFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTempestBaseAbilityObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTempestBaseAbilityObject_ApplyAbilityCooldown, "ApplyAbilityCooldown" }, // 1110571330
		{ &Z_Construct_UFunction_UTempestBaseAbilityObject_CanAbilityBeCanceled, "CanAbilityBeCanceled" }, // 1280038585
		{ &Z_Construct_UFunction_UTempestBaseAbilityObject_CancelAbility, "CancelAbility" }, // 55475081
		{ &Z_Construct_UFunction_UTempestBaseAbilityObject_CanIntteruptAbility, "CanIntteruptAbility" }, // 272673571
		{ &Z_Construct_UFunction_UTempestBaseAbilityObject_CanPerformAbility, "CanPerformAbility" }, // 1203929268
		{ &Z_Construct_UFunction_UTempestBaseAbilityObject_CanRePerformAbility, "CanRePerformAbility" }, // 2722956009
		{ &Z_Construct_UFunction_UTempestBaseAbilityObject_ConstructAbility, "ConstructAbility" }, // 1418856066
		{ &Z_Construct_UFunction_UTempestBaseAbilityObject_CooldownReset, "CooldownReset" }, // 2996370080
		{ &Z_Construct_UFunction_UTempestBaseAbilityObject_EndAbility, "EndAbility" }, // 128830033
		{ &Z_Construct_UFunction_UTempestBaseAbilityObject_GetActiveAbilityMontage, "GetActiveAbilityMontage" }, // 1238043890
		{ &Z_Construct_UFunction_UTempestBaseAbilityObject_GetIsAbilityOnCooldown, "GetIsAbilityOnCooldown" }, // 1967251486
		{ &Z_Construct_UFunction_UTempestBaseAbilityObject_GetPerformingActor, "GetPerformingActor" }, // 1464270149
		{ &Z_Construct_UFunction_UTempestBaseAbilityObject_InterruptAbility, "InterruptAbility" }, // 1553348718
		{ &Z_Construct_UFunction_UTempestBaseAbilityObject_SetActiveAbilityMontage, "SetActiveAbilityMontage" }, // 1628869803
		{ &Z_Construct_UFunction_UTempestBaseAbilityObject_SetPerformingActor, "SetPerformingActor" }, // 1693494721
		{ &Z_Construct_UFunction_UTempestBaseAbilityObject_StartAbility, "StartAbility" }, // 3330321855
		{ &Z_Construct_UFunction_UTempestBaseAbilityObject_TickAbility, "TickAbility" }, // 120332921
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTempestBaseAbilityObject_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Objects/TempestBaseAbilityObject.h" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseAbilityObject.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTempestBaseAbilityObject_Statics::NewProp_AbilityGameplayTag_MetaData[] = {
		{ "Category", "Ability Properties" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseAbilityObject.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTempestBaseAbilityObject_Statics::NewProp_AbilityGameplayTag = { "AbilityGameplayTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTempestBaseAbilityObject, AbilityGameplayTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_UTempestBaseAbilityObject_Statics::NewProp_AbilityGameplayTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTempestBaseAbilityObject_Statics::NewProp_AbilityGameplayTag_MetaData)) }; // 1225434376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTempestBaseAbilityObject_Statics::NewProp_bHasCooldown_MetaData[] = {
		{ "Category", "Ability Properties" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseAbilityObject.h" },
	};
#endif
	void Z_Construct_UClass_UTempestBaseAbilityObject_Statics::NewProp_bHasCooldown_SetBit(void* Obj)
	{
		((UTempestBaseAbilityObject*)Obj)->bHasCooldown = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTempestBaseAbilityObject_Statics::NewProp_bHasCooldown = { "bHasCooldown", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UTempestBaseAbilityObject), &Z_Construct_UClass_UTempestBaseAbilityObject_Statics::NewProp_bHasCooldown_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTempestBaseAbilityObject_Statics::NewProp_bHasCooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTempestBaseAbilityObject_Statics::NewProp_bHasCooldown_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTempestBaseAbilityObject_Statics::NewProp_CooldownDuration_MetaData[] = {
		{ "Category", "Ability Controls" },
		{ "EditCondition", "bHasCooldown" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseAbilityObject.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTempestBaseAbilityObject_Statics::NewProp_CooldownDuration = { "CooldownDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTempestBaseAbilityObject, CooldownDuration), METADATA_PARAMS(Z_Construct_UClass_UTempestBaseAbilityObject_Statics::NewProp_CooldownDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTempestBaseAbilityObject_Statics::NewProp_CooldownDuration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTempestBaseAbilityObject_Statics::NewProp_ActiveAbilityMontage_MetaData[] = {
		{ "Category", "Ability Properties" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseAbilityObject.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTempestBaseAbilityObject_Statics::NewProp_ActiveAbilityMontage = { "ActiveAbilityMontage", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTempestBaseAbilityObject, ActiveAbilityMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTempestBaseAbilityObject_Statics::NewProp_ActiveAbilityMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTempestBaseAbilityObject_Statics::NewProp_ActiveAbilityMontage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTempestBaseAbilityObject_Statics::NewProp_PerformingActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Objects/TempestBaseAbilityObject.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTempestBaseAbilityObject_Statics::NewProp_PerformingActor = { "PerformingActor", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTempestBaseAbilityObject, PerformingActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTempestBaseAbilityObject_Statics::NewProp_PerformingActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTempestBaseAbilityObject_Statics::NewProp_PerformingActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTempestBaseAbilityObject_Statics::NewProp_bAbilityOnCooldown_MetaData[] = {
		{ "Category", "Cooldown" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseAbilityObject.h" },
	};
#endif
	void Z_Construct_UClass_UTempestBaseAbilityObject_Statics::NewProp_bAbilityOnCooldown_SetBit(void* Obj)
	{
		((UTempestBaseAbilityObject*)Obj)->bAbilityOnCooldown = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTempestBaseAbilityObject_Statics::NewProp_bAbilityOnCooldown = { "bAbilityOnCooldown", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UTempestBaseAbilityObject), &Z_Construct_UClass_UTempestBaseAbilityObject_Statics::NewProp_bAbilityOnCooldown_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTempestBaseAbilityObject_Statics::NewProp_bAbilityOnCooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTempestBaseAbilityObject_Statics::NewProp_bAbilityOnCooldown_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTempestBaseAbilityObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTempestBaseAbilityObject_Statics::NewProp_AbilityGameplayTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTempestBaseAbilityObject_Statics::NewProp_bHasCooldown,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTempestBaseAbilityObject_Statics::NewProp_CooldownDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTempestBaseAbilityObject_Statics::NewProp_ActiveAbilityMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTempestBaseAbilityObject_Statics::NewProp_PerformingActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTempestBaseAbilityObject_Statics::NewProp_bAbilityOnCooldown,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTempestBaseAbilityObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTempestBaseAbilityObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTempestBaseAbilityObject_Statics::ClassParams = {
		&UTempestBaseAbilityObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTempestBaseAbilityObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTempestBaseAbilityObject_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTempestBaseAbilityObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTempestBaseAbilityObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTempestBaseAbilityObject()
	{
		if (!Z_Registration_Info_UClass_UTempestBaseAbilityObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTempestBaseAbilityObject.OuterSingleton, Z_Construct_UClass_UTempestBaseAbilityObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTempestBaseAbilityObject.OuterSingleton;
	}
	template<> TEMPESTCOMBATFRAMEWORK_API UClass* StaticClass<UTempestBaseAbilityObject>()
	{
		return UTempestBaseAbilityObject::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTempestBaseAbilityObject);
	UTempestBaseAbilityObject::~UTempestBaseAbilityObject() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Objects_TempestBaseAbilityObject_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Objects_TempestBaseAbilityObject_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTempestBaseAbilityObject, UTempestBaseAbilityObject::StaticClass, TEXT("UTempestBaseAbilityObject"), &Z_Registration_Info_UClass_UTempestBaseAbilityObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTempestBaseAbilityObject), 1586964442U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Objects_TempestBaseAbilityObject_h_3778146496(TEXT("/Script/TempestCombatFramework"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Objects_TempestBaseAbilityObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Objects_TempestBaseAbilityObject_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
