// Copyright 2022, Developed by Aamn Chahrour & Samrudh Sunil, Published by Inherited Tempest. All Rights Reserved. 

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Objects/TempestBaseStateObject.h"
#include "GameplayTagContainer.h"
#include "TempestBaseStateManagerComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnUpdatedActiveState);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent), Blueprintable)
class TEMPESTCOMBATFRAMEWORK_API UTempestBaseStateManagerComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UTempestBaseStateManagerComponent();


	UPROPERTY(BlueprintAssignable, BlueprintCallable, Category = "Base Dispatchers")
	FOnUpdatedActiveState OnUpdatedActiveState;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Base Variables")
	TArray<UTempestBaseStateObject*> ActivatableStates;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Base Variables")
	TArray<TSubclassOf<UTempestBaseStateObject>> QueuedStates;



protected:

	UPROPERTY(BlueprintReadWrite, Category = "Base Variables")
	AActor* PerformingActor;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Base Variables")
	UTempestBaseStateObject* CurrentActiveState;

	// Called when the game starts
	virtual void BeginPlay() override;




public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Initialization Functions")
	void InitializeStateManagerComponent(AActor* NewPerformingActor);
	virtual void InitializeStateManagerComponent_Implementation(AActor* NewPerformingActor);

	UFUNCTION(BlueprintCallable, Category = "Setters")
	void PerformStateOfClass(TSubclassOf<UTempestBaseStateObject> StateToSet);
	
	UFUNCTION(BlueprintCallable, Category = "Setters")
	bool TryPerformStateOfClass(TSubclassOf<UTempestBaseStateObject> StateToSet, bool ConditionCheck = true);
	
	UFUNCTION(BlueprintCallable, Category = "Setters")
	bool TryPerformStatesOfClass(TArray <TSubclassOf<UTempestBaseStateObject>> StatesToSet, bool ConditionCheck = true);

	UFUNCTION(BlueprintCallable, Category = "Setters")
	void AddToQueuedStates(TSubclassOf<UTempestBaseStateObject> NewQueuedState) { QueuedStates.AddUnique(NewQueuedState); }

	UFUNCTION(BlueprintCallable, Category = "Setters")
	void RemoveFromQueuedStates(TSubclassOf<UTempestBaseStateObject> QueuedStateToRemove) { QueuedStates.Remove(QueuedStateToRemove); }

	UFUNCTION(BlueprintCallable, Category = "Setters")
	void TrySetQueuedState(TSubclassOf<UTempestBaseStateObject> StateToQueue, bool ConditionCheck = true);

	UFUNCTION(BlueprintCallable, Category = "Setters")
	void SetCurrentActiveState(UTempestBaseStateObject* NewCurrentActiveState);
	

	/* Getters */

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Getters")
	UTempestBaseStateObject* GetCurrentActiveState() { return CurrentActiveState; }

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Getters")
	void GetStateOfClass(TSubclassOf<UTempestBaseStateObject> StateToSearch, UTempestBaseStateObject*& FoundState);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Getters")
	void GetChildStateOfClass(TSubclassOf<UTempestBaseStateObject> StateToSearch, UTempestBaseStateObject*& FoundState);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Getters")
	bool GetCanPerformStateOfClass(TSubclassOf<UTempestBaseStateObject> ClassToLookFor);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Getters")
	UTempestBaseStateObject* GetStateOfGameplayTag(FGameplayTag StateGameplayTag);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Getters")
	TArray<UTempestBaseStateObject*> GetActivatableStates() { return ActivatableStates; }

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Getters")
	TArray<TSubclassOf<UTempestBaseStateObject>> GetQueuedStates() { return QueuedStates; }

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Getters")
	bool GetCanSetQueuedStateOfClass(TSubclassOf<UTempestBaseStateObject> StateToSearch);

	/* Construction */
	UFUNCTION(BlueprintCallable, Category = "Construction")
	void ConstructStateOfClass(TSubclassOf<UTempestBaseStateObject> StateToConstruct, UTempestBaseStateObject*& ConstructedState);

	/* Clears All The Arrays Associated For Finding and Setting States*/
	UFUNCTION(BlueprintCallable, Category = "Clearing")
	void ClearStatesComponent(){ActivatableStates.Empty(); QueuedStates.Empty(); CurrentActiveState = nullptr;}
		
};
