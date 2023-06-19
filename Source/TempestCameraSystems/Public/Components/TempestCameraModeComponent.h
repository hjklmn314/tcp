// Copyright 2022, Developed by Aamn Chahrour & Samrudh Sunil, Published by Inherited Tempest. All Rights Reserved. 

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Objects/TempestBaseCameraMode.h"
#include "TempestCameraModeComponent.generated.h"

class UTempestBaseCameraMode;
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent), Blueprintable )
class TEMPESTCAMERASYSTEMS_API UTempestCameraModeComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UTempestCameraModeComponent();

	UPROPERTY(BlueprintReadWrite, Category = "BaseVariables")
	UTempestBaseCameraMode* CurrentCameraMode;

	UPROPERTY(BlueprintReadWrite, Category = "BaseVariables")
	UCameraComponent* CameraComponent; 

	UPROPERTY(BlueprintReadWrite, Category = "BaseVariables")
	USpringArmComponent* SpringArmComponent;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Initialization Functions")
	void InitializeCameraModeComponent(UCameraComponent* NewCameraComponent, USpringArmComponent* NewSpringArmComponent);
	virtual void InitializeCameraModeComponent_Implementation(UCameraComponent* NewCameraComponent, USpringArmComponent* NewSpringArmComponent);

	UFUNCTION(BlueprintCallable, Category = "Base Functions")
	void SetCameraModeOfClass(TSubclassOf<UTempestBaseCameraMode> NewCameraModeClass);

	UFUNCTION(BlueprintCallable, Category = "Base Functions")
	void ConstructCameraModeOfClass(TSubclassOf<UTempestBaseCameraMode> NewCameraModeClass, UTempestBaseCameraMode*& CreatedCameraMode);
};
