// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ThirdPersonMPCharacter.h"
//#include "UObject/WeakObjectPtrTemplates.h"
#include "MyUserWidget.generated.h"

/**
 * 
 */
UCLASS()
class THIRDPERSONMP_API UMyUserWidget : public UUserWidget
{
	GENERATED_BODY()
public:
	void SetOwnerCharacter(AThirdPersonMPCharacter* chr) { Character = chr; }

public:

	virtual bool Initialize() override;

	//UPROPERTY()
	class AThirdPersonMPCharacter* Character;

	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;

	UFUNCTION()
		void SetHP(float Value);

private:

	UPROPERTY(meta = (BindWidget))
		class UProgressBar * HP;
};
