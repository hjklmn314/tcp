// Copyright 2022, Developed by Aamn Chahrour & Samrudh Sunil, Published by Inherited Tempest. All Rights Reserved. 

#pragma once

#include "CoreMinimal.h"
#include "TempestBaseObject.h"
#include "UObject/NoExportTypes.h"
#include "TempestBaseStatisticObject.generated.h"

/**
 * 
 */
UCLASS()
class TEMPESTCOMBATFRAMEWORK_API UTempestBaseStatisticObject : public UTempestBaseObject
{
	GENERATED_BODY()
public:
	UTempestBaseStatisticObject();


	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Statistic Properties")
	FGameplayTag StatisticGameplayTag;

	UPROPERTY(BlueprintReadWrite, Category = "Statistic Properties")
	float StatisticCurrentValue = 0.f;




				/* Statistic Base Functions */
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Statistic Base Functions")
	void ConstructStatistic();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Statistic Base Functions")
	void UpdateStatisticValueBy(float NewStatisticValue);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Statistic Base Functions")
	void TickStatistic(float DeltaTime);
	
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Statistic Base Functions")
	void ResetStatisticValue();
};
