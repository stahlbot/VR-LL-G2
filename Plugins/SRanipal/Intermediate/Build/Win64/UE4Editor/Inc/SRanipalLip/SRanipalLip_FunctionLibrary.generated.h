// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture2D;
 
enum class SupportedLipVersion : uint8;
enum class LipShapeEnum : uint8; 
enum class LipShapeEnum_v2 : uint8; 
#ifdef SRANIPALLIP_SRanipalLip_FunctionLibrary_generated_h
#error "SRanipalLip_FunctionLibrary.generated.h already included, missing '#pragma once' in SRanipalLip_FunctionLibrary.h"
#endif
#define SRANIPALLIP_SRanipalLip_FunctionLibrary_generated_h

#define RobCoG_Plugins_SRanipal_Source_SRanipalLip_Public_SRanipalLip_FunctionLibrary_h_16_SPARSE_DATA
#define RobCoG_Plugins_SRanipal_Source_SRanipalLip_Public_SRanipalLip_FunctionLibrary_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateTexture); \
	DECLARE_FUNCTION(execGetLipWeightings_byName); \
	DECLARE_FUNCTION(execGetLipWeightings_byEnum); \
	DECLARE_FUNCTION(execGetLipWeightings_v2); \
	DECLARE_FUNCTION(execGetLipWeightings); \
	DECLARE_FUNCTION(execStopLipFramework); \
	DECLARE_FUNCTION(execStartLipFramework);


#define RobCoG_Plugins_SRanipal_Source_SRanipalLip_Public_SRanipalLip_FunctionLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateTexture); \
	DECLARE_FUNCTION(execGetLipWeightings_byName); \
	DECLARE_FUNCTION(execGetLipWeightings_byEnum); \
	DECLARE_FUNCTION(execGetLipWeightings_v2); \
	DECLARE_FUNCTION(execGetLipWeightings); \
	DECLARE_FUNCTION(execStopLipFramework); \
	DECLARE_FUNCTION(execStartLipFramework);


#define RobCoG_Plugins_SRanipal_Source_SRanipalLip_Public_SRanipalLip_FunctionLibrary_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSRanipalLip_FunctionLibrary(); \
	friend struct Z_Construct_UClass_USRanipalLip_FunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(USRanipalLip_FunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SRanipalLip"), NO_API) \
	DECLARE_SERIALIZER(USRanipalLip_FunctionLibrary)


#define RobCoG_Plugins_SRanipal_Source_SRanipalLip_Public_SRanipalLip_FunctionLibrary_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUSRanipalLip_FunctionLibrary(); \
	friend struct Z_Construct_UClass_USRanipalLip_FunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(USRanipalLip_FunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SRanipalLip"), NO_API) \
	DECLARE_SERIALIZER(USRanipalLip_FunctionLibrary)


#define RobCoG_Plugins_SRanipal_Source_SRanipalLip_Public_SRanipalLip_FunctionLibrary_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USRanipalLip_FunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USRanipalLip_FunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USRanipalLip_FunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USRanipalLip_FunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USRanipalLip_FunctionLibrary(USRanipalLip_FunctionLibrary&&); \
	NO_API USRanipalLip_FunctionLibrary(const USRanipalLip_FunctionLibrary&); \
public:


#define RobCoG_Plugins_SRanipal_Source_SRanipalLip_Public_SRanipalLip_FunctionLibrary_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USRanipalLip_FunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USRanipalLip_FunctionLibrary(USRanipalLip_FunctionLibrary&&); \
	NO_API USRanipalLip_FunctionLibrary(const USRanipalLip_FunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USRanipalLip_FunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USRanipalLip_FunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USRanipalLip_FunctionLibrary)


#define RobCoG_Plugins_SRanipal_Source_SRanipalLip_Public_SRanipalLip_FunctionLibrary_h_16_PRIVATE_PROPERTY_OFFSET
#define RobCoG_Plugins_SRanipal_Source_SRanipalLip_Public_SRanipalLip_FunctionLibrary_h_13_PROLOG
#define RobCoG_Plugins_SRanipal_Source_SRanipalLip_Public_SRanipalLip_FunctionLibrary_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RobCoG_Plugins_SRanipal_Source_SRanipalLip_Public_SRanipalLip_FunctionLibrary_h_16_PRIVATE_PROPERTY_OFFSET \
	RobCoG_Plugins_SRanipal_Source_SRanipalLip_Public_SRanipalLip_FunctionLibrary_h_16_SPARSE_DATA \
	RobCoG_Plugins_SRanipal_Source_SRanipalLip_Public_SRanipalLip_FunctionLibrary_h_16_RPC_WRAPPERS \
	RobCoG_Plugins_SRanipal_Source_SRanipalLip_Public_SRanipalLip_FunctionLibrary_h_16_INCLASS \
	RobCoG_Plugins_SRanipal_Source_SRanipalLip_Public_SRanipalLip_FunctionLibrary_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RobCoG_Plugins_SRanipal_Source_SRanipalLip_Public_SRanipalLip_FunctionLibrary_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RobCoG_Plugins_SRanipal_Source_SRanipalLip_Public_SRanipalLip_FunctionLibrary_h_16_PRIVATE_PROPERTY_OFFSET \
	RobCoG_Plugins_SRanipal_Source_SRanipalLip_Public_SRanipalLip_FunctionLibrary_h_16_SPARSE_DATA \
	RobCoG_Plugins_SRanipal_Source_SRanipalLip_Public_SRanipalLip_FunctionLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	RobCoG_Plugins_SRanipal_Source_SRanipalLip_Public_SRanipalLip_FunctionLibrary_h_16_INCLASS_NO_PURE_DECLS \
	RobCoG_Plugins_SRanipal_Source_SRanipalLip_Public_SRanipalLip_FunctionLibrary_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SRANIPALLIP_API UClass* StaticClass<class USRanipalLip_FunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RobCoG_Plugins_SRanipal_Source_SRanipalLip_Public_SRanipalLip_FunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
