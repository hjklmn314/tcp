// Copyright 2022, Developed by Aamn Chahrour & Samrudh Sunil, Published by Inherited Tempest. All Rights Reserved. 

#pragma once

#include "CoreMinimal.h"
#include "Objects/TempestBaseObject.h"
#include "TempestBaseBuffObject.generated.h"

/**
 * 
 */
UCLASS(Abstract, BlueprintType, EditInlineNew)
class TEMPESTCOMBATFRAMEWORK_API UTempestBaseBuffObject : public UTempestBaseObject
{
	GENERATED_BODY()
public:
	
private:
	UPROPERTY()
	AActor* DamageDealer;

	UPROPERTY()
	AActor* DamageReceiver;

public:
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Base Functions")
	AActor* GetDamageDealer(){return DamageDealer;}

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Base Functions")
	AActor* GetDamageReceiver() { return DamageReceiver; }

	UFUNCTION(BlueprintCallable, Category = "Base Functions")
	void SetDamageDealer(AActor* NewDamageDealer){DamageDealer = NewDamageDealer;}

	UFUNCTION(BlueprintCallable, Category = "Base Functions")
	void SetDamageReceiver(AActor* NewDamageReceiver) { DamageReceiver = NewDamageReceiver; }

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Base Functions")
	void StartBuff();
};
