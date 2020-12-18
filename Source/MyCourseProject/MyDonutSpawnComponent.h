// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MyCharacter.h"
#include "MyDonuts.h"
#include "MyDonutSpawnComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MYCOURSEPROJECT_API UMyDonutSpawnComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UMyDonutSpawnComponent();
	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
		//int DonutsCollected;
protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	
	//UFUNCTION()
	//void DonutTouched();
public:	
	// Called every frame
	//virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	//UFUNCTION(BlueprintPure, Category = "Score")
		//int GetScore();
};
