// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DoomsdayPenguins/SeaLeopard.h"
#include "Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSeaLeopard() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UPawnSensingComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DOOMSDAYPENGUINS_API UClass* Z_Construct_UClass_ABullet_NoRegister();
	DOOMSDAYPENGUINS_API UClass* Z_Construct_UClass_ASeaLeopard();
	DOOMSDAYPENGUINS_API UClass* Z_Construct_UClass_ASeaLeopard_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	UPackage* Z_Construct_UPackage__Script_DoomsdayPenguins();
// End Cross Module References
	DEFINE_FUNCTION(ASeaLeopard::execShoot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Shoot();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASeaLeopard::execDestroyTarget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DestroyTarget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASeaLeopard::execOnOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComponent);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComponent,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASeaLeopard::execPawnSeen)
	{
		P_GET_OBJECT(APawn,Z_Param_SeenPawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PawnSeen(Z_Param_SeenPawn);
		P_NATIVE_END;
	}
	void ASeaLeopard::StaticRegisterNativesASeaLeopard()
	{
		UClass* Class = ASeaLeopard::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DestroyTarget", &ASeaLeopard::execDestroyTarget },
			{ "OnOverlap", &ASeaLeopard::execOnOverlap },
			{ "PawnSeen", &ASeaLeopard::execPawnSeen },
			{ "Shoot", &ASeaLeopard::execShoot },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASeaLeopard_DestroyTarget_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASeaLeopard_DestroyTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SeaLeopard.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASeaLeopard_DestroyTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASeaLeopard, nullptr, "DestroyTarget", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASeaLeopard_DestroyTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASeaLeopard_DestroyTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASeaLeopard_DestroyTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASeaLeopard_DestroyTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASeaLeopard_OnOverlap_Statics
	{
		struct SeaLeopard_eventOnOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComponent;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComponent;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASeaLeopard_OnOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASeaLeopard_OnOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SeaLeopard_eventOnOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASeaLeopard_OnOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASeaLeopard_OnOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASeaLeopard_OnOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SeaLeopard_eventOnOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASeaLeopard_OnOverlap_Statics::NewProp_OtherComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASeaLeopard_OnOverlap_Statics::NewProp_OtherComponent = { "OtherComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SeaLeopard_eventOnOverlap_Parms, OtherComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASeaLeopard_OnOverlap_Statics::NewProp_OtherComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASeaLeopard_OnOverlap_Statics::NewProp_OtherComponent_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASeaLeopard_OnOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SeaLeopard_eventOnOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASeaLeopard_OnOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((SeaLeopard_eventOnOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASeaLeopard_OnOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SeaLeopard_eventOnOverlap_Parms), &Z_Construct_UFunction_ASeaLeopard_OnOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASeaLeopard_OnOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASeaLeopard_OnOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SeaLeopard_eventOnOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ASeaLeopard_OnOverlap_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASeaLeopard_OnOverlap_Statics::NewProp_SweepResult_MetaData)) }; // 1287526515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASeaLeopard_OnOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASeaLeopard_OnOverlap_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASeaLeopard_OnOverlap_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASeaLeopard_OnOverlap_Statics::NewProp_OtherComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASeaLeopard_OnOverlap_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASeaLeopard_OnOverlap_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASeaLeopard_OnOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASeaLeopard_OnOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SeaLeopard.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASeaLeopard_OnOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASeaLeopard, nullptr, "OnOverlap", nullptr, nullptr, sizeof(Z_Construct_UFunction_ASeaLeopard_OnOverlap_Statics::SeaLeopard_eventOnOverlap_Parms), Z_Construct_UFunction_ASeaLeopard_OnOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASeaLeopard_OnOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASeaLeopard_OnOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASeaLeopard_OnOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASeaLeopard_OnOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASeaLeopard_OnOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASeaLeopard_PawnSeen_Statics
	{
		struct SeaLeopard_eventPawnSeen_Parms
		{
			APawn* SeenPawn;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SeenPawn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASeaLeopard_PawnSeen_Statics::NewProp_SeenPawn = { "SeenPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SeaLeopard_eventPawnSeen_Parms, SeenPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASeaLeopard_PawnSeen_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASeaLeopard_PawnSeen_Statics::NewProp_SeenPawn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASeaLeopard_PawnSeen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SeaLeopard.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASeaLeopard_PawnSeen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASeaLeopard, nullptr, "PawnSeen", nullptr, nullptr, sizeof(Z_Construct_UFunction_ASeaLeopard_PawnSeen_Statics::SeaLeopard_eventPawnSeen_Parms), Z_Construct_UFunction_ASeaLeopard_PawnSeen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASeaLeopard_PawnSeen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASeaLeopard_PawnSeen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASeaLeopard_PawnSeen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASeaLeopard_PawnSeen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASeaLeopard_PawnSeen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASeaLeopard_Shoot_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASeaLeopard_Shoot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SeaLeopard.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASeaLeopard_Shoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASeaLeopard, nullptr, "Shoot", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASeaLeopard_Shoot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASeaLeopard_Shoot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASeaLeopard_Shoot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASeaLeopard_Shoot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASeaLeopard);
	UClass* Z_Construct_UClass_ASeaLeopard_NoRegister()
	{
		return ASeaLeopard::StaticClass();
	}
	struct Z_Construct_UClass_ASeaLeopard_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Collider_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Collider;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShootDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ShootDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeSinceShooting_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeSinceShooting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CanShoot_MetaData[];
#endif
		static void NewProp_CanShoot_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_CanShoot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BP_Bullet_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_BP_Bullet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PawnSensing_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PawnSensing;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASeaLeopard_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_DoomsdayPenguins,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASeaLeopard_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASeaLeopard_DestroyTarget, "DestroyTarget" }, // 2264175092
		{ &Z_Construct_UFunction_ASeaLeopard_OnOverlap, "OnOverlap" }, // 3012364017
		{ &Z_Construct_UFunction_ASeaLeopard_PawnSeen, "PawnSeen" }, // 593583770
		{ &Z_Construct_UFunction_ASeaLeopard_Shoot, "Shoot" }, // 799770537
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASeaLeopard_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SeaLeopard.h" },
		{ "ModuleRelativePath", "SeaLeopard.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASeaLeopard_Statics::NewProp_Collider_MetaData[] = {
		{ "Category", "SeaLeopard" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SeaLeopard.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASeaLeopard_Statics::NewProp_Collider = { "Collider", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASeaLeopard, Collider), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASeaLeopard_Statics::NewProp_Collider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASeaLeopard_Statics::NewProp_Collider_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASeaLeopard_Statics::NewProp_SkeletalMesh_MetaData[] = {
		{ "Category", "SeaLeopard" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SeaLeopard.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASeaLeopard_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASeaLeopard, SkeletalMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASeaLeopard_Statics::NewProp_SkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASeaLeopard_Statics::NewProp_SkeletalMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASeaLeopard_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "Category", "SeaLeopard" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SeaLeopard.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASeaLeopard_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASeaLeopard, StaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASeaLeopard_Statics::NewProp_StaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASeaLeopard_Statics::NewProp_StaticMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASeaLeopard_Statics::NewProp_RotationSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "My Variables" },
		{ "Comment", "//Variables\n" },
		{ "ModuleRelativePath", "SeaLeopard.h" },
		{ "ToolTip", "Variables" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASeaLeopard_Statics::NewProp_RotationSpeed = { "RotationSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASeaLeopard, RotationSpeed), METADATA_PARAMS(Z_Construct_UClass_ASeaLeopard_Statics::NewProp_RotationSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASeaLeopard_Statics::NewProp_RotationSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASeaLeopard_Statics::NewProp_ShootDelay_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "My Variables" },
		{ "ModuleRelativePath", "SeaLeopard.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASeaLeopard_Statics::NewProp_ShootDelay = { "ShootDelay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASeaLeopard, ShootDelay), METADATA_PARAMS(Z_Construct_UClass_ASeaLeopard_Statics::NewProp_ShootDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASeaLeopard_Statics::NewProp_ShootDelay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASeaLeopard_Statics::NewProp_TimeSinceShooting_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "My Variables" },
		{ "ModuleRelativePath", "SeaLeopard.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASeaLeopard_Statics::NewProp_TimeSinceShooting = { "TimeSinceShooting", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASeaLeopard, TimeSinceShooting), METADATA_PARAMS(Z_Construct_UClass_ASeaLeopard_Statics::NewProp_TimeSinceShooting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASeaLeopard_Statics::NewProp_TimeSinceShooting_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASeaLeopard_Statics::NewProp_CanShoot_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "My Variables" },
		{ "ModuleRelativePath", "SeaLeopard.h" },
	};
#endif
	void Z_Construct_UClass_ASeaLeopard_Statics::NewProp_CanShoot_SetBit(void* Obj)
	{
		((ASeaLeopard*)Obj)->CanShoot = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASeaLeopard_Statics::NewProp_CanShoot = { "CanShoot", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ASeaLeopard), &Z_Construct_UClass_ASeaLeopard_Statics::NewProp_CanShoot_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASeaLeopard_Statics::NewProp_CanShoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASeaLeopard_Statics::NewProp_CanShoot_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASeaLeopard_Statics::NewProp_BP_Bullet_MetaData[] = {
		{ "Category", "My Variables" },
		{ "ModuleRelativePath", "SeaLeopard.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASeaLeopard_Statics::NewProp_BP_Bullet = { "BP_Bullet", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASeaLeopard, BP_Bullet), Z_Construct_UClass_UClass, Z_Construct_UClass_ABullet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASeaLeopard_Statics::NewProp_BP_Bullet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASeaLeopard_Statics::NewProp_BP_Bullet_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASeaLeopard_Statics::NewProp_PawnSensing_MetaData[] = {
		{ "Category", "AI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SeaLeopard.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASeaLeopard_Statics::NewProp_PawnSensing = { "PawnSensing", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASeaLeopard, PawnSensing), Z_Construct_UClass_UPawnSensingComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASeaLeopard_Statics::NewProp_PawnSensing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASeaLeopard_Statics::NewProp_PawnSensing_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASeaLeopard_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASeaLeopard_Statics::NewProp_Collider,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASeaLeopard_Statics::NewProp_SkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASeaLeopard_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASeaLeopard_Statics::NewProp_RotationSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASeaLeopard_Statics::NewProp_ShootDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASeaLeopard_Statics::NewProp_TimeSinceShooting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASeaLeopard_Statics::NewProp_CanShoot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASeaLeopard_Statics::NewProp_BP_Bullet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASeaLeopard_Statics::NewProp_PawnSensing,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASeaLeopard_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASeaLeopard>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASeaLeopard_Statics::ClassParams = {
		&ASeaLeopard::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASeaLeopard_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASeaLeopard_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASeaLeopard_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASeaLeopard_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASeaLeopard()
	{
		if (!Z_Registration_Info_UClass_ASeaLeopard.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASeaLeopard.OuterSingleton, Z_Construct_UClass_ASeaLeopard_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASeaLeopard.OuterSingleton;
	}
	template<> DOOMSDAYPENGUINS_API UClass* StaticClass<ASeaLeopard>()
	{
		return ASeaLeopard::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASeaLeopard);
	ASeaLeopard::~ASeaLeopard() {}
	struct Z_CompiledInDeferFile_FID_Programming_II_Doomsday_Penguins_DoomsdayPenguins_Source_DoomsdayPenguins_SeaLeopard_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Programming_II_Doomsday_Penguins_DoomsdayPenguins_Source_DoomsdayPenguins_SeaLeopard_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASeaLeopard, ASeaLeopard::StaticClass, TEXT("ASeaLeopard"), &Z_Registration_Info_UClass_ASeaLeopard, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASeaLeopard), 762277117U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Programming_II_Doomsday_Penguins_DoomsdayPenguins_Source_DoomsdayPenguins_SeaLeopard_h_344869573(TEXT("/Script/DoomsdayPenguins"),
		Z_CompiledInDeferFile_FID_Programming_II_Doomsday_Penguins_DoomsdayPenguins_Source_DoomsdayPenguins_SeaLeopard_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Programming_II_Doomsday_Penguins_DoomsdayPenguins_Source_DoomsdayPenguins_SeaLeopard_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
