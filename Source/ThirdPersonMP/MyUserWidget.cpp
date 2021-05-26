// Fill out your copyright notice in the Description page of Project Settings.


#include "MyUserWidget.h"
#include "Components//ProgressBar.h"

bool UMyUserWidget::Initialize()
{
	Super::Initialize();

	this->HP->Percent = 1.0f;
	this->HP->SetFillColorAndOpacity(FLinearColor::Green);

	return true;
}

void UMyUserWidget::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);

	this->HP->SetPercent(Character->GetCurrentHealt() / Character->GetMaxHealt());

	if (this->HP->Percent <= 0.6f && this->HP->Percent >= 0.3f) 
		this->HP->SetFillColorAndOpacity(FLinearColor::Yellow);
		else if (this->HP->Percent < 0.3f && this->HP->Percent >= 0.1f)
			this->HP->SetFillColorAndOpacity(FLinearColor::Red);	
}

void UMyUserWidget::SetHP(float Value)
{
	this->HP->Percent = Value;
}