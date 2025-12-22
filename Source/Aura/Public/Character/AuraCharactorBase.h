// From Azad

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AuraCharactorBase.generated.h"

UCLASS(Abstract)
class AURA_API AAuraCharactorBase : public ACharacter
{
	GENERATED_BODY()

public:
	AAuraCharactorBase();

protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = "Combat")
	TObjectPtr<USkeletalMeshComponent> Weapon;

};
