// Copyright 2022, Developed by Aamn Chahrour & Samrudh Sunil, Published by Inherited Tempest. All Rights Reserved. 

#pragma once

#include "CoreMinimal.h"
#include "TempestBaseObject.h"
#include "UObject/NoExportTypes.h"
#include "TempestBaseStateObject.generated.h"

/**
 * 
 */
UCLASS()
class TEMPESTCOMBATFRAMEWORK_API UTempestBaseStateObject : public UTempestBaseObject
{
	GENERATED_BODY()

public:
	UTempestBaseStateObject();


	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "State Properties")
	FGameplayTag StateGameplayTag;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "State Properties")
	bool bTimeControlledState;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "State Controls", meta = (EditCondition = "bTimeControlledState"))
	float StateTimeLimit;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "State Controls", meta = (EditCondition = "bTimeControlledState"))
	float TimerUpdateRate = 0.1f;
	

protected:

	UPROPERTY(BlueprintReadWrite, Category = "State Time")
	float TimePassed;



	UPROPERTY()
	AActor* PerformingActor;

public:

				/* State Main Events */
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "State Base Events")
	void ConstructState();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "State Base Events")
	void StartState();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "State Base Events")
	void TickState(float TickTime);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "State Base Events")
	void EndState();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "State Base Events")
	bool RestartState(bool ConditionCheck);


				/* State Main Functions */
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "State Base Functions")
	void ClearStateValues();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "State Base Functions")
	void PrepareStateValues();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "State Base Functions")
	void StartStateTimer();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "State Base Functions")
	void IncrementPassedTime();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "State Base Functions")
	void ClearPassedTime();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "State Base Functions")
	void StopStateTimer();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "State Base Functions")
	float IncrementTimeByUpdateRate();


				/* State Setters */
	UFUNCTION(BlueprintCallable, Category = "State Setters")
	void SetPerformingActor(AActor* NewPerformingActor) { PerformingActor = NewPerformingActor; }

				/* State Getters */
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, BlueprintPure, Category = "State Getters")
	bool CanPerformState();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, BlueprintPure, Category = "State Getters")
	bool CanSetAsQueueState();

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "State Getters")
	void GetPerformingActor(AActor*& CurrentPerformingActor) { CurrentPerformingActor = PerformingActor; }

	UFUNCTION(BlueprintPure, BlueprintCallable, Category = "State Getters")
	float GetTimePassed() { return TimePassed; }
};
