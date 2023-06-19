// Copyright 2022, Developed by Aamn Chahrour & Samrudh Sunil, Published by Inherited Tempest. All Rights Reserved. 

#pragma once

#include "CoreMinimal.h"
#include "Objects/TempestBaseObject.h"
#include "TempestBaseCameraProperty.generated.h"

/**
 * 
 */
UCLASS()
class TEMPESTCAMERASYSTEMS_API UTempestBaseCameraProperty : public UTempestBaseObject
{
	GENERATED_BODY()
public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Initialization")
	FGameplayTag PropertyType;

	UPROPERTY(BlueprintReadWrite, Category = "Initialization")
	class UTempestBaseCameraMode* CameraMode;

protected:

	UPROPERTY(BlueprintReadWrite, Category = "Tick Values")
	float TimePassed;

public:

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Base Functions")
	void ConstructCameraProperty();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Base Functions")
	void StartCameraProperty();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Base Functions")
	void TickCameraProperty(float TickValue);
};
