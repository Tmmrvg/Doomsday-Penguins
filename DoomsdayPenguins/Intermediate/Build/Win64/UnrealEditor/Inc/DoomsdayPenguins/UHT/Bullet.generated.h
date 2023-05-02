// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Bullet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef DOOMSDAYPENGUINS_Bullet_generated_h
#error "Bullet.generated.h already included, missing '#pragma once' in Bullet.h"
#endif
#define DOOMSDAYPENGUINS_Bullet_generated_h

<<<<<<< HEAD
#define FID_Programming_02_DoomsdayPenguins_Doomsday_Penguins_DoomsdayPenguins_Source_DoomsdayPenguins_Bullet_h_14_SPARSE_DATA
#define FID_Programming_02_DoomsdayPenguins_Doomsday_Penguins_DoomsdayPenguins_Source_DoomsdayPenguins_Bullet_h_14_RPC_WRAPPERS \
=======
#define FID_Users_eilee_OneDrive_Dokumenter_GitHub_Doomsday_Penguins_DoomsdayPenguins_Source_DoomsdayPenguins_Bullet_h_14_SPARSE_DATA
#define FID_Users_eilee_OneDrive_Dokumenter_GitHub_Doomsday_Penguins_DoomsdayPenguins_Source_DoomsdayPenguins_Bullet_h_14_RPC_WRAPPERS \
>>>>>>> origin/Eileen_Work
 \
	DECLARE_FUNCTION(execDestroyBullet); \
	DECLARE_FUNCTION(execOnOverlap);


<<<<<<< HEAD
#define FID_Programming_02_DoomsdayPenguins_Doomsday_Penguins_DoomsdayPenguins_Source_DoomsdayPenguins_Bullet_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
=======
#define FID_Users_eilee_OneDrive_Dokumenter_GitHub_Doomsday_Penguins_DoomsdayPenguins_Source_DoomsdayPenguins_Bullet_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
>>>>>>> origin/Eileen_Work
 \
	DECLARE_FUNCTION(execDestroyBullet); \
	DECLARE_FUNCTION(execOnOverlap);


<<<<<<< HEAD
#define FID_Programming_02_DoomsdayPenguins_Doomsday_Penguins_DoomsdayPenguins_Source_DoomsdayPenguins_Bullet_h_14_ACCESSORS
#define FID_Programming_02_DoomsdayPenguins_Doomsday_Penguins_DoomsdayPenguins_Source_DoomsdayPenguins_Bullet_h_14_INCLASS_NO_PURE_DECLS \
=======
#define FID_Users_eilee_OneDrive_Dokumenter_GitHub_Doomsday_Penguins_DoomsdayPenguins_Source_DoomsdayPenguins_Bullet_h_14_ACCESSORS
#define FID_Users_eilee_OneDrive_Dokumenter_GitHub_Doomsday_Penguins_DoomsdayPenguins_Source_DoomsdayPenguins_Bullet_h_14_INCLASS_NO_PURE_DECLS \
>>>>>>> origin/Eileen_Work
private: \
	static void StaticRegisterNativesABullet(); \
	friend struct Z_Construct_UClass_ABullet_Statics; \
