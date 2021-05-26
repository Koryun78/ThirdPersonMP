// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ThirdPersonMPProjectile.h"
#include "MyActor.generated.h"

UCLASS()
class THIRDPERSONMP_API AMyActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyActor();

	void SetAThirdPersonMPProjectile(AThirdPersonMPProjectile * thr);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	class AThirdPersonMPProjectile* c;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void TestFunction();
};
