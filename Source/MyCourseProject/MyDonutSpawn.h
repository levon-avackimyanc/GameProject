// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "MyDonuts.h"
#include "MyCharacter.h"
#include "MyDonutSpawn.generated.h"

UCLASS()
class MYCOURSEPROJECT_API AMyDonutSpawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AMyDonutSpawn();
	class AMyCharacter* MyPlayer;
	//Линии на которые будут спавниться пончики.
	float Line_0 = 0.f, Line_1 = 500.f, Line_2 = -500.f;
	//Задаём задержку
	float Delay = 2.5f;
	//Счётчик
	float BuffTimer = 0.f;
	//Задаём максимальные и минимальные высоты для пончиков.
	float MaxZ = 550.f;
	float MinZ = 300.f;
	//Задаём переменную отвечающую за перемещение объектов по оси Ox
	float Xobj = 0;
	int scores = 0;
	//Задаём переменную отвечающую за перемещение тропинки по оси Ox
	float X = 1078;
	float Width = 2156;
	//Функция рандомного добавления пончиков
	void AddRandDonut();
	void AddFloor();
	void AddObstacles();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
};
