// Copyright 2022, Developed by Aamn Chahrour & Samrudh Sunil, Published by Inherited Tempest. All Rights Reserved. 

#pragma once

#include "CoreMinimal.h"
#include "Objects/TempestBaseObject.h"
#include "Kismet/KismetSystemLibrary.h"
#include "TempestBaseTraceObject.generated.h"

/**
 * 
 */
 class UTempestAttackPropertiesObject;

UCLASS(Abstract, AutoExpandCategories = ("Initialization | Trace Info", "Initialization | Mesh Info", "Initialization | Collision Trace"))
class TEMPESTCOMBATFRAMEWORK_API UTempestBaseTraceObject : public UTempestBaseObject
{
	GENERATED_BODY()
public:

				/* Trace Information */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Initialization | Trace Info")
	FGameplayTag TraceGameplayTag;


				/* Trace Mesh Information */
	UPROPERTY(BlueprintReadWrite, Category = "Initialization | Mesh Info")
	class UPrimitiveComponent* TracePrimitiveComponent;

	UPROPERTY(BlueprintReadWrite, Category = "Initialization | Mesh Info")
	TArray<FName> TracePrimitiveComponentSocketNames;

	UPROPERTY(BlueprintReadOnly, Category = "Trace Properties")
	AActor* TraceOwner = nullptr;

	UPROPERTY(BlueprintReadOnly, Category = "Trace Properties | Attack")
	UTempestAttackPropertiesObject* AttackProperty;

public:

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Trace Base Functions")
	void ConstructTrace();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Trace Base Functions")
	void TickTrace(float DeltaSeconds);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Trace Base Functions")
	void ToggleTrace(bool bToggle);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Base Functions")
	void OnTraceHit(FHitResult HitResult);

				/* Setters */
	UFUNCTION(BlueprintCallable, Category = "Base Functions")
	void SetTraceMeshInfo(UPrimitiveComponent* NewPrimitiveComponent, TArray<FName> PrimitiveComponentSocketNames);

	UFUNCTION(BlueprintCallable, Category = "Base Functions")
	void ConstructAttackPropertyOfObject(UTempestAttackPropertiesObject* AttackPropertyToAssign);

	/* This function is the function that fires the sphere trace */
	UFUNCTION(BlueprintNativeEvent,BlueprintCallable ,Category = "Base Functions")
	void DoCollisionTrace();
	virtual void DoCollisionTrace_Implementation();


};
