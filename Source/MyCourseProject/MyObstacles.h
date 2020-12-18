// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine.h"
#include "MyFloorActor.h"
#include "MyCharacter.h"
#include "MyObstacles.generated.h"

UCLASS()
class MYCOURSEPROJECT_API AMyObstacles : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyObstacles();
	//ќбъ€вим блок, который будет играть роль коллизии дл€ нашего преп€тстви€.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Box)
		class UBoxComponent* MyRootComp;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Box)
		class UMaterial* VehColor;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Box)
		class UStaticMesh* Mesh;
	class AMyCharacter* MyPers;
	float Delay = 24.0f;
	int EndScore = 0;
	float Buff = 0;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void DeadTouch();

	UFUNCTION(BlueprintCallable)
	int GetEndScore();

};
