// Copyright 2022, Developed by Aamn Chahrour & Samrudh Sunil, Published by Inherited Tempest. All Rights Reserved. 

#pragma once

#include "CoreMinimal.h"
#include "Objects/TempestBaseObject.h"
#include "TempestBaseCameraProperty.h"
#include <Templates/SubclassOf.h>
#include "TempestBaseCameraMode.generated.h"

/**
 * 
 */
 class UTempestBaseCameraProperty;
UCLASS()
class TEMPESTCAMERASYSTEMS_API UTempestBaseCameraMode : public UTempestBaseObject
{
	GENERATED_BODY()
public:
	UTempestBaseCameraMode();

	UPROPERTY(BlueprintReadWrite, Category = "Initialization")
	FGameplayTag CameraModeStatus;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Initialization")
	TArray<TSubclassOf<UTempestBaseCameraProperty>> CameraProperties;

	UPROPERTY(BlueprintReadOnly, Category = "Base Variables")
	class UTempestCameraModeComponent* CameraModeComponent;

protected:

	UPROPERTY(BlueprintReadWrite, Category = "Tick Values")
	float TimePassed;

	UPROPERTY(BlueprintReadWrite, Category = "Initialization")
	TArray<UTempestBaseCameraProperty*> CreatedCameraProperties;



public:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Base Functions")
	void ConstructCameraMode();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Base Functions")
	void InitializeCameraProperties();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Base Functions")
	void StartCameraMode();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Base Functions")
	void TickCameraMode(float TickValue);
	
	UFUNCTION(BlueprintCallable, Category = "Camera Mode Setters")
	void SetCameraModeStatus(FGameplayTag NewCameraModeStatus);

	UFUNCTION(BlueprintImplementableEvent,BlueprintCallable, Category = "Camera Mode Setters")
	void OnUpdatedCameraModeStatus();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Base Functions")
	void EndCameraMode();

	UFUNCTION(BlueprintCallable, BlueprintPure ,Category = "Camera Mode Getters")
	void GetCameraPropertyOfType(FGameplayTag PropertyTypeToFind, UTempestBaseCameraProperty*& FoundCameraProperty);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Camera Mode Getters")
	void GetCameraPropertyOfClass(TSubclassOf<UTempestBaseCameraProperty> PropertyClassToFind, UTempestBaseCameraProperty*& FoundCameraProperty);

	UFUNCTION(BlueprintCallable, Category = "Camera Mode Getters")
	void ConstructCameraPropertyOfClass(TSubclassOf<UTempestBaseCameraProperty> NewCameraPropertyClass, UTempestBaseCameraProperty*& CreatedCameraProperty);
};
