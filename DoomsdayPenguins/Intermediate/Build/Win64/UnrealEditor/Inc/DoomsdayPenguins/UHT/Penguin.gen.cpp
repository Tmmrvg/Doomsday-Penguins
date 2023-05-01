// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DoomsdayPenguins/Penguin.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePenguin() {}
// Cross Module References
	DOOMSDAYPENGUINS_API UClass* Z_Construct_UClass_APenguin();
	DOOMSDAYPENGUINS_API UClass* Z_Construct_UClass_APenguin_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DoomsdayPenguins();
// End Cross Module References
	static FName NAME_APenguin_ToggleSettings = FName(TEXT("ToggleSettings"));
	void APenguin::ToggleSettings()
	{
		ProcessEvent(FindFunctionChecked(NAME_APenguin_ToggleSettings),NULL);
	}
	void APenguin::StaticRegisterNativesAPenguin()
	{
	}
	struct Z_Construct_UFunction_APenguin_ToggleSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APenguin_ToggleSettings_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//\n" },
		{ "ModuleRelativePath", "Penguin.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APenguin_ToggleSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APenguin, nullptr, "ToggleSettings", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APenguin_ToggleSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APenguin_ToggleSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APenguin_ToggleSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APenguin_ToggleSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APenguin);
	UClass* Z_Construct_UClass_APenguin_NoRegister()
	{
		return APenguin::StaticClass();
	}
	struct Z_Construct_UClass_APenguin_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameOver_MetaData[];
#endif
		static void NewProp_GameOver_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_GameOver;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameWon_MetaData[];
#endif
		static void NewProp_GameWon_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_GameWon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsPaused_MetaData[];
#endif
		static void NewProp_IsPaused_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsPaused;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasGameStarted_MetaData[];
#endif
		static void NewProp_bHasGameStarted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasGameStarted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Seconds_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Seconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Minutes_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Minutes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsSlowed_MetaData[];
#endif
		static void NewProp_IsSlowed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsSlowed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeedBoostTimer_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedBoostTimer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasSpeedBoost_MetaData[];
#endif
		static void NewProp_bHasSpeedBoost_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasSpeedBoost;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlowTime_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_SlowTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Lives_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Lives;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForwardInput_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ForwardInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpInput_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_UpInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightInput_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RightInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShootInput_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ShootInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReloadInput_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReloadInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MouseXInput_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MouseXInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MouseYInput_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MouseYInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RestartInput_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RestartInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SettingsInput_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SettingsInput;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APenguin_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_DoomsdayPenguins,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APenguin_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APenguin_ToggleSettings, "ToggleSettings" }, // 1986827783
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APenguin_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Penguin.h" },
		{ "ModuleRelativePath", "Penguin.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APenguin_Statics::NewProp_SpringArm_MetaData[] = {
		{ "Category", "PlayerVariables" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Penguin.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APenguin_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APenguin, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APenguin_Statics::NewProp_SpringArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APenguin_Statics::NewProp_SpringArm_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APenguin_Statics::NewProp_Camera_MetaData[] = {
		{ "Category", "PlayerVariables" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Penguin.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APenguin_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APenguin, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APenguin_Statics::NewProp_Camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APenguin_Statics::NewProp_Camera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APenguin_Statics::NewProp_GameOver_MetaData[] = {
		{ "Category", "GameState" },
		{ "Comment", "// UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"PlayerVariables\")\n// class UBoxComponent* Collider;\n" },
		{ "ModuleRelativePath", "Penguin.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"PlayerVariables\")\nclass UBoxComponent* Collider;" },
	};
#endif
	void Z_Construct_UClass_APenguin_Statics::NewProp_GameOver_SetBit(void* Obj)
	{
		((APenguin*)Obj)->GameOver = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APenguin_Statics::NewProp_GameOver = { "GameOver", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(APenguin), &Z_Construct_UClass_APenguin_Statics::NewProp_GameOver_SetBit, METADATA_PARAMS(Z_Construct_UClass_APenguin_Statics::NewProp_GameOver_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APenguin_Statics::NewProp_GameOver_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APenguin_Statics::NewProp_GameWon_MetaData[] = {
		{ "Category", "GameState" },
		{ "ModuleRelativePath", "Penguin.h" },
	};
#endif
	void Z_Construct_UClass_APenguin_Statics::NewProp_GameWon_SetBit(void* Obj)
	{
		((APenguin*)Obj)->GameWon = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APenguin_Statics::NewProp_GameWon = { "GameWon", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(APenguin), &Z_Construct_UClass_APenguin_Statics::NewProp_GameWon_SetBit, METADATA_PARAMS(Z_Construct_UClass_APenguin_Statics::NewProp_GameWon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APenguin_Statics::NewProp_GameWon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APenguin_Statics::NewProp_IsPaused_MetaData[] = {
		{ "Category", "GameState" },
		{ "ModuleRelativePath", "Penguin.h" },
	};
#endif
	void Z_Construct_UClass_APenguin_Statics::NewProp_IsPaused_SetBit(void* Obj)
	{
		((APenguin*)Obj)->IsPaused = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APenguin_Statics::NewProp_IsPaused = { "IsPaused", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(APenguin), &Z_Construct_UClass_APenguin_Statics::NewProp_IsPaused_SetBit, METADATA_PARAMS(Z_Construct_UClass_APenguin_Statics::NewProp_IsPaused_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APenguin_Statics::NewProp_IsPaused_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APenguin_Statics::NewProp_bHasGameStarted_MetaData[] = {
		{ "Category", "GameState" },
		{ "ModuleRelativePath", "Penguin.h" },
	};
#endif
	void Z_Construct_UClass_APenguin_Statics::NewProp_bHasGameStarted_SetBit(void* Obj)
	{
		((APenguin*)Obj)->bHasGameStarted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APenguin_Statics::NewProp_bHasGameStarted = { "bHasGameStarted", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(APenguin), &Z_Construct_UClass_APenguin_Statics::NewProp_bHasGameStarted_SetBit, METADATA_PARAMS(Z_Construct_UClass_APenguin_Statics::NewProp_bHasGameStarted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APenguin_Statics::NewProp_bHasGameStarted_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APenguin_Statics::NewProp_Seconds_MetaData[] = {
		{ "Category", "Penguin" },
		{ "ModuleRelativePath", "Penguin.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APenguin_Statics::NewProp_Seconds = { "Seconds", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APenguin, Seconds), METADATA_PARAMS(Z_Construct_UClass_APenguin_Statics::NewProp_Seconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APenguin_Statics::NewProp_Seconds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APenguin_Statics::NewProp_Minutes_MetaData[] = {
		{ "Category", "Penguin" },
		{ "ModuleRelativePath", "Penguin.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_APenguin_Statics::NewProp_Minutes = { "Minutes", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APenguin, Minutes), METADATA_PARAMS(Z_Construct_UClass_APenguin_Statics::NewProp_Minutes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APenguin_Statics::NewProp_Minutes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APenguin_Statics::NewProp_IsSlowed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "My Variables" },
		{ "ModuleRelativePath", "Penguin.h" },
	};
#endif
	void Z_Construct_UClass_APenguin_Statics::NewProp_IsSlowed_SetBit(void* Obj)
	{
		((APenguin*)Obj)->IsSlowed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APenguin_Statics::NewProp_IsSlowed = { "IsSlowed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(APenguin), &Z_Construct_UClass_APenguin_Statics::NewProp_IsSlowed_SetBit, METADATA_PARAMS(Z_Construct_UClass_APenguin_Statics::NewProp_IsSlowed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APenguin_Statics::NewProp_IsSlowed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APenguin_Statics::NewProp_SpeedBoostTimer_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "My Variables" },
		{ "ModuleRelativePath", "Penguin.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APenguin_Statics::NewProp_SpeedBoostTimer = { "SpeedBoostTimer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APenguin, SpeedBoostTimer), METADATA_PARAMS(Z_Construct_UClass_APenguin_Statics::NewProp_SpeedBoostTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APenguin_Statics::NewProp_SpeedBoostTimer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APenguin_Statics::NewProp_bHasSpeedBoost_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "My Variables" },
		{ "ModuleRelativePath", "Penguin.h" },
	};
#endif
	void Z_Construct_UClass_APenguin_Statics::NewProp_bHasSpeedBoost_SetBit(void* Obj)
	{
		((APenguin*)Obj)->bHasSpeedBoost = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APenguin_Statics::NewProp_bHasSpeedBoost = { "bHasSpeedBoost", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(APenguin), &Z_Construct_UClass_APenguin_Statics::NewProp_bHasSpeedBoost_SetBit, METADATA_PARAMS(Z_Construct_UClass_APenguin_Statics::NewProp_bHasSpeedBoost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APenguin_Statics::NewProp_bHasSpeedBoost_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APenguin_Statics::NewProp_SlowTime_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "My Variables" },
		{ "ModuleRelativePath", "Penguin.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_APenguin_Statics::NewProp_SlowTime = { "SlowTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APenguin, SlowTime), METADATA_PARAMS(Z_Construct_UClass_APenguin_Statics::NewProp_SlowTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APenguin_Statics::NewProp_SlowTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APenguin_Statics::NewProp_Lives_MetaData[] = {
		{ "Category", "My Variables" },
		{ "ModuleRelativePath", "Penguin.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_APenguin_Statics::NewProp_Lives = { "Lives", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APenguin, Lives), METADATA_PARAMS(Z_Construct_UClass_APenguin_Statics::NewProp_Lives_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APenguin_Statics::NewProp_Lives_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APenguin_Statics::NewProp_MappingContext_MetaData[] = {
		{ "Category", "InputSystem" },
		{ "ModuleRelativePath", "Penguin.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APenguin_Statics::NewProp_MappingContext = { "MappingContext", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APenguin, MappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APenguin_Statics::NewProp_MappingContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APenguin_Statics::NewProp_MappingContext_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APenguin_Statics::NewProp_ForwardInput_MetaData[] = {
		{ "Category", "InputSystem" },
		{ "ModuleRelativePath", "Penguin.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APenguin_Statics::NewProp_ForwardInput = { "ForwardInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APenguin, ForwardInput), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APenguin_Statics::NewProp_ForwardInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APenguin_Statics::NewProp_ForwardInput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APenguin_Statics::NewProp_UpInput_MetaData[] = {
		{ "Category", "InputSystem" },
		{ "ModuleRelativePath", "Penguin.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APenguin_Statics::NewProp_UpInput = { "UpInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APenguin, UpInput), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APenguin_Statics::NewProp_UpInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APenguin_Statics::NewProp_UpInput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APenguin_Statics::NewProp_RightInput_MetaData[] = {
		{ "Category", "InputSystem" },
		{ "ModuleRelativePath", "Penguin.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APenguin_Statics::NewProp_RightInput = { "RightInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APenguin, RightInput), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APenguin_Statics::NewProp_RightInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APenguin_Statics::NewProp_RightInput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APenguin_Statics::NewProp_ShootInput_MetaData[] = {
		{ "Category", "InputSystem" },
		{ "ModuleRelativePath", "Penguin.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APenguin_Statics::NewProp_ShootInput = { "ShootInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APenguin, ShootInput), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APenguin_Statics::NewProp_ShootInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APenguin_Statics::NewProp_ShootInput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APenguin_Statics::NewProp_ReloadInput_MetaData[] = {
		{ "Category", "InputSystem" },
		{ "ModuleRelativePath", "Penguin.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APenguin_Statics::NewProp_ReloadInput = { "ReloadInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APenguin, ReloadInput), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APenguin_Statics::NewProp_ReloadInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APenguin_Statics::NewProp_ReloadInput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APenguin_Statics::NewProp_MouseXInput_MetaData[] = {
		{ "Category", "InputSystem" },
		{ "ModuleRelativePath", "Penguin.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APenguin_Statics::NewProp_MouseXInput = { "MouseXInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APenguin, MouseXInput), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APenguin_Statics::NewProp_MouseXInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APenguin_Statics::NewProp_MouseXInput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APenguin_Statics::NewProp_MouseYInput_MetaData[] = {
		{ "Category", "InputSystem" },
		{ "ModuleRelativePath", "Penguin.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APenguin_Statics::NewProp_MouseYInput = { "MouseYInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APenguin, MouseYInput), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APenguin_Statics::NewProp_MouseYInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APenguin_Statics::NewProp_MouseYInput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APenguin_Statics::NewProp_RestartInput_MetaData[] = {
		{ "Category", "InputSystem" },
		{ "ModuleRelativePath", "Penguin.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APenguin_Statics::NewProp_RestartInput = { "RestartInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APenguin, RestartInput), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APenguin_Statics::NewProp_RestartInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APenguin_Statics::NewProp_RestartInput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APenguin_Statics::NewProp_SettingsInput_MetaData[] = {
		{ "Category", "InputSystem" },
		{ "ModuleRelativePath", "Penguin.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APenguin_Statics::NewProp_SettingsInput = { "SettingsInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APenguin, SettingsInput), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APenguin_Statics::NewProp_SettingsInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APenguin_Statics::NewProp_SettingsInput_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APenguin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APenguin_Statics::NewProp_SpringArm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APenguin_Statics::NewProp_Camera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APenguin_Statics::NewProp_GameOver,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APenguin_Statics::NewProp_GameWon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APenguin_Statics::NewProp_IsPaused,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APenguin_Statics::NewProp_bHasGameStarted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APenguin_Statics::NewProp_Seconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APenguin_Statics::NewProp_Minutes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APenguin_Statics::NewProp_IsSlowed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APenguin_Statics::NewProp_SpeedBoostTimer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APenguin_Statics::NewProp_bHasSpeedBoost,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APenguin_Statics::NewProp_SlowTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APenguin_Statics::NewProp_Lives,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APenguin_Statics::NewProp_MappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APenguin_Statics::NewProp_ForwardInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APenguin_Statics::NewProp_UpInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APenguin_Statics::NewProp_RightInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APenguin_Statics::NewProp_ShootInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APenguin_Statics::NewProp_ReloadInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APenguin_Statics::NewProp_MouseXInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APenguin_Statics::NewProp_MouseYInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APenguin_Statics::NewProp_RestartInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APenguin_Statics::NewProp_SettingsInput,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APenguin_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APenguin>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APenguin_Statics::ClassParams = {
		&APenguin::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APenguin_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APenguin_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APenguin_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APenguin_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APenguin()
	{
		if (!Z_Registration_Info_UClass_APenguin.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APenguin.OuterSingleton, Z_Construct_UClass_APenguin_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APenguin.OuterSingleton;
	}
	template<> DOOMSDAYPENGUINS_API UClass* StaticClass<APenguin>()
	{
		return APenguin::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APenguin);
	APenguin::~APenguin() {}
	struct Z_CompiledInDeferFile_FID_Programming_II_Doomsday_Penguins_DoomsdayPenguins_Source_DoomsdayPenguins_Penguin_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Programming_II_Doomsday_Penguins_DoomsdayPenguins_Source_DoomsdayPenguins_Penguin_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APenguin, APenguin::StaticClass, TEXT("APenguin"), &Z_Registration_Info_UClass_APenguin, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APenguin), 2579283341U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Programming_II_Doomsday_Penguins_DoomsdayPenguins_Source_DoomsdayPenguins_Penguin_h_1743111894(TEXT("/Script/DoomsdayPenguins"),
		Z_CompiledInDeferFile_FID_Programming_II_Doomsday_Penguins_DoomsdayPenguins_Source_DoomsdayPenguins_Penguin_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Programming_II_Doomsday_Penguins_DoomsdayPenguins_Source_DoomsdayPenguins_Penguin_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
