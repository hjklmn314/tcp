// Copyright 2022, Developed by Aamn Chahrour & Samrudh Sunil, Published by Inherited Tempest. All Rights Reserved. 

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "TempestTargetingComponent.generated.h"

class USpringArmComponent;
class UCameraComponent;
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent), Blueprintable )
class TEMPESTCOMBATFRAMEWORK_API UTempestTargetingComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UTempestTargetingComponent();


	UPROPERTY(BlueprintReadWrite, Category = "Targeting Properties")
	AActor* TargetedActor = nullptr;

	UPROPERTY(BlueprintReadOnly, Category = "Targeting Properties")
	TArray<AActor*> PotentialTargets;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Targeting Properties")
	float TargetingRadius = 1000.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Targeting Properties")
	TArray<TEnumAsByte<EObjectTypeQuery>> TargetsType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Targeting Properties")
	UClass* ClassToTarget = nullptr;

	UPROPERTY(BlueprintReadWrite, Category = "Targeting Base Values")
	UCameraComponent* OwnerCamera;

	UPROPERTY(BlueprintReadWrite, Category = "Targeting Base Values")
	USpringArmComponent* OwnerSpringArm;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintNativeEvent,BlueprintCallable, Category = "Targeting Component Functions")
	void InitializeTargetingComponent(UCameraComponent* CameraComponent, USpringArmComponent* SpringArmComponent);
	virtual void InitializeTargetingComponent_Implementation(UCameraComponent* CameraComponent, USpringArmComponent* SpringArmComponent);

	UFUNCTION(BlueprintCallable, Category = "Targeting Component Functions")
	void SearchForActorToTarget();

	UFUNCTION()
	void InternalSearchForActorToTarget();


	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Targeting Component Functions")
	void DisableLockOn();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Targeting Component Functions")
	void SetLockOnToTarget();

	UFUNCTION(BlueprintCallable, Category = "Targeting Component Functions")
	void StaticSwitchToNewTarget(bool RightDirection);

	UFUNCTION(BlueprintCallable, Category = "Targeting Component Functions")
	void UpdatePotentialTargets();

			/* Getters */
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Targeting Component Getters")
	bool CanBeTargeted(AActor* ActorToTarget);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Targeting Component Getters")
	FORCEINLINE AActor* GetTargetedActor() { return TargetedActor; }

	/*    Math Functions     */
	UFUNCTION(BlueprintCallable, Category = "Math Calculations")
	float CalculateAngleFromCamera(const AActor* TargetActor);
};
