// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TempestCameraSystems/Public/Objects/TempestBaseCameraMode.h"
#include "GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTempestBaseCameraMode() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	TEMPESTCAMERASYSTEMS_API UClass* Z_Construct_UClass_UTempestBaseCameraMode();
	TEMPESTCAMERASYSTEMS_API UClass* Z_Construct_UClass_UTempestBaseCameraMode_NoRegister();
	TEMPESTCAMERASYSTEMS_API UClass* Z_Construct_UClass_UTempestBaseCameraProperty_NoRegister();
	TEMPESTCAMERASYSTEMS_API UClass* Z_Construct_UClass_UTempestCameraModeComponent_NoRegister();
	TEMPESTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UTempestBaseObject();
	UPackage* Z_Construct_UPackage__Script_TempestCameraSystems();
// End Cross Module References
	DEFINE_FUNCTION(UTempestBaseCameraMode::execConstructCameraPropertyOfClass)
	{
		P_GET_OBJECT(UClass,Z_Param_NewCameraPropertyClass);
		P_GET_OBJECT_REF(UTempestBaseCameraProperty,Z_Param_Out_CreatedCameraProperty);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ConstructCameraPropertyOfClass(Z_Param_NewCameraPropertyClass,Z_Param_Out_CreatedCameraProperty);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTempestBaseCameraMode::execGetCameraPropertyOfClass)
	{
		P_GET_OBJECT(UClass,Z_Param_PropertyClassToFind);
		P_GET_OBJECT_REF(UTempestBaseCameraProperty,Z_Param_Out_FoundCameraProperty);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetCameraPropertyOfClass(Z_Param_PropertyClassToFind,Z_Param_Out_FoundCameraProperty);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTempestBaseCameraMode::execGetCameraPropertyOfType)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_PropertyTypeToFind);
		P_GET_OBJECT_REF(UTempestBaseCameraProperty,Z_Param_Out_FoundCameraProperty);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetCameraPropertyOfType(Z_Param_PropertyTypeToFind,Z_Param_Out_FoundCameraProperty);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTempestBaseCameraMode::execSetCameraModeStatus)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_NewCameraModeStatus);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCameraModeStatus(Z_Param_NewCameraModeStatus);
		P_NATIVE_END;
	}
	struct TempestBaseCameraMode_eventTickCameraMode_Parms
	{
		float TickValue;
	};
	static FName NAME_UTempestBaseCameraMode_ConstructCameraMode = FName(TEXT("ConstructCameraMode"));
	void UTempestBaseCameraMode::ConstructCameraMode()
	{
		ProcessEvent(FindFunctionChecked(NAME_UTempestBaseCameraMode_ConstructCameraMode),NULL);
	}
	static FName NAME_UTempestBaseCameraMode_EndCameraMode = FName(TEXT("EndCameraMode"));
	void UTempestBaseCameraMode::EndCameraMode()
	{
		ProcessEvent(FindFunctionChecked(NAME_UTempestBaseCameraMode_EndCameraMode),NULL);
	}
	static FName NAME_UTempestBaseCameraMode_InitializeCameraProperties = FName(TEXT("InitializeCameraProperties"));
	void UTempestBaseCameraMode::InitializeCameraProperties()
	{
		ProcessEvent(FindFunctionChecked(NAME_UTempestBaseCameraMode_InitializeCameraProperties),NULL);
	}
	static FName NAME_UTempestBaseCameraMode_OnUpdatedCameraModeStatus = FName(TEXT("OnUpdatedCameraModeStatus"));
	void UTempestBaseCameraMode::OnUpdatedCameraModeStatus()
	{
		ProcessEvent(FindFunctionChecked(NAME_UTempestBaseCameraMode_OnUpdatedCameraModeStatus),NULL);
	}
	static FName NAME_UTempestBaseCameraMode_StartCameraMode = FName(TEXT("StartCameraMode"));
	void UTempestBaseCameraMode::StartCameraMode()
	{
		ProcessEvent(FindFunctionChecked(NAME_UTempestBaseCameraMode_StartCameraMode),NULL);
	}
	static FName NAME_UTempestBaseCameraMode_TickCameraMode = FName(TEXT("TickCameraMode"));
	void UTempestBaseCameraMode::TickCameraMode(float TickValue)
	{
		TempestBaseCameraMode_eventTickCameraMode_Parms Parms;
		Parms.TickValue=TickValue;
		ProcessEvent(FindFunctionChecked(NAME_UTempestBaseCameraMode_TickCameraMode),&Parms);
	}
	void UTempestBaseCameraMode::StaticRegisterNativesUTempestBaseCameraMode()
	{
		UClass* Class = UTempestBaseCameraMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConstructCameraPropertyOfClass", &UTempestBaseCameraMode::execConstructCameraPropertyOfClass },
			{ "GetCameraPropertyOfClass", &UTempestBaseCameraMode::execGetCameraPropertyOfClass },
			{ "GetCameraPropertyOfType", &UTempestBaseCameraMode::execGetCameraPropertyOfType },
			{ "SetCameraModeStatus", &UTempestBaseCameraMode::execSetCameraModeStatus },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTempestBaseCameraMode_ConstructCameraMode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestBaseCameraMode_ConstructCameraMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Base Functions" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseCameraMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestBaseCameraMode_ConstructCameraMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestBaseCameraMode, nullptr, "ConstructCameraMode", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestBaseCameraMode_ConstructCameraMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseCameraMode_ConstructCameraMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestBaseCameraMode_ConstructCameraMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestBaseCameraMode_ConstructCameraMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestBaseCameraMode_ConstructCameraPropertyOfClass_Statics
	{
		struct TempestBaseCameraMode_eventConstructCameraPropertyOfClass_Parms
		{
			TSubclassOf<UTempestBaseCameraProperty>  NewCameraPropertyClass;
			UTempestBaseCameraProperty* CreatedCameraProperty;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_NewCameraPropertyClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CreatedCameraProperty;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UTempestBaseCameraMode_ConstructCameraPropertyOfClass_Statics::NewProp_NewCameraPropertyClass = { "NewCameraPropertyClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestBaseCameraMode_eventConstructCameraPropertyOfClass_Parms, NewCameraPropertyClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UTempestBaseCameraProperty_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTempestBaseCameraMode_ConstructCameraPropertyOfClass_Statics::NewProp_CreatedCameraProperty = { "CreatedCameraProperty", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestBaseCameraMode_eventConstructCameraPropertyOfClass_Parms, CreatedCameraProperty), Z_Construct_UClass_UTempestBaseCameraProperty_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestBaseCameraMode_ConstructCameraPropertyOfClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestBaseCameraMode_ConstructCameraPropertyOfClass_Statics::NewProp_NewCameraPropertyClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestBaseCameraMode_ConstructCameraPropertyOfClass_Statics::NewProp_CreatedCameraProperty,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestBaseCameraMode_ConstructCameraPropertyOfClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera Mode Getters" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseCameraMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestBaseCameraMode_ConstructCameraPropertyOfClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestBaseCameraMode, nullptr, "ConstructCameraPropertyOfClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTempestBaseCameraMode_ConstructCameraPropertyOfClass_Statics::TempestBaseCameraMode_eventConstructCameraPropertyOfClass_Parms), Z_Construct_UFunction_UTempestBaseCameraMode_ConstructCameraPropertyOfClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseCameraMode_ConstructCameraPropertyOfClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestBaseCameraMode_ConstructCameraPropertyOfClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseCameraMode_ConstructCameraPropertyOfClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestBaseCameraMode_ConstructCameraPropertyOfClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestBaseCameraMode_ConstructCameraPropertyOfClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestBaseCameraMode_EndCameraMode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestBaseCameraMode_EndCameraMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Base Functions" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseCameraMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestBaseCameraMode_EndCameraMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestBaseCameraMode, nullptr, "EndCameraMode", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestBaseCameraMode_EndCameraMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseCameraMode_EndCameraMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestBaseCameraMode_EndCameraMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestBaseCameraMode_EndCameraMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestBaseCameraMode_GetCameraPropertyOfClass_Statics
	{
		struct TempestBaseCameraMode_eventGetCameraPropertyOfClass_Parms
		{
			TSubclassOf<UTempestBaseCameraProperty>  PropertyClassToFind;
			UTempestBaseCameraProperty* FoundCameraProperty;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_PropertyClassToFind;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FoundCameraProperty;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UTempestBaseCameraMode_GetCameraPropertyOfClass_Statics::NewProp_PropertyClassToFind = { "PropertyClassToFind", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestBaseCameraMode_eventGetCameraPropertyOfClass_Parms, PropertyClassToFind), Z_Construct_UClass_UClass, Z_Construct_UClass_UTempestBaseCameraProperty_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTempestBaseCameraMode_GetCameraPropertyOfClass_Statics::NewProp_FoundCameraProperty = { "FoundCameraProperty", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestBaseCameraMode_eventGetCameraPropertyOfClass_Parms, FoundCameraProperty), Z_Construct_UClass_UTempestBaseCameraProperty_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestBaseCameraMode_GetCameraPropertyOfClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestBaseCameraMode_GetCameraPropertyOfClass_Statics::NewProp_PropertyClassToFind,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestBaseCameraMode_GetCameraPropertyOfClass_Statics::NewProp_FoundCameraProperty,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestBaseCameraMode_GetCameraPropertyOfClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera Mode Getters" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseCameraMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestBaseCameraMode_GetCameraPropertyOfClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestBaseCameraMode, nullptr, "GetCameraPropertyOfClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTempestBaseCameraMode_GetCameraPropertyOfClass_Statics::TempestBaseCameraMode_eventGetCameraPropertyOfClass_Parms), Z_Construct_UFunction_UTempestBaseCameraMode_GetCameraPropertyOfClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseCameraMode_GetCameraPropertyOfClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestBaseCameraMode_GetCameraPropertyOfClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseCameraMode_GetCameraPropertyOfClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestBaseCameraMode_GetCameraPropertyOfClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestBaseCameraMode_GetCameraPropertyOfClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestBaseCameraMode_GetCameraPropertyOfType_Statics
	{
		struct TempestBaseCameraMode_eventGetCameraPropertyOfType_Parms
		{
			FGameplayTag PropertyTypeToFind;
			UTempestBaseCameraProperty* FoundCameraProperty;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PropertyTypeToFind;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FoundCameraProperty;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTempestBaseCameraMode_GetCameraPropertyOfType_Statics::NewProp_PropertyTypeToFind = { "PropertyTypeToFind", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestBaseCameraMode_eventGetCameraPropertyOfType_Parms, PropertyTypeToFind), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTempestBaseCameraMode_GetCameraPropertyOfType_Statics::NewProp_FoundCameraProperty = { "FoundCameraProperty", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestBaseCameraMode_eventGetCameraPropertyOfType_Parms, FoundCameraProperty), Z_Construct_UClass_UTempestBaseCameraProperty_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestBaseCameraMode_GetCameraPropertyOfType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestBaseCameraMode_GetCameraPropertyOfType_Statics::NewProp_PropertyTypeToFind,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestBaseCameraMode_GetCameraPropertyOfType_Statics::NewProp_FoundCameraProperty,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestBaseCameraMode_GetCameraPropertyOfType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera Mode Getters" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseCameraMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestBaseCameraMode_GetCameraPropertyOfType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestBaseCameraMode, nullptr, "GetCameraPropertyOfType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTempestBaseCameraMode_GetCameraPropertyOfType_Statics::TempestBaseCameraMode_eventGetCameraPropertyOfType_Parms), Z_Construct_UFunction_UTempestBaseCameraMode_GetCameraPropertyOfType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseCameraMode_GetCameraPropertyOfType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestBaseCameraMode_GetCameraPropertyOfType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseCameraMode_GetCameraPropertyOfType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestBaseCameraMode_GetCameraPropertyOfType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestBaseCameraMode_GetCameraPropertyOfType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestBaseCameraMode_InitializeCameraProperties_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestBaseCameraMode_InitializeCameraProperties_Statics::Function_MetaDataParams[] = {
		{ "Category", "Base Functions" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseCameraMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestBaseCameraMode_InitializeCameraProperties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestBaseCameraMode, nullptr, "InitializeCameraProperties", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestBaseCameraMode_InitializeCameraProperties_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseCameraMode_InitializeCameraProperties_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestBaseCameraMode_InitializeCameraProperties()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestBaseCameraMode_InitializeCameraProperties_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestBaseCameraMode_OnUpdatedCameraModeStatus_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestBaseCameraMode_OnUpdatedCameraModeStatus_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera Mode Setters" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseCameraMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestBaseCameraMode_OnUpdatedCameraModeStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestBaseCameraMode, nullptr, "OnUpdatedCameraModeStatus", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestBaseCameraMode_OnUpdatedCameraModeStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseCameraMode_OnUpdatedCameraModeStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestBaseCameraMode_OnUpdatedCameraModeStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestBaseCameraMode_OnUpdatedCameraModeStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestBaseCameraMode_SetCameraModeStatus_Statics
	{
		struct TempestBaseCameraMode_eventSetCameraModeStatus_Parms
		{
			FGameplayTag NewCameraModeStatus;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewCameraModeStatus;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTempestBaseCameraMode_SetCameraModeStatus_Statics::NewProp_NewCameraModeStatus = { "NewCameraModeStatus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestBaseCameraMode_eventSetCameraModeStatus_Parms, NewCameraModeStatus), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestBaseCameraMode_SetCameraModeStatus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestBaseCameraMode_SetCameraModeStatus_Statics::NewProp_NewCameraModeStatus,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestBaseCameraMode_SetCameraModeStatus_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera Mode Setters" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseCameraMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestBaseCameraMode_SetCameraModeStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestBaseCameraMode, nullptr, "SetCameraModeStatus", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTempestBaseCameraMode_SetCameraModeStatus_Statics::TempestBaseCameraMode_eventSetCameraModeStatus_Parms), Z_Construct_UFunction_UTempestBaseCameraMode_SetCameraModeStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseCameraMode_SetCameraModeStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestBaseCameraMode_SetCameraModeStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseCameraMode_SetCameraModeStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestBaseCameraMode_SetCameraModeStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestBaseCameraMode_SetCameraModeStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestBaseCameraMode_StartCameraMode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestBaseCameraMode_StartCameraMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Base Functions" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseCameraMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestBaseCameraMode_StartCameraMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestBaseCameraMode, nullptr, "StartCameraMode", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestBaseCameraMode_StartCameraMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseCameraMode_StartCameraMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestBaseCameraMode_StartCameraMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestBaseCameraMode_StartCameraMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestBaseCameraMode_TickCameraMode_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TickValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTempestBaseCameraMode_TickCameraMode_Statics::NewProp_TickValue = { "TickValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestBaseCameraMode_eventTickCameraMode_Parms, TickValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestBaseCameraMode_TickCameraMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestBaseCameraMode_TickCameraMode_Statics::NewProp_TickValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestBaseCameraMode_TickCameraMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Base Functions" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseCameraMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestBaseCameraMode_TickCameraMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestBaseCameraMode, nullptr, "TickCameraMode", nullptr, nullptr, sizeof(TempestBaseCameraMode_eventTickCameraMode_Parms), Z_Construct_UFunction_UTempestBaseCameraMode_TickCameraMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseCameraMode_TickCameraMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestBaseCameraMode_TickCameraMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseCameraMode_TickCameraMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestBaseCameraMode_TickCameraMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestBaseCameraMode_TickCameraMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTempestBaseCameraMode);
	UClass* Z_Construct_UClass_UTempestBaseCameraMode_NoRegister()
	{
		return UTempestBaseCameraMode::StaticClass();
	}
	struct Z_Construct_UClass_UTempestBaseCameraMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraModeStatus_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CameraModeStatus;
		static const UECodeGen_Private::FClassPropertyParams NewProp_CameraProperties_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraProperties_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CameraProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraModeComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraModeComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimePassed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimePassed;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CreatedCameraProperties_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CreatedCameraProperties_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CreatedCameraProperties;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTempestBaseCameraMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTempestBaseObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TempestCameraSystems,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTempestBaseCameraMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTempestBaseCameraMode_ConstructCameraMode, "ConstructCameraMode" }, // 852692395
		{ &Z_Construct_UFunction_UTempestBaseCameraMode_ConstructCameraPropertyOfClass, "ConstructCameraPropertyOfClass" }, // 3818743655
		{ &Z_Construct_UFunction_UTempestBaseCameraMode_EndCameraMode, "EndCameraMode" }, // 2757504653
		{ &Z_Construct_UFunction_UTempestBaseCameraMode_GetCameraPropertyOfClass, "GetCameraPropertyOfClass" }, // 1064981430
		{ &Z_Construct_UFunction_UTempestBaseCameraMode_GetCameraPropertyOfType, "GetCameraPropertyOfType" }, // 1767227247
		{ &Z_Construct_UFunction_UTempestBaseCameraMode_InitializeCameraProperties, "InitializeCameraProperties" }, // 938577979
		{ &Z_Construct_UFunction_UTempestBaseCameraMode_OnUpdatedCameraModeStatus, "OnUpdatedCameraModeStatus" }, // 717371145
		{ &Z_Construct_UFunction_UTempestBaseCameraMode_SetCameraModeStatus, "SetCameraModeStatus" }, // 284108904
		{ &Z_Construct_UFunction_UTempestBaseCameraMode_StartCameraMode, "StartCameraMode" }, // 430034179
		{ &Z_Construct_UFunction_UTempestBaseCameraMode_TickCameraMode, "TickCameraMode" }, // 1512906410
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTempestBaseCameraMode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Objects/TempestBaseCameraMode.h" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseCameraMode.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTempestBaseCameraMode_Statics::NewProp_CameraModeStatus_MetaData[] = {
		{ "Category", "Initialization" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseCameraMode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTempestBaseCameraMode_Statics::NewProp_CameraModeStatus = { "CameraModeStatus", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTempestBaseCameraMode, CameraModeStatus), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_UTempestBaseCameraMode_Statics::NewProp_CameraModeStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTempestBaseCameraMode_Statics::NewProp_CameraModeStatus_MetaData)) }; // 1225434376
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UTempestBaseCameraMode_Statics::NewProp_CameraProperties_Inner = { "CameraProperties", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UTempestBaseCameraProperty_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTempestBaseCameraMode_Statics::NewProp_CameraProperties_MetaData[] = {
		{ "Category", "Initialization" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseCameraMode.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTempestBaseCameraMode_Statics::NewProp_CameraProperties = { "CameraProperties", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTempestBaseCameraMode, CameraProperties), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTempestBaseCameraMode_Statics::NewProp_CameraProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTempestBaseCameraMode_Statics::NewProp_CameraProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTempestBaseCameraMode_Statics::NewProp_CameraModeComponent_MetaData[] = {
		{ "Category", "Base Variables" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseCameraMode.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTempestBaseCameraMode_Statics::NewProp_CameraModeComponent = { "CameraModeComponent", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTempestBaseCameraMode, CameraModeComponent), Z_Construct_UClass_UTempestCameraModeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTempestBaseCameraMode_Statics::NewProp_CameraModeComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTempestBaseCameraMode_Statics::NewProp_CameraModeComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTempestBaseCameraMode_Statics::NewProp_TimePassed_MetaData[] = {
		{ "Category", "Tick Values" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseCameraMode.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTempestBaseCameraMode_Statics::NewProp_TimePassed = { "TimePassed", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTempestBaseCameraMode, TimePassed), METADATA_PARAMS(Z_Construct_UClass_UTempestBaseCameraMode_Statics::NewProp_TimePassed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTempestBaseCameraMode_Statics::NewProp_TimePassed_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTempestBaseCameraMode_Statics::NewProp_CreatedCameraProperties_Inner = { "CreatedCameraProperties", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UTempestBaseCameraProperty_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTempestBaseCameraMode_Statics::NewProp_CreatedCameraProperties_MetaData[] = {
		{ "Category", "Initialization" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseCameraMode.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTempestBaseCameraMode_Statics::NewProp_CreatedCameraProperties = { "CreatedCameraProperties", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTempestBaseCameraMode, CreatedCameraProperties), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTempestBaseCameraMode_Statics::NewProp_CreatedCameraProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTempestBaseCameraMode_Statics::NewProp_CreatedCameraProperties_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTempestBaseCameraMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTempestBaseCameraMode_Statics::NewProp_CameraModeStatus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTempestBaseCameraMode_Statics::NewProp_CameraProperties_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTempestBaseCameraMode_Statics::NewProp_CameraProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTempestBaseCameraMode_Statics::NewProp_CameraModeComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTempestBaseCameraMode_Statics::NewProp_TimePassed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTempestBaseCameraMode_Statics::NewProp_CreatedCameraProperties_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTempestBaseCameraMode_Statics::NewProp_CreatedCameraProperties,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTempestBaseCameraMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTempestBaseCameraMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTempestBaseCameraMode_Statics::ClassParams = {
		&UTempestBaseCameraMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTempestBaseCameraMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTempestBaseCameraMode_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTempestBaseCameraMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTempestBaseCameraMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTempestBaseCameraMode()
	{
		if (!Z_Registration_Info_UClass_UTempestBaseCameraMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTempestBaseCameraMode.OuterSingleton, Z_Construct_UClass_UTempestBaseCameraMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTempestBaseCameraMode.OuterSingleton;
	}
	template<> TEMPESTCAMERASYSTEMS_API UClass* StaticClass<UTempestBaseCameraMode>()
	{
		return UTempestBaseCameraMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTempestBaseCameraMode);
	UTempestBaseCameraMode::~UTempestBaseCameraMode() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCameraSystems_Public_Objects_TempestBaseCameraMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCameraSystems_Public_Objects_TempestBaseCameraMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTempestBaseCameraMode, UTempestBaseCameraMode::StaticClass, TEXT("UTempestBaseCameraMode"), &Z_Registration_Info_UClass_UTempestBaseCameraMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTempestBaseCameraMode), 2075686008U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCameraSystems_Public_Objects_TempestBaseCameraMode_h_3230638140(TEXT("/Script/TempestCameraSystems"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCameraSystems_Public_Objects_TempestBaseCameraMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCameraSystems_Public_Objects_TempestBaseCameraMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
