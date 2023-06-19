// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TempestCombatFramework/Public/Objects/TempestBaseStateObject.h"
#include "GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTempestBaseStateObject() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	TEMPESTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UTempestBaseObject();
	TEMPESTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UTempestBaseStateObject();
	TEMPESTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UTempestBaseStateObject_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TempestCombatFramework();
// End Cross Module References
	DEFINE_FUNCTION(UTempestBaseStateObject::execGetTimePassed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetTimePassed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTempestBaseStateObject::execGetPerformingActor)
	{
		P_GET_OBJECT_REF(AActor,Z_Param_Out_CurrentPerformingActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetPerformingActor(Z_Param_Out_CurrentPerformingActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTempestBaseStateObject::execSetPerformingActor)
	{
		P_GET_OBJECT(AActor,Z_Param_NewPerformingActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPerformingActor(Z_Param_NewPerformingActor);
		P_NATIVE_END;
	}
	struct TempestBaseStateObject_eventCanPerformState_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		TempestBaseStateObject_eventCanPerformState_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct TempestBaseStateObject_eventCanSetAsQueueState_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		TempestBaseStateObject_eventCanSetAsQueueState_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct TempestBaseStateObject_eventIncrementTimeByUpdateRate_Parms
	{
		float ReturnValue;

		/** Constructor, initializes return property only **/
		TempestBaseStateObject_eventIncrementTimeByUpdateRate_Parms()
			: ReturnValue(0)
		{
		}
	};
	struct TempestBaseStateObject_eventRestartState_Parms
	{
		bool ConditionCheck;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		TempestBaseStateObject_eventRestartState_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct TempestBaseStateObject_eventTickState_Parms
	{
		float TickTime;
	};
	static FName NAME_UTempestBaseStateObject_CanPerformState = FName(TEXT("CanPerformState"));
	bool UTempestBaseStateObject::CanPerformState()
	{
		TempestBaseStateObject_eventCanPerformState_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UTempestBaseStateObject_CanPerformState),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UTempestBaseStateObject_CanSetAsQueueState = FName(TEXT("CanSetAsQueueState"));
	bool UTempestBaseStateObject::CanSetAsQueueState()
	{
		TempestBaseStateObject_eventCanSetAsQueueState_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UTempestBaseStateObject_CanSetAsQueueState),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UTempestBaseStateObject_ClearPassedTime = FName(TEXT("ClearPassedTime"));
	void UTempestBaseStateObject::ClearPassedTime()
	{
		ProcessEvent(FindFunctionChecked(NAME_UTempestBaseStateObject_ClearPassedTime),NULL);
	}
	static FName NAME_UTempestBaseStateObject_ClearStateValues = FName(TEXT("ClearStateValues"));
	void UTempestBaseStateObject::ClearStateValues()
	{
		ProcessEvent(FindFunctionChecked(NAME_UTempestBaseStateObject_ClearStateValues),NULL);
	}
	static FName NAME_UTempestBaseStateObject_ConstructState = FName(TEXT("ConstructState"));
	void UTempestBaseStateObject::ConstructState()
	{
		ProcessEvent(FindFunctionChecked(NAME_UTempestBaseStateObject_ConstructState),NULL);
	}
	static FName NAME_UTempestBaseStateObject_EndState = FName(TEXT("EndState"));
	void UTempestBaseStateObject::EndState()
	{
		ProcessEvent(FindFunctionChecked(NAME_UTempestBaseStateObject_EndState),NULL);
	}
	static FName NAME_UTempestBaseStateObject_IncrementPassedTime = FName(TEXT("IncrementPassedTime"));
	void UTempestBaseStateObject::IncrementPassedTime()
	{
		ProcessEvent(FindFunctionChecked(NAME_UTempestBaseStateObject_IncrementPassedTime),NULL);
	}
	static FName NAME_UTempestBaseStateObject_IncrementTimeByUpdateRate = FName(TEXT("IncrementTimeByUpdateRate"));
	float UTempestBaseStateObject::IncrementTimeByUpdateRate()
	{
		TempestBaseStateObject_eventIncrementTimeByUpdateRate_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UTempestBaseStateObject_IncrementTimeByUpdateRate),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UTempestBaseStateObject_PrepareStateValues = FName(TEXT("PrepareStateValues"));
	void UTempestBaseStateObject::PrepareStateValues()
	{
		ProcessEvent(FindFunctionChecked(NAME_UTempestBaseStateObject_PrepareStateValues),NULL);
	}
	static FName NAME_UTempestBaseStateObject_RestartState = FName(TEXT("RestartState"));
	bool UTempestBaseStateObject::RestartState(bool ConditionCheck)
	{
		TempestBaseStateObject_eventRestartState_Parms Parms;
		Parms.ConditionCheck=ConditionCheck ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UTempestBaseStateObject_RestartState),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UTempestBaseStateObject_StartState = FName(TEXT("StartState"));
	void UTempestBaseStateObject::StartState()
	{
		ProcessEvent(FindFunctionChecked(NAME_UTempestBaseStateObject_StartState),NULL);
	}
	static FName NAME_UTempestBaseStateObject_StartStateTimer = FName(TEXT("StartStateTimer"));
	void UTempestBaseStateObject::StartStateTimer()
	{
		ProcessEvent(FindFunctionChecked(NAME_UTempestBaseStateObject_StartStateTimer),NULL);
	}
	static FName NAME_UTempestBaseStateObject_StopStateTimer = FName(TEXT("StopStateTimer"));
	void UTempestBaseStateObject::StopStateTimer()
	{
		ProcessEvent(FindFunctionChecked(NAME_UTempestBaseStateObject_StopStateTimer),NULL);
	}
	static FName NAME_UTempestBaseStateObject_TickState = FName(TEXT("TickState"));
	void UTempestBaseStateObject::TickState(float TickTime)
	{
		TempestBaseStateObject_eventTickState_Parms Parms;
		Parms.TickTime=TickTime;
		ProcessEvent(FindFunctionChecked(NAME_UTempestBaseStateObject_TickState),&Parms);
	}
	void UTempestBaseStateObject::StaticRegisterNativesUTempestBaseStateObject()
	{
		UClass* Class = UTempestBaseStateObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPerformingActor", &UTempestBaseStateObject::execGetPerformingActor },
			{ "GetTimePassed", &UTempestBaseStateObject::execGetTimePassed },
			{ "SetPerformingActor", &UTempestBaseStateObject::execSetPerformingActor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTempestBaseStateObject_CanPerformState_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTempestBaseStateObject_CanPerformState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TempestBaseStateObject_eventCanPerformState_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTempestBaseStateObject_CanPerformState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TempestBaseStateObject_eventCanPerformState_Parms), &Z_Construct_UFunction_UTempestBaseStateObject_CanPerformState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestBaseStateObject_CanPerformState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestBaseStateObject_CanPerformState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestBaseStateObject_CanPerformState_Statics::Function_MetaDataParams[] = {
		{ "Category", "State Getters" },
		{ "Comment", "/* State Getters */" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseStateObject.h" },
		{ "ToolTip", "State Getters" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestBaseStateObject_CanPerformState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestBaseStateObject, nullptr, "CanPerformState", nullptr, nullptr, sizeof(TempestBaseStateObject_eventCanPerformState_Parms), Z_Construct_UFunction_UTempestBaseStateObject_CanPerformState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseStateObject_CanPerformState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestBaseStateObject_CanPerformState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseStateObject_CanPerformState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestBaseStateObject_CanPerformState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestBaseStateObject_CanPerformState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestBaseStateObject_CanSetAsQueueState_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTempestBaseStateObject_CanSetAsQueueState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TempestBaseStateObject_eventCanSetAsQueueState_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTempestBaseStateObject_CanSetAsQueueState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TempestBaseStateObject_eventCanSetAsQueueState_Parms), &Z_Construct_UFunction_UTempestBaseStateObject_CanSetAsQueueState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestBaseStateObject_CanSetAsQueueState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestBaseStateObject_CanSetAsQueueState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestBaseStateObject_CanSetAsQueueState_Statics::Function_MetaDataParams[] = {
		{ "Category", "State Getters" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseStateObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestBaseStateObject_CanSetAsQueueState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestBaseStateObject, nullptr, "CanSetAsQueueState", nullptr, nullptr, sizeof(TempestBaseStateObject_eventCanSetAsQueueState_Parms), Z_Construct_UFunction_UTempestBaseStateObject_CanSetAsQueueState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseStateObject_CanSetAsQueueState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestBaseStateObject_CanSetAsQueueState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseStateObject_CanSetAsQueueState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestBaseStateObject_CanSetAsQueueState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestBaseStateObject_CanSetAsQueueState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestBaseStateObject_ClearPassedTime_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestBaseStateObject_ClearPassedTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "State Base Functions" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseStateObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestBaseStateObject_ClearPassedTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestBaseStateObject, nullptr, "ClearPassedTime", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestBaseStateObject_ClearPassedTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseStateObject_ClearPassedTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestBaseStateObject_ClearPassedTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestBaseStateObject_ClearPassedTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestBaseStateObject_ClearStateValues_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestBaseStateObject_ClearStateValues_Statics::Function_MetaDataParams[] = {
		{ "Category", "State Base Functions" },
		{ "Comment", "/* State Main Functions */" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseStateObject.h" },
		{ "ToolTip", "State Main Functions" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestBaseStateObject_ClearStateValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestBaseStateObject, nullptr, "ClearStateValues", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestBaseStateObject_ClearStateValues_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseStateObject_ClearStateValues_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestBaseStateObject_ClearStateValues()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestBaseStateObject_ClearStateValues_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestBaseStateObject_ConstructState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestBaseStateObject_ConstructState_Statics::Function_MetaDataParams[] = {
		{ "Category", "State Base Events" },
		{ "Comment", "/* State Main Events */" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseStateObject.h" },
		{ "ToolTip", "State Main Events" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestBaseStateObject_ConstructState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestBaseStateObject, nullptr, "ConstructState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestBaseStateObject_ConstructState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseStateObject_ConstructState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestBaseStateObject_ConstructState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestBaseStateObject_ConstructState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestBaseStateObject_EndState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestBaseStateObject_EndState_Statics::Function_MetaDataParams[] = {
		{ "Category", "State Base Events" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseStateObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestBaseStateObject_EndState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestBaseStateObject, nullptr, "EndState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestBaseStateObject_EndState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseStateObject_EndState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestBaseStateObject_EndState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestBaseStateObject_EndState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestBaseStateObject_GetPerformingActor_Statics
	{
		struct TempestBaseStateObject_eventGetPerformingActor_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTempestBaseStateObject_GetPerformingActor_Statics::NewProp_CurrentPerformingActor = { "CurrentPerformingActor", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestBaseStateObject_eventGetPerformingActor_Parms, CurrentPerformingActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestBaseStateObject_GetPerformingActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestBaseStateObject_GetPerformingActor_Statics::NewProp_CurrentPerformingActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestBaseStateObject_GetPerformingActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "State Getters" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseStateObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestBaseStateObject_GetPerformingActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestBaseStateObject, nullptr, "GetPerformingActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTempestBaseStateObject_GetPerformingActor_Statics::TempestBaseStateObject_eventGetPerformingActor_Parms), Z_Construct_UFunction_UTempestBaseStateObject_GetPerformingActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseStateObject_GetPerformingActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestBaseStateObject_GetPerformingActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseStateObject_GetPerformingActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestBaseStateObject_GetPerformingActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestBaseStateObject_GetPerformingActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestBaseStateObject_GetTimePassed_Statics
	{
		struct TempestBaseStateObject_eventGetTimePassed_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTempestBaseStateObject_GetTimePassed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestBaseStateObject_eventGetTimePassed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestBaseStateObject_GetTimePassed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestBaseStateObject_GetTimePassed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestBaseStateObject_GetTimePassed_Statics::Function_MetaDataParams[] = {
		{ "Category", "State Getters" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseStateObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestBaseStateObject_GetTimePassed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestBaseStateObject, nullptr, "GetTimePassed", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTempestBaseStateObject_GetTimePassed_Statics::TempestBaseStateObject_eventGetTimePassed_Parms), Z_Construct_UFunction_UTempestBaseStateObject_GetTimePassed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseStateObject_GetTimePassed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestBaseStateObject_GetTimePassed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseStateObject_GetTimePassed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestBaseStateObject_GetTimePassed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestBaseStateObject_GetTimePassed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestBaseStateObject_IncrementPassedTime_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestBaseStateObject_IncrementPassedTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "State Base Functions" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseStateObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestBaseStateObject_IncrementPassedTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestBaseStateObject, nullptr, "IncrementPassedTime", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestBaseStateObject_IncrementPassedTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseStateObject_IncrementPassedTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestBaseStateObject_IncrementPassedTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestBaseStateObject_IncrementPassedTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestBaseStateObject_IncrementTimeByUpdateRate_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTempestBaseStateObject_IncrementTimeByUpdateRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestBaseStateObject_eventIncrementTimeByUpdateRate_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestBaseStateObject_IncrementTimeByUpdateRate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestBaseStateObject_IncrementTimeByUpdateRate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestBaseStateObject_IncrementTimeByUpdateRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "State Base Functions" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseStateObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestBaseStateObject_IncrementTimeByUpdateRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestBaseStateObject, nullptr, "IncrementTimeByUpdateRate", nullptr, nullptr, sizeof(TempestBaseStateObject_eventIncrementTimeByUpdateRate_Parms), Z_Construct_UFunction_UTempestBaseStateObject_IncrementTimeByUpdateRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseStateObject_IncrementTimeByUpdateRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestBaseStateObject_IncrementTimeByUpdateRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseStateObject_IncrementTimeByUpdateRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestBaseStateObject_IncrementTimeByUpdateRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestBaseStateObject_IncrementTimeByUpdateRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestBaseStateObject_PrepareStateValues_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestBaseStateObject_PrepareStateValues_Statics::Function_MetaDataParams[] = {
		{ "Category", "State Base Functions" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseStateObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestBaseStateObject_PrepareStateValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestBaseStateObject, nullptr, "PrepareStateValues", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestBaseStateObject_PrepareStateValues_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseStateObject_PrepareStateValues_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestBaseStateObject_PrepareStateValues()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestBaseStateObject_PrepareStateValues_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestBaseStateObject_RestartState_Statics
	{
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
	void Z_Construct_UFunction_UTempestBaseStateObject_RestartState_Statics::NewProp_ConditionCheck_SetBit(void* Obj)
	{
		((TempestBaseStateObject_eventRestartState_Parms*)Obj)->ConditionCheck = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTempestBaseStateObject_RestartState_Statics::NewProp_ConditionCheck = { "ConditionCheck", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TempestBaseStateObject_eventRestartState_Parms), &Z_Construct_UFunction_UTempestBaseStateObject_RestartState_Statics::NewProp_ConditionCheck_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTempestBaseStateObject_RestartState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TempestBaseStateObject_eventRestartState_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTempestBaseStateObject_RestartState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TempestBaseStateObject_eventRestartState_Parms), &Z_Construct_UFunction_UTempestBaseStateObject_RestartState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestBaseStateObject_RestartState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestBaseStateObject_RestartState_Statics::NewProp_ConditionCheck,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestBaseStateObject_RestartState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestBaseStateObject_RestartState_Statics::Function_MetaDataParams[] = {
		{ "Category", "State Base Events" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseStateObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestBaseStateObject_RestartState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestBaseStateObject, nullptr, "RestartState", nullptr, nullptr, sizeof(TempestBaseStateObject_eventRestartState_Parms), Z_Construct_UFunction_UTempestBaseStateObject_RestartState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseStateObject_RestartState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestBaseStateObject_RestartState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseStateObject_RestartState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestBaseStateObject_RestartState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestBaseStateObject_RestartState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestBaseStateObject_SetPerformingActor_Statics
	{
		struct TempestBaseStateObject_eventSetPerformingActor_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTempestBaseStateObject_SetPerformingActor_Statics::NewProp_NewPerformingActor = { "NewPerformingActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestBaseStateObject_eventSetPerformingActor_Parms, NewPerformingActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestBaseStateObject_SetPerformingActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestBaseStateObject_SetPerformingActor_Statics::NewProp_NewPerformingActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestBaseStateObject_SetPerformingActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "State Setters" },
		{ "Comment", "/* State Setters */" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseStateObject.h" },
		{ "ToolTip", "State Setters" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestBaseStateObject_SetPerformingActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestBaseStateObject, nullptr, "SetPerformingActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTempestBaseStateObject_SetPerformingActor_Statics::TempestBaseStateObject_eventSetPerformingActor_Parms), Z_Construct_UFunction_UTempestBaseStateObject_SetPerformingActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseStateObject_SetPerformingActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestBaseStateObject_SetPerformingActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseStateObject_SetPerformingActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestBaseStateObject_SetPerformingActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestBaseStateObject_SetPerformingActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestBaseStateObject_StartState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestBaseStateObject_StartState_Statics::Function_MetaDataParams[] = {
		{ "Category", "State Base Events" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseStateObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestBaseStateObject_StartState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestBaseStateObject, nullptr, "StartState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestBaseStateObject_StartState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseStateObject_StartState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestBaseStateObject_StartState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestBaseStateObject_StartState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestBaseStateObject_StartStateTimer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestBaseStateObject_StartStateTimer_Statics::Function_MetaDataParams[] = {
		{ "Category", "State Base Functions" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseStateObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestBaseStateObject_StartStateTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestBaseStateObject, nullptr, "StartStateTimer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestBaseStateObject_StartStateTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseStateObject_StartStateTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestBaseStateObject_StartStateTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestBaseStateObject_StartStateTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestBaseStateObject_StopStateTimer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestBaseStateObject_StopStateTimer_Statics::Function_MetaDataParams[] = {
		{ "Category", "State Base Functions" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseStateObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestBaseStateObject_StopStateTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestBaseStateObject, nullptr, "StopStateTimer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestBaseStateObject_StopStateTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseStateObject_StopStateTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestBaseStateObject_StopStateTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestBaseStateObject_StopStateTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestBaseStateObject_TickState_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TickTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTempestBaseStateObject_TickState_Statics::NewProp_TickTime = { "TickTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestBaseStateObject_eventTickState_Parms, TickTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestBaseStateObject_TickState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestBaseStateObject_TickState_Statics::NewProp_TickTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestBaseStateObject_TickState_Statics::Function_MetaDataParams[] = {
		{ "Category", "State Base Events" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseStateObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestBaseStateObject_TickState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestBaseStateObject, nullptr, "TickState", nullptr, nullptr, sizeof(TempestBaseStateObject_eventTickState_Parms), Z_Construct_UFunction_UTempestBaseStateObject_TickState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseStateObject_TickState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestBaseStateObject_TickState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseStateObject_TickState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestBaseStateObject_TickState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestBaseStateObject_TickState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTempestBaseStateObject);
	UClass* Z_Construct_UClass_UTempestBaseStateObject_NoRegister()
	{
		return UTempestBaseStateObject::StaticClass();
	}
	struct Z_Construct_UClass_UTempestBaseStateObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StateGameplayTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StateGameplayTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTimeControlledState_MetaData[];
#endif
		static void NewProp_bTimeControlledState_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTimeControlledState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StateTimeLimit_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StateTimeLimit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimerUpdateRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimerUpdateRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimePassed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimePassed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PerformingActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PerformingActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTempestBaseStateObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTempestBaseObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TempestCombatFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTempestBaseStateObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTempestBaseStateObject_CanPerformState, "CanPerformState" }, // 2145909597
		{ &Z_Construct_UFunction_UTempestBaseStateObject_CanSetAsQueueState, "CanSetAsQueueState" }, // 3288324243
		{ &Z_Construct_UFunction_UTempestBaseStateObject_ClearPassedTime, "ClearPassedTime" }, // 3909245178
		{ &Z_Construct_UFunction_UTempestBaseStateObject_ClearStateValues, "ClearStateValues" }, // 2504231781
		{ &Z_Construct_UFunction_UTempestBaseStateObject_ConstructState, "ConstructState" }, // 695691397
		{ &Z_Construct_UFunction_UTempestBaseStateObject_EndState, "EndState" }, // 2595370542
		{ &Z_Construct_UFunction_UTempestBaseStateObject_GetPerformingActor, "GetPerformingActor" }, // 3560383931
		{ &Z_Construct_UFunction_UTempestBaseStateObject_GetTimePassed, "GetTimePassed" }, // 2546431023
		{ &Z_Construct_UFunction_UTempestBaseStateObject_IncrementPassedTime, "IncrementPassedTime" }, // 84828144
		{ &Z_Construct_UFunction_UTempestBaseStateObject_IncrementTimeByUpdateRate, "IncrementTimeByUpdateRate" }, // 461170714
		{ &Z_Construct_UFunction_UTempestBaseStateObject_PrepareStateValues, "PrepareStateValues" }, // 3402223111
		{ &Z_Construct_UFunction_UTempestBaseStateObject_RestartState, "RestartState" }, // 2995778723
		{ &Z_Construct_UFunction_UTempestBaseStateObject_SetPerformingActor, "SetPerformingActor" }, // 428702486
		{ &Z_Construct_UFunction_UTempestBaseStateObject_StartState, "StartState" }, // 38780518
		{ &Z_Construct_UFunction_UTempestBaseStateObject_StartStateTimer, "StartStateTimer" }, // 2261221165
		{ &Z_Construct_UFunction_UTempestBaseStateObject_StopStateTimer, "StopStateTimer" }, // 3828328831
		{ &Z_Construct_UFunction_UTempestBaseStateObject_TickState, "TickState" }, // 2795666589
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTempestBaseStateObject_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Objects/TempestBaseStateObject.h" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseStateObject.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTempestBaseStateObject_Statics::NewProp_StateGameplayTag_MetaData[] = {
		{ "Category", "State Properties" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseStateObject.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTempestBaseStateObject_Statics::NewProp_StateGameplayTag = { "StateGameplayTag", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTempestBaseStateObject, StateGameplayTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_UTempestBaseStateObject_Statics::NewProp_StateGameplayTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTempestBaseStateObject_Statics::NewProp_StateGameplayTag_MetaData)) }; // 1225434376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTempestBaseStateObject_Statics::NewProp_bTimeControlledState_MetaData[] = {
		{ "Category", "State Properties" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseStateObject.h" },
	};
#endif
	void Z_Construct_UClass_UTempestBaseStateObject_Statics::NewProp_bTimeControlledState_SetBit(void* Obj)
	{
		((UTempestBaseStateObject*)Obj)->bTimeControlledState = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTempestBaseStateObject_Statics::NewProp_bTimeControlledState = { "bTimeControlledState", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UTempestBaseStateObject), &Z_Construct_UClass_UTempestBaseStateObject_Statics::NewProp_bTimeControlledState_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTempestBaseStateObject_Statics::NewProp_bTimeControlledState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTempestBaseStateObject_Statics::NewProp_bTimeControlledState_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTempestBaseStateObject_Statics::NewProp_StateTimeLimit_MetaData[] = {
		{ "Category", "State Controls" },
		{ "EditCondition", "bTimeControlledState" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseStateObject.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTempestBaseStateObject_Statics::NewProp_StateTimeLimit = { "StateTimeLimit", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTempestBaseStateObject, StateTimeLimit), METADATA_PARAMS(Z_Construct_UClass_UTempestBaseStateObject_Statics::NewProp_StateTimeLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTempestBaseStateObject_Statics::NewProp_StateTimeLimit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTempestBaseStateObject_Statics::NewProp_TimerUpdateRate_MetaData[] = {
		{ "Category", "State Controls" },
		{ "EditCondition", "bTimeControlledState" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseStateObject.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTempestBaseStateObject_Statics::NewProp_TimerUpdateRate = { "TimerUpdateRate", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTempestBaseStateObject, TimerUpdateRate), METADATA_PARAMS(Z_Construct_UClass_UTempestBaseStateObject_Statics::NewProp_TimerUpdateRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTempestBaseStateObject_Statics::NewProp_TimerUpdateRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTempestBaseStateObject_Statics::NewProp_TimePassed_MetaData[] = {
		{ "Category", "State Time" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseStateObject.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTempestBaseStateObject_Statics::NewProp_TimePassed = { "TimePassed", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTempestBaseStateObject, TimePassed), METADATA_PARAMS(Z_Construct_UClass_UTempestBaseStateObject_Statics::NewProp_TimePassed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTempestBaseStateObject_Statics::NewProp_TimePassed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTempestBaseStateObject_Statics::NewProp_PerformingActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Objects/TempestBaseStateObject.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTempestBaseStateObject_Statics::NewProp_PerformingActor = { "PerformingActor", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTempestBaseStateObject, PerformingActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTempestBaseStateObject_Statics::NewProp_PerformingActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTempestBaseStateObject_Statics::NewProp_PerformingActor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTempestBaseStateObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTempestBaseStateObject_Statics::NewProp_StateGameplayTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTempestBaseStateObject_Statics::NewProp_bTimeControlledState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTempestBaseStateObject_Statics::NewProp_StateTimeLimit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTempestBaseStateObject_Statics::NewProp_TimerUpdateRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTempestBaseStateObject_Statics::NewProp_TimePassed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTempestBaseStateObject_Statics::NewProp_PerformingActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTempestBaseStateObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTempestBaseStateObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTempestBaseStateObject_Statics::ClassParams = {
		&UTempestBaseStateObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTempestBaseStateObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTempestBaseStateObject_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTempestBaseStateObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTempestBaseStateObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTempestBaseStateObject()
	{
		if (!Z_Registration_Info_UClass_UTempestBaseStateObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTempestBaseStateObject.OuterSingleton, Z_Construct_UClass_UTempestBaseStateObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTempestBaseStateObject.OuterSingleton;
	}
	template<> TEMPESTCOMBATFRAMEWORK_API UClass* StaticClass<UTempestBaseStateObject>()
	{
		return UTempestBaseStateObject::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTempestBaseStateObject);
	UTempestBaseStateObject::~UTempestBaseStateObject() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Objects_TempestBaseStateObject_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Objects_TempestBaseStateObject_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTempestBaseStateObject, UTempestBaseStateObject::StaticClass, TEXT("UTempestBaseStateObject"), &Z_Registration_Info_UClass_UTempestBaseStateObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTempestBaseStateObject), 745161167U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Objects_TempestBaseStateObject_h_806177876(TEXT("/Script/TempestCombatFramework"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Objects_TempestBaseStateObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Objects_TempestBaseStateObject_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