public: \
	DECLARE_CLASS(ABullet, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DoomsdayPenguins"), NO_API) \
	DECLARE_SERIALIZER(ABullet)


<<<<<<< HEAD
#define FID_Programming_02_DoomsdayPenguins_Doomsday_Penguins_DoomsdayPenguins_Source_DoomsdayPenguins_Bullet_h_14_INCLASS \
=======
#define FID_Users_eilee_OneDrive_Dokumenter_GitHub_Doomsday_Penguins_DoomsdayPenguins_Source_DoomsdayPenguins_Bullet_h_14_INCLASS \
>>>>>>> origin/Eileen_Work
private: \
	static void StaticRegisterNativesABullet(); \
	friend struct Z_Construct_UClass_ABullet_Statics; \
public: \
	DECLARE_CLASS(ABullet, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DoomsdayPenguins"), NO_API) \
	DECLARE_SERIALIZER(ABullet)


<<<<<<< HEAD
#define FID_Programming_02_DoomsdayPenguins_Doomsday_Penguins_DoomsdayPenguins_Source_DoomsdayPenguins_Bullet_h_14_STANDARD_CONSTRUCTORS \
=======
#define FID_Users_eilee_OneDrive_Dokumenter_GitHub_Doomsday_Penguins_DoomsdayPenguins_Source_DoomsdayPenguins_Bullet_h_14_STANDARD_CONSTRUCTORS \
>>>>>>> origin/Eileen_Work
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABullet(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABullet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABullet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABullet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABullet(ABullet&&); \
	NO_API ABullet(const ABullet&); \
public: \
	NO_API virtual ~ABullet();


<<<<<<< HEAD
#define FID_Programming_02_DoomsdayPenguins_Doomsday_Penguins_DoomsdayPenguins_Source_DoomsdayPenguins_Bullet_h_14_ENHANCED_CONSTRUCTORS \
=======
#define FID_Users_eilee_OneDrive_Dokumenter_GitHub_Doomsday_Penguins_DoomsdayPenguins_Source_DoomsdayPenguins_Bullet_h_14_ENHANCED_CONSTRUCTORS \
>>>>>>> origin/Eileen_Work
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABullet(ABullet&&); \
	NO_API ABullet(const ABullet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABullet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABullet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABullet) \
	NO_API virtual ~ABullet();


<<<<<<< HEAD
#define FID_Programming_02_DoomsdayPenguins_Doomsday_Penguins_DoomsdayPenguins_Source_DoomsdayPenguins_Bullet_h_11_PROLOG
#define FID_Programming_02_DoomsdayPenguins_Doomsday_Penguins_DoomsdayPenguins_Source_DoomsdayPenguins_Bullet_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Programming_02_DoomsdayPenguins_Doomsday_Penguins_DoomsdayPenguins_Source_DoomsdayPenguins_Bullet_h_14_SPARSE_DATA \
	FID_Programming_02_DoomsdayPenguins_Doomsday_Penguins_DoomsdayPenguins_Source_DoomsdayPenguins_Bullet_h_14_RPC_WRAPPERS \
	FID_Programming_02_DoomsdayPenguins_Doomsday_Penguins_DoomsdayPenguins_Source_DoomsdayPenguins_Bullet_h_14_ACCESSORS \
	FID_Programming_02_DoomsdayPenguins_Doomsday_Penguins_DoomsdayPenguins_Source_DoomsdayPenguins_Bullet_h_14_INCLASS \
	FID_Programming_02_DoomsdayPenguins_Doomsday_Penguins_DoomsdayPenguins_Source_DoomsdayPenguins_Bullet_h_14_STANDARD_CONSTRUCTORS \
=======
#define FID_Users_eilee_OneDrive_Dokumenter_GitHub_Doomsday_Penguins_DoomsdayPenguins_Source_DoomsdayPenguins_Bullet_h_11_PROLOG
#define FID_Users_eilee_OneDrive_Dokumenter_GitHub_Doomsday_Penguins_DoomsdayPenguins_Source_DoomsdayPenguins_Bullet_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_eilee_OneDrive_Dokumenter_GitHub_Doomsday_Penguins_DoomsdayPenguins_Source_DoomsdayPenguins_Bullet_h_14_SPARSE_DATA \
	FID_Users_eilee_OneDrive_Dokumenter_GitHub_Doomsday_Penguins_DoomsdayPenguins_Source_DoomsdayPenguins_Bullet_h_14_RPC_WRAPPERS \
	FID_Users_eilee_OneDrive_Dokumenter_GitHub_Doomsday_Penguins_DoomsdayPenguins_Source_DoomsdayPenguins_Bullet_h_14_ACCESSORS \
	FID_Users_eilee_OneDrive_Dokumenter_GitHub_Doomsday_Penguins_DoomsdayPenguins_Source_DoomsdayPenguins_Bullet_h_14_INCLASS \
	FID_Users_eilee_OneDrive_Dokumenter_GitHub_Doomsday_Penguins_DoomsdayPenguins_Source_DoomsdayPenguins_Bullet_h_14_STANDARD_CONSTRUCTORS \
>>>>>>> origin/Eileen_Work
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


<<<<<<< HEAD
#define FID_Programming_02_DoomsdayPenguins_Doomsday_Penguins_DoomsdayPenguins_Source_DoomsdayPenguins_Bullet_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Programming_02_DoomsdayPenguins_Doomsday_Penguins_DoomsdayPenguins_Source_DoomsdayPenguins_Bullet_h_14_SPARSE_DATA \
	FID_Programming_02_DoomsdayPenguins_Doomsday_Penguins_DoomsdayPenguins_Source_DoomsdayPenguins_Bullet_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Programming_02_DoomsdayPenguins_Doomsday_Penguins_DoomsdayPenguins_Source_DoomsdayPenguins_Bullet_h_14_ACCESSORS \
	FID_Programming_02_DoomsdayPenguins_Doomsday_Penguins_DoomsdayPenguins_Source_DoomsdayPenguins_Bullet_h_14_INCLASS_NO_PURE_DECLS \
	FID_Programming_02_DoomsdayPenguins_Doomsday_Penguins_DoomsdayPenguins_Source_DoomsdayPenguins_Bullet_h_14_ENHANCED_CONSTRUCTORS \
=======
#define FID_Users_eilee_OneDrive_Dokumenter_GitHub_Doomsday_Penguins_DoomsdayPenguins_Source_DoomsdayPenguins_Bullet_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_eilee_OneDrive_Dokumenter_GitHub_Doomsday_Penguins_DoomsdayPenguins_Source_DoomsdayPenguins_Bullet_h_14_SPARSE_DATA \
	FID_Users_eilee_OneDrive_Dokumenter_GitHub_Doomsday_Penguins_DoomsdayPenguins_Source_DoomsdayPenguins_Bullet_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_eilee_OneDrive_Dokumenter_GitHub_Doomsday_Penguins_DoomsdayPenguins_Source_DoomsdayPenguins_Bullet_h_14_ACCESSORS \
	FID_Users_eilee_OneDrive_Dokumenter_GitHub_Doomsday_Penguins_DoomsdayPenguins_Source_DoomsdayPenguins_Bullet_h_14_INCLASS_NO_PURE_DECLS \
	FID_Users_eilee_OneDrive_Dokumenter_GitHub_Doomsday_Penguins_DoomsdayPenguins_Source_DoomsdayPenguins_Bullet_h_14_ENHANCED_CONSTRUCTORS \
>>>>>>> origin/Eileen_Work
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DOOMSDAYPENGUINS_API UClass* StaticClass<class ABullet>();

#undef CURRENT_FILE_ID
<<<<<<< HEAD
#define CURRENT_FILE_ID FID_Programming_02_DoomsdayPenguins_Doomsday_Penguins_DoomsdayPenguins_Source_DoomsdayPenguins_Bullet_h
=======
#define CURRENT_FILE_ID FID_Users_eilee_OneDrive_Dokumenter_GitHub_Doomsday_Penguins_DoomsdayPenguins_Source_DoomsdayPenguins_Bullet_h
>>>>>>> origin/Eileen_Work


PRAGMA_ENABLE_DEPRECATION_WARNINGS
