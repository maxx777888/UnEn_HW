// Fill out your copyright notice in the Description page of Project Settings.


#include "CppBaseActor.h"

// Sets default values
ACppBaseActor::ACppBaseActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
	SetRootComponent(Mesh);

}

// Called when the game starts or when spawned
void ACppBaseActor::BeginPlay()
{
	Super::BeginPlay();
	InitialLocation = this->GetActorLocation();
	
}

void ACppBaseActor::SinMovement() 
{
	float timeFromStart = GetWorld()->GetTimeSeconds();
	FVector NewActorLocation = InitialLocation;
	NewActorLocation.Z += Amplitude * FMath::Sin(Frequency * timeFromStart);
	SetActorLocation(NewActorLocation);
}

// Called every frame
void ACppBaseActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

