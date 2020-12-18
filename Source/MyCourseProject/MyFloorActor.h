// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyFloorActor.generated.h"

UCLASS()
class MYCOURSEPROJECT_API AMyFloorActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyFloorActor();

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Box)
		class UBoxComponent* MyRootComp;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Box)
		class UStaticMesh* FloorMesh;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Box)
		class UMaterial* FloorColor;
	class AMyCharacter* MyPers;
	//Линии на которые будут спавниться пончики.
	float Delay = 24.0f;
	float Buff = 0;
	//Задаём максимальные и минимальные высоты.
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	void SpawnFloorWithObstacles();
};
