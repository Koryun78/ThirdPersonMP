// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor.h"
#include "ThirdPersonMPProjectile.h"

// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

void AMyActor::SetAThirdPersonMPProjectile(AThirdPersonMPProjectile * thr)
{
	c = thr;
}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();


	//c->OnTestDelegate.AddDynamic(this, &AMyPlayerController::TestFunction);

	//c->OnTestDelegate.Broadcast();
}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AMyActor::TestFunction()
{
	GEngine->AddOnScreenDebugMessage(5, 16.3f, FColor::Blue, "barev");
}