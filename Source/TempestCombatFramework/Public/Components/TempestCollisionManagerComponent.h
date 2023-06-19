// Copyright 2022, Developed by Aamn Chahrour & Samrudh Sunil, Published by Inherited Tempest. All Rights Reserved. 

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TempestCollisionManagerComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent), Blueprintable )
class TEMPESTCOMBATFRAMEWORK_API UTempestCollisionManagerComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UTempestCollisionManagerComponent();

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Traces Info")
	TArray<class UTempestBaseTraceObject*> ActiveTraceObjects;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Traces Info")
	TArray<class UTempestBaseTraceObject*> CreatedTraceObjects;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable, Category = "Collision Base Functions")
	void ConstructTraceOfClass(TSubclassOf< class UTempestBaseTraceObject> TraceClassToConstruct, UTempestBaseTraceObject*& CreatedTraceObject);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Collision Base Functions")
	void GetTraceOfGameplayTag(FGameplayTag TraceToFind, UTempestBaseTraceObject*& FoundTrace);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Collision Base Functions")
	void GetTraceByClass(TSubclassOf< class UTempestBaseTraceObject> TraceToFind, UTempestBaseTraceObject*& FoundTrace);

	UFUNCTION(BlueprintCallable, Category = "Collision Base Functions")
	void RemoveTraceFromActiveTraces(UTempestBaseTraceObject* TraceToRemove){ ActiveTraceObjects.Remove(TraceToRemove);}

	UFUNCTION(BlueprintCallable, Category = "Collision Base Functions")
	void RemoveTraceFromCreatedTraces(UTempestBaseTraceObject* TraceToRemove) { CreatedTraceObjects.Remove(TraceToRemove); }

	UFUNCTION(BlueprintCallable, Category = "Collision Base Functions")
	void AddTraceToActiveTraces(UTempestBaseTraceObject* TraceToAdd){ActiveTraceObjects.Add(TraceToAdd);}

	UFUNCTION(BlueprintCallable, Category = "Collision Base Functions")
	void ClearAvailableTraceObjects() {ActiveTraceObjects.Empty(); CreatedTraceObjects.Empty();}
};
