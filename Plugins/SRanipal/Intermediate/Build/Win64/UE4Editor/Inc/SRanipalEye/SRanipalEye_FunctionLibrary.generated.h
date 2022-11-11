// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EyeShape : uint8; 
enum class GazeIndex : uint8;
class APlayerCameraManager;
struct FFocusInfo;
struct FVector;
enum class EyeIndex : uint8;
struct FVector2D;
enum class SupportedEyeVersion : uint8;
#ifdef SRANIPALEYE_SRanipalEye_FunctionLibrary_generated_h
#error "SRanipalEye_FunctionLibrary.generated.h already included, missing '#pragma once' in SRanipalEye_FunctionLibrary.h"
#endif
#define SRANIPALEYE_SRanipalEye_FunctionLibrary_generated_h

#define RobCoG_Plugins_SRanipal_Source_SRanipalEye_Public_SRanipalEye_FunctionLibrary_h_17_SPARSE_DATA
#define RobCoG_Plugins_SRanipal_Source_SRanipalEye_Public_SRanipalEye_FunctionLibrary_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetEyeWeightings); \
	DECLARE_FUNCTION(execFocus); \
	DECLARE_FUNCTION(execGetGazeRay); \
	DECLARE_FUNCTION(execGetPupilPosition); \
	DECLARE_FUNCTION(execGetEyeOpenness); \
	DECLARE_FUNCTION(execStopEyeFramework); \
	DECLARE_FUNCTION(execStartEyeFramework);


#define RobCoG_Plugins_SRanipal_Source_SRanipalEye_Public_SRanipalEye_FunctionLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetEyeWeightings); \
	DECLARE_FUNCTION(execFocus); \
	DECLARE_FUNCTION(execGetGazeRay); \
	DECLARE_FUNCTION(execGetPupilPosition); \
	DECLARE_FUNCTION(execGetEyeOpenness); \
	DECLARE_FUNCTION(execStopEyeFramework); \
	DECLARE_FUNCTION(execStartEyeFramework);


#define RobCoG_Plugins_SRanipal_Source_SRanipalEye_Public_SRanipalEye_FunctionLibrary_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSRanipalEye_FunctionLibrary(); \
	friend struct Z_Construct_UClass_USRanipalEye_FunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(USRanipalEye_FunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SRanipalEye"), NO_API) \
	DECLARE_SERIALIZER(USRanipalEye_FunctionLibrary)


#define RobCoG_Plugins_SRanipal_Source_SRanipalEye_Public_SRanipalEye_FunctionLibrary_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUSRanipalEye_FunctionLibrary(); \
	friend struct Z_Construct_UClass_USRanipalEye_FunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(USRanipalEye_FunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SRanipalEye"), NO_API) \
	DECLARE_SERIALIZER(USRanipalEye_FunctionLibrary)


#define RobCoG_Plugins_SRanipal_Source_SRanipalEye_Public_SRanipalEye_FunctionLibrary_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USRanipalEye_FunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USRanipalEye_FunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USRanipalEye_FunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USRanipalEye_FunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USRanipalEye_FunctionLibrary(USRanipalEye_FunctionLibrary&&); \
	NO_API USRanipalEye_FunctionLibrary(const USRanipalEye_FunctionLibrary&); \
public:


#define RobCoG_Plugins_SRanipal_Source_SRanipalEye_Public_SRanipalEye_FunctionLibrary_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USRanipalEye_FunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USRanipalEye_FunctionLibrary(USRanipalEye_FunctionLibrary&&); \
	NO_API USRanipalEye_FunctionLibrary(const USRanipalEye_FunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USRanipalEye_FunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USRanipalEye_FunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USRanipalEye_FunctionLibrary)


#define RobCoG_Plugins_SRanipal_Source_SRanipalEye_Public_SRanipalEye_FunctionLibrary_h_17_PRIVATE_PROPERTY_OFFSET
#define RobCoG_Plugins_SRanipal_Source_SRanipalEye_Public_SRanipalEye_FunctionLibrary_h_14_PROLOG
#define RobCoG_Plugins_SRanipal_Source_SRanipalEye_Public_SRanipalEye_FunctionLibrary_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RobCoG_Plugins_SRanipal_Source_SRanipalEye_Public_SRanipalEye_FunctionLibrary_h_17_PRIVATE_PROPERTY_OFFSET \
	RobCoG_Plugins_SRanipal_Source_SRanipalEye_Public_SRanipalEye_FunctionLibrary_h_17_SPARSE_DATA \
	RobCoG_Plugins_SRanipal_Source_SRanipalEye_Public_SRanipalEye_FunctionLibrary_h_17_RPC_WRAPPERS \
	RobCoG_Plugins_SRanipal_Source_SRanipalEye_Public_SRanipalEye_FunctionLibrary_h_17_INCLASS \
	RobCoG_Plugins_SRanipal_Source_SRanipalEye_Public_SRanipalEye_FunctionLibrary_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RobCoG_Plugins_SRanipal_Source_SRanipalEye_Public_SRanipalEye_FunctionLibrary_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RobCoG_Plugins_SRanipal_Source_SRanipalEye_Public_SRanipalEye_FunctionLibrary_h_17_PRIVATE_PROPERTY_OFFSET \
	RobCoG_Plugins_SRanipal_Source_SRanipalEye_Public_SRanipalEye_FunctionLibrary_h_17_SPARSE_DATA \
	RobCoG_Plugins_SRanipal_Source_SRanipalEye_Public_SRanipalEye_FunctionLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	RobCoG_Plugins_SRanipal_Source_SRanipalEye_Public_SRanipalEye_FunctionLibrary_h_17_INCLASS_NO_PURE_DECLS \
	RobCoG_Plugins_SRanipal_Source_SRanipalEye_Public_SRanipalEye_FunctionLibrary_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SRANIPALEYE_API UClass* StaticClass<class USRanipalEye_FunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RobCoG_Plugins_SRanipal_Source_SRanipalEye_Public_SRanipalEye_FunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
