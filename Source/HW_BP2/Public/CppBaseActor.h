// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CppBaseActor.generated.h"

UCLASS()
class HW_BP2_API ACppBaseActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACppBaseActor();

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* Mesh;

protected:
	UPROPERTY(EditDefaultsOnly)
	float Amplitude = 70;

	UPROPERTY(EditDefaultsOnly)
	float Frequency = 4;

	UPROPERTY(VisibleDefaultsOnly)
	FVector InitialLocation;



	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable)
	void SinMovement();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
