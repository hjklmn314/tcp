// Copyright 2022, Developed by Aamn Chahrour & Samrudh Sunil, Published by Inherited Tempest. All Rights Reserved. 

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "ANS_AttackTrace.generated.h"

/**
 * 
 */
 class UTempestAttackPropertiesObject;

UCLASS(BlueprintType, Blueprintable, Abstract, HideDropdown)
class TEMPESTCOMBATFRAMEWORK_API UANS_AttackTrace : public UAnimNotifyState
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly ,Category = "Attack Properties")
	UTempestAttackPropertiesObject* AttackProperty;

#if WITH_EDITOR
	virtual void ValidateAssociatedAssets() override;
#endif
};
