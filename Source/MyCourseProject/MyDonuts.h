// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/World.h"
#include "MyDonuts.generated.h"



UCLASS()
class MYCOURSEPROJECT_API AMyDonuts : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyDonuts();
    //ќбъ€вим сферу, котора€ будет играть роль коллизии дл€ нашей еды.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Sphere)
	class USphereComponent* MyRootComp;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Mesh)
		class UStaticMesh* MyMeshComp;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Box)
		class UMaterial* DonColor;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Box)
		class UMaterial* DonColor2;
	float Delay = 24.0f;
	float Buff = 0;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	//UFUNCTION()
	//void CollectDonut();
};
