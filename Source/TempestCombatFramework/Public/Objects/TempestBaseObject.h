// Copyright 2022, Developed by Aamn Chahrour & Samrudh Sunil, Published by Inherited Tempest. All Rights Reserved. 

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "TempestBaseObject.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, BlueprintType)
class TEMPESTCOMBATFRAMEWORK_API UTempestBaseObject : public UObject
{
	GENERATED_BODY()
	
public:

	//To Set The World in the Object to be able to use some BP nodes
	virtual UWorld* GetWorld() const override;


};
