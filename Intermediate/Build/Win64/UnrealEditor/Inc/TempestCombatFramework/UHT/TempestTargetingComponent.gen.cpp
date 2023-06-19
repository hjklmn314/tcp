// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TempestCombatFramework/Public/Components/TempestTargetingComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTempestTargetingComponent() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
	TEMPESTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UTempestTargetingComponent();
	TEMPESTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UTempestTargetingComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TempestCombatFramework();
// End Cross Module References
	DEFINE_FUNCTION(UTempestTargetingComponent::execCalculateAngleFromCamera)
	{
		P_GET_OBJECT(AActor,Z_Param_TargetActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->CalculateAngleFromCamera(Z_Param_TargetActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTempestTargetingComponent::execGetTargetedActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetTargetedActor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTempestTargetingComponent::execUpdatePotentialTargets)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdatePotentialTargets();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTempestTargetingComponent::execStaticSwitchToNewTarget)
	{
		P_GET_UBOOL(Z_Param_RightDirection);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StaticSwitchToNewTarget(Z_Param_RightDirection);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTempestTargetingComponent::execInternalSearchForActorToTarget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InternalSearchForActorToTarget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTempestTargetingComponent::execSearchForActorToTarget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SearchForActorToTarget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTempestTargetingComponent::execInitializeTargetingComponent)
	{
		P_GET_OBJECT(UCameraComponent,Z_Param_CameraComponent);
		P_GET_OBJECT(USpringArmComponent,Z_Param_SpringArmComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeTargetingComponent_Implementation(Z_Param_CameraComponent,Z_Param_SpringArmComponent);
		P_NATIVE_END;
	}
	struct TempestTargetingComponent_eventCanBeTargeted_Parms
	{
		AActor* ActorToTarget;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		TempestTargetingComponent_eventCanBeTargeted_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct TempestTargetingComponent_eventInitializeTargetingComponent_Parms
	{
		UCameraComponent* CameraComponent;
		USpringArmComponent* SpringArmComponent;
	};
	static FName NAME_UTempestTargetingComponent_CanBeTargeted = FName(TEXT("CanBeTargeted"));
	bool UTempestTargetingComponent::CanBeTargeted(AActor* ActorToTarget)
	{
		TempestTargetingComponent_eventCanBeTargeted_Parms Parms;
		Parms.ActorToTarget=ActorToTarget;
		ProcessEvent(FindFunctionChecked(NAME_UTempestTargetingComponent_CanBeTargeted),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UTempestTargetingComponent_DisableLockOn = FName(TEXT("DisableLockOn"));
	void UTempestTargetingComponent::DisableLockOn()
	{
		ProcessEvent(FindFunctionChecked(NAME_UTempestTargetingComponent_DisableLockOn),NULL);
	}
	static FName NAME_UTempestTargetingComponent_InitializeTargetingComponent = FName(TEXT("InitializeTargetingComponent"));
	void UTempestTargetingComponent::InitializeTargetingComponent(UCameraComponent* CameraComponent, USpringArmComponent* SpringArmComponent)
	{
		TempestTargetingComponent_eventInitializeTargetingComponent_Parms Parms;
		Parms.CameraComponent=CameraComponent;
		Parms.SpringArmComponent=SpringArmComponent;
		ProcessEvent(FindFunctionChecked(NAME_UTempestTargetingComponent_InitializeTargetingComponent),&Parms);
	}
	static FName NAME_UTempestTargetingComponent_SetLockOnToTarget = FName(TEXT("SetLockOnToTarget"));
	void UTempestTargetingComponent::SetLockOnToTarget()
	{
		ProcessEvent(FindFunctionChecked(NAME_UTempestTargetingComponent_SetLockOnToTarget),NULL);
	}
	void UTempestTargetingComponent::StaticRegisterNativesUTempestTargetingComponent()
	{
		UClass* Class = UTempestTargetingComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CalculateAngleFromCamera", &UTempestTargetingComponent::execCalculateAngleFromCamera },
			{ "GetTargetedActor", &UTempestTargetingComponent::execGetTargetedActor },
			{ "InitializeTargetingComponent", &UTempestTargetingComponent::execInitializeTargetingComponent },
			{ "InternalSearchForActorToTarget", &UTempestTargetingComponent::execInternalSearchForActorToTarget },
			{ "SearchForActorToTarget", &UTempestTargetingComponent::execSearchForActorToTarget },
			{ "StaticSwitchToNewTarget", &UTempestTargetingComponent::execStaticSwitchToNewTarget },
			{ "UpdatePotentialTargets", &UTempestTargetingComponent::execUpdatePotentialTargets },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTempestTargetingComponent_CalculateAngleFromCamera_Statics
	{
		struct TempestTargetingComponent_eventCalculateAngleFromCamera_Parms
		{
			const AActor* TargetActor;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestTargetingComponent_CalculateAngleFromCamera_Statics::NewProp_TargetActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTempestTargetingComponent_CalculateAngleFromCamera_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestTargetingComponent_eventCalculateAngleFromCamera_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTempestTargetingComponent_CalculateAngleFromCamera_Statics::NewProp_TargetActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestTargetingComponent_CalculateAngleFromCamera_Statics::NewProp_TargetActor_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTempestTargetingComponent_CalculateAngleFromCamera_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestTargetingComponent_eventCalculateAngleFromCamera_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestTargetingComponent_CalculateAngleFromCamera_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestTargetingComponent_CalculateAngleFromCamera_Statics::NewProp_TargetActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestTargetingComponent_CalculateAngleFromCamera_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestTargetingComponent_CalculateAngleFromCamera_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math Calculations" },
		{ "Comment", "/*    Math Functions     */" },
		{ "ModuleRelativePath", "Public/Components/TempestTargetingComponent.h" },
		{ "ToolTip", "Math Functions" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestTargetingComponent_CalculateAngleFromCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestTargetingComponent, nullptr, "CalculateAngleFromCamera", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTempestTargetingComponent_CalculateAngleFromCamera_Statics::TempestTargetingComponent_eventCalculateAngleFromCamera_Parms), Z_Construct_UFunction_UTempestTargetingComponent_CalculateAngleFromCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestTargetingComponent_CalculateAngleFromCamera_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestTargetingComponent_CalculateAngleFromCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestTargetingComponent_CalculateAngleFromCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestTargetingComponent_CalculateAngleFromCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestTargetingComponent_CalculateAngleFromCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestTargetingComponent_CanBeTargeted_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorToTarget;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTempestTargetingComponent_CanBeTargeted_Statics::NewProp_ActorToTarget = { "ActorToTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestTargetingComponent_eventCanBeTargeted_Parms, ActorToTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTempestTargetingComponent_CanBeTargeted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TempestTargetingComponent_eventCanBeTargeted_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTempestTargetingComponent_CanBeTargeted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TempestTargetingComponent_eventCanBeTargeted_Parms), &Z_Construct_UFunction_UTempestTargetingComponent_CanBeTargeted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestTargetingComponent_CanBeTargeted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestTargetingComponent_CanBeTargeted_Statics::NewProp_ActorToTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestTargetingComponent_CanBeTargeted_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestTargetingComponent_CanBeTargeted_Statics::Function_MetaDataParams[] = {
		{ "Category", "Targeting Component Getters" },
		{ "Comment", "/* Getters */" },
		{ "ModuleRelativePath", "Public/Components/TempestTargetingComponent.h" },
		{ "ToolTip", "Getters" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestTargetingComponent_CanBeTargeted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestTargetingComponent, nullptr, "CanBeTargeted", nullptr, nullptr, sizeof(TempestTargetingComponent_eventCanBeTargeted_Parms), Z_Construct_UFunction_UTempestTargetingComponent_CanBeTargeted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestTargetingComponent_CanBeTargeted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestTargetingComponent_CanBeTargeted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestTargetingComponent_CanBeTargeted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestTargetingComponent_CanBeTargeted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestTargetingComponent_CanBeTargeted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestTargetingComponent_DisableLockOn_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestTargetingComponent_DisableLockOn_Statics::Function_MetaDataParams[] = {
		{ "Category", "Targeting Component Functions" },
		{ "ModuleRelativePath", "Public/Components/TempestTargetingComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestTargetingComponent_DisableLockOn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestTargetingComponent, nullptr, "DisableLockOn", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestTargetingComponent_DisableLockOn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestTargetingComponent_DisableLockOn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestTargetingComponent_DisableLockOn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestTargetingComponent_DisableLockOn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestTargetingComponent_GetTargetedActor_Statics
	{
		struct TempestTargetingComponent_eventGetTargetedActor_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTempestTargetingComponent_GetTargetedActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestTargetingComponent_eventGetTargetedActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestTargetingComponent_GetTargetedActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestTargetingComponent_GetTargetedActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestTargetingComponent_GetTargetedActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Targeting Component Getters" },
		{ "ModuleRelativePath", "Public/Components/TempestTargetingComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestTargetingComponent_GetTargetedActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestTargetingComponent, nullptr, "GetTargetedActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTempestTargetingComponent_GetTargetedActor_Statics::TempestTargetingComponent_eventGetTargetedActor_Parms), Z_Construct_UFunction_UTempestTargetingComponent_GetTargetedActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestTargetingComponent_GetTargetedActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestTargetingComponent_GetTargetedActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestTargetingComponent_GetTargetedActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestTargetingComponent_GetTargetedActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestTargetingComponent_GetTargetedActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestTargetingComponent_InitializeTargetingComponent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringArmComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArmComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestTargetingComponent_InitializeTargetingComponent_Statics::NewProp_CameraComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTempestTargetingComponent_InitializeTargetingComponent_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestTargetingComponent_eventInitializeTargetingComponent_Parms, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTempestTargetingComponent_InitializeTargetingComponent_Statics::NewProp_CameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestTargetingComponent_InitializeTargetingComponent_Statics::NewProp_CameraComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestTargetingComponent_InitializeTargetingComponent_Statics::NewProp_SpringArmComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTempestTargetingComponent_InitializeTargetingComponent_Statics::NewProp_SpringArmComponent = { "SpringArmComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestTargetingComponent_eventInitializeTargetingComponent_Parms, SpringArmComponent), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTempestTargetingComponent_InitializeTargetingComponent_Statics::NewProp_SpringArmComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestTargetingComponent_InitializeTargetingComponent_Statics::NewProp_SpringArmComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestTargetingComponent_InitializeTargetingComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestTargetingComponent_InitializeTargetingComponent_Statics::NewProp_CameraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestTargetingComponent_InitializeTargetingComponent_Statics::NewProp_SpringArmComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestTargetingComponent_InitializeTargetingComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Targeting Component Functions" },
		{ "ModuleRelativePath", "Public/Components/TempestTargetingComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestTargetingComponent_InitializeTargetingComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestTargetingComponent, nullptr, "InitializeTargetingComponent", nullptr, nullptr, sizeof(TempestTargetingComponent_eventInitializeTargetingComponent_Parms), Z_Construct_UFunction_UTempestTargetingComponent_InitializeTargetingComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestTargetingComponent_InitializeTargetingComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestTargetingComponent_InitializeTargetingComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestTargetingComponent_InitializeTargetingComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestTargetingComponent_InitializeTargetingComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestTargetingComponent_InitializeTargetingComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestTargetingComponent_InternalSearchForActorToTarget_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestTargetingComponent_InternalSearchForActorToTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/TempestTargetingComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestTargetingComponent_InternalSearchForActorToTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestTargetingComponent, nullptr, "InternalSearchForActorToTarget", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestTargetingComponent_InternalSearchForActorToTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestTargetingComponent_InternalSearchForActorToTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestTargetingComponent_InternalSearchForActorToTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestTargetingComponent_InternalSearchForActorToTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestTargetingComponent_SearchForActorToTarget_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestTargetingComponent_SearchForActorToTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Targeting Component Functions" },
		{ "ModuleRelativePath", "Public/Components/TempestTargetingComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestTargetingComponent_SearchForActorToTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestTargetingComponent, nullptr, "SearchForActorToTarget", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestTargetingComponent_SearchForActorToTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestTargetingComponent_SearchForActorToTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestTargetingComponent_SearchForActorToTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestTargetingComponent_SearchForActorToTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestTargetingComponent_SetLockOnToTarget_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestTargetingComponent_SetLockOnToTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Targeting Component Functions" },
		{ "ModuleRelativePath", "Public/Components/TempestTargetingComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestTargetingComponent_SetLockOnToTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestTargetingComponent, nullptr, "SetLockOnToTarget", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestTargetingComponent_SetLockOnToTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestTargetingComponent_SetLockOnToTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestTargetingComponent_SetLockOnToTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestTargetingComponent_SetLockOnToTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestTargetingComponent_StaticSwitchToNewTarget_Statics
	{
		struct TempestTargetingComponent_eventStaticSwitchToNewTarget_Parms
		{
			bool RightDirection;
		};
		static void NewProp_RightDirection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_RightDirection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTempestTargetingComponent_StaticSwitchToNewTarget_Statics::NewProp_RightDirection_SetBit(void* Obj)
	{
		((TempestTargetingComponent_eventStaticSwitchToNewTarget_Parms*)Obj)->RightDirection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTempestTargetingComponent_StaticSwitchToNewTarget_Statics::NewProp_RightDirection = { "RightDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TempestTargetingComponent_eventStaticSwitchToNewTarget_Parms), &Z_Construct_UFunction_UTempestTargetingComponent_StaticSwitchToNewTarget_Statics::NewProp_RightDirection_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestTargetingComponent_StaticSwitchToNewTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestTargetingComponent_StaticSwitchToNewTarget_Statics::NewProp_RightDirection,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestTargetingComponent_StaticSwitchToNewTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Targeting Component Functions" },
		{ "ModuleRelativePath", "Public/Components/TempestTargetingComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestTargetingComponent_StaticSwitchToNewTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestTargetingComponent, nullptr, "StaticSwitchToNewTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTempestTargetingComponent_StaticSwitchToNewTarget_Statics::TempestTargetingComponent_eventStaticSwitchToNewTarget_Parms), Z_Construct_UFunction_UTempestTargetingComponent_StaticSwitchToNewTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestTargetingComponent_StaticSwitchToNewTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestTargetingComponent_StaticSwitchToNewTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestTargetingComponent_StaticSwitchToNewTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestTargetingComponent_StaticSwitchToNewTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestTargetingComponent_StaticSwitchToNewTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestTargetingComponent_UpdatePotentialTargets_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestTargetingComponent_UpdatePotentialTargets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Targeting Component Functions" },
		{ "ModuleRelativePath", "Public/Components/TempestTargetingComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestTargetingComponent_UpdatePotentialTargets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestTargetingComponent, nullptr, "UpdatePotentialTargets", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestTargetingComponent_UpdatePotentialTargets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestTargetingComponent_UpdatePotentialTargets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestTargetingComponent_UpdatePotentialTargets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestTargetingComponent_UpdatePotentialTargets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTempestTargetingComponent);
	UClass* Z_Construct_UClass_UTempestTargetingComponent_NoRegister()
	{
		return UTempestTargetingComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTempestTargetingComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetedActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetedActor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PotentialTargets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PotentialTargets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PotentialTargets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetingRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetingRadius;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TargetsType_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetsType_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TargetsType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClassToTarget_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ClassToTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnerCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnerSpringArm_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerSpringArm;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTempestTargetingComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TempestCombatFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTempestTargetingComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTempestTargetingComponent_CalculateAngleFromCamera, "CalculateAngleFromCamera" }, // 2812926628
		{ &Z_Construct_UFunction_UTempestTargetingComponent_CanBeTargeted, "CanBeTargeted" }, // 3531029159
		{ &Z_Construct_UFunction_UTempestTargetingComponent_DisableLockOn, "DisableLockOn" }, // 712016767
		{ &Z_Construct_UFunction_UTempestTargetingComponent_GetTargetedActor, "GetTargetedActor" }, // 975892468
		{ &Z_Construct_UFunction_UTempestTargetingComponent_InitializeTargetingComponent, "InitializeTargetingComponent" }, // 3415152216
		{ &Z_Construct_UFunction_UTempestTargetingComponent_InternalSearchForActorToTarget, "InternalSearchForActorToTarget" }, // 1781152889
		{ &Z_Construct_UFunction_UTempestTargetingComponent_SearchForActorToTarget, "SearchForActorToTarget" }, // 590856517
		{ &Z_Construct_UFunction_UTempestTargetingComponent_SetLockOnToTarget, "SetLockOnToTarget" }, // 1347854924
		{ &Z_Construct_UFunction_UTempestTargetingComponent_StaticSwitchToNewTarget, "StaticSwitchToNewTarget" }, // 2597507061
		{ &Z_Construct_UFunction_UTempestTargetingComponent_UpdatePotentialTargets, "UpdatePotentialTargets" }, // 2152003428
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTempestTargetingComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/TempestTargetingComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/TempestTargetingComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTempestTargetingComponent_Statics::NewProp_TargetedActor_MetaData[] = {
		{ "Category", "Targeting Properties" },
		{ "ModuleRelativePath", "Public/Components/TempestTargetingComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTempestTargetingComponent_Statics::NewProp_TargetedActor = { "TargetedActor", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTempestTargetingComponent, TargetedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTempestTargetingComponent_Statics::NewProp_TargetedActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTempestTargetingComponent_Statics::NewProp_TargetedActor_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTempestTargetingComponent_Statics::NewProp_PotentialTargets_Inner = { "PotentialTargets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTempestTargetingComponent_Statics::NewProp_PotentialTargets_MetaData[] = {
		{ "Category", "Targeting Properties" },
		{ "ModuleRelativePath", "Public/Components/TempestTargetingComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTempestTargetingComponent_Statics::NewProp_PotentialTargets = { "PotentialTargets", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTempestTargetingComponent, PotentialTargets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTempestTargetingComponent_Statics::NewProp_PotentialTargets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTempestTargetingComponent_Statics::NewProp_PotentialTargets_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTempestTargetingComponent_Statics::NewProp_TargetingRadius_MetaData[] = {
		{ "Category", "Targeting Properties" },
		{ "ModuleRelativePath", "Public/Components/TempestTargetingComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTempestTargetingComponent_Statics::NewProp_TargetingRadius = { "TargetingRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTempestTargetingComponent, TargetingRadius), METADATA_PARAMS(Z_Construct_UClass_UTempestTargetingComponent_Statics::NewProp_TargetingRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTempestTargetingComponent_Statics::NewProp_TargetingRadius_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTempestTargetingComponent_Statics::NewProp_TargetsType_Inner = { "TargetsType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(nullptr, 0) }; // 3629342158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTempestTargetingComponent_Statics::NewProp_TargetsType_MetaData[] = {
		{ "Category", "Targeting Properties" },
		{ "ModuleRelativePath", "Public/Components/TempestTargetingComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTempestTargetingComponent_Statics::NewProp_TargetsType = { "TargetsType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTempestTargetingComponent, TargetsType), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTempestTargetingComponent_Statics::NewProp_TargetsType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTempestTargetingComponent_Statics::NewProp_TargetsType_MetaData)) }; // 3629342158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTempestTargetingComponent_Statics::NewProp_ClassToTarget_MetaData[] = {
		{ "Category", "Targeting Properties" },
		{ "ModuleRelativePath", "Public/Components/TempestTargetingComponent.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UTempestTargetingComponent_Statics::NewProp_ClassToTarget = { "ClassToTarget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTempestTargetingComponent, ClassToTarget), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTempestTargetingComponent_Statics::NewProp_ClassToTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTempestTargetingComponent_Statics::NewProp_ClassToTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTempestTargetingComponent_Statics::NewProp_OwnerCamera_MetaData[] = {
		{ "Category", "Targeting Base Values" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/TempestTargetingComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTempestTargetingComponent_Statics::NewProp_OwnerCamera = { "OwnerCamera", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTempestTargetingComponent, OwnerCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTempestTargetingComponent_Statics::NewProp_OwnerCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTempestTargetingComponent_Statics::NewProp_OwnerCamera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTempestTargetingComponent_Statics::NewProp_OwnerSpringArm_MetaData[] = {
		{ "Category", "Targeting Base Values" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/TempestTargetingComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTempestTargetingComponent_Statics::NewProp_OwnerSpringArm = { "OwnerSpringArm", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTempestTargetingComponent, OwnerSpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTempestTargetingComponent_Statics::NewProp_OwnerSpringArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTempestTargetingComponent_Statics::NewProp_OwnerSpringArm_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTempestTargetingComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTempestTargetingComponent_Statics::NewProp_TargetedActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTempestTargetingComponent_Statics::NewProp_PotentialTargets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTempestTargetingComponent_Statics::NewProp_PotentialTargets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTempestTargetingComponent_Statics::NewProp_TargetingRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTempestTargetingComponent_Statics::NewProp_TargetsType_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTempestTargetingComponent_Statics::NewProp_TargetsType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTempestTargetingComponent_Statics::NewProp_ClassToTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTempestTargetingComponent_Statics::NewProp_OwnerCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTempestTargetingComponent_Statics::NewProp_OwnerSpringArm,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTempestTargetingComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTempestTargetingComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTempestTargetingComponent_Statics::ClassParams = {
		&UTempestTargetingComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTempestTargetingComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTempestTargetingComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTempestTargetingComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTempestTargetingComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTempestTargetingComponent()
	{
		if (!Z_Registration_Info_UClass_UTempestTargetingComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTempestTargetingComponent.OuterSingleton, Z_Construct_UClass_UTempestTargetingComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTempestTargetingComponent.OuterSingleton;
	}
	template<> TEMPESTCOMBATFRAMEWORK_API UClass* StaticClass<UTempestTargetingComponent>()
	{
		return UTempestTargetingComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTempestTargetingComponent);
	UTempestTargetingComponent::~UTempestTargetingComponent() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Components_TempestTargetingComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Components_TempestTargetingComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTempestTargetingComponent, UTempestTargetingComponent::StaticClass, TEXT("UTempestTargetingComponent"), &Z_Registration_Info_UClass_UTempestTargetingComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTempestTargetingComponent), 1497710979U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Components_TempestTargetingComponent_h_1809139482(TEXT("/Script/TempestCombatFramework"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Components_TempestTargetingComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Components_TempestTargetingComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
