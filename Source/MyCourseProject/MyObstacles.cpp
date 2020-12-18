// Fill out your copyright notice in the Description page of Project Settings.


#include "MyObstacles.h"
#include "Components/BoxComponent.h"
#include "UObject/ConstructorHelpers.h"

// Sets default values
AMyObstacles::AMyObstacles()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	//Берём уже готовый мэш и инициализируем им нашу переменную того же типа
	Mesh = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Game/MyBluePrints/PolygonCity/PolygonCity/Meshes/Environments/SM_Env_Bridge_Pillar_01.SM_Env_Bridge_Pillar_01'")).Object;
	//Берём уже готовый цвет и инициализируем им нашу переменную
	VehColor = ConstructorHelpers::FObjectFinder<UMaterial>(TEXT("Material'/Game/MyBluePrints/ObstacleMaterial.ObstacleMaterial'")).Object;
	//Cоздаём корневой компонент
	MyRootComp = CreateDefaultSubobject<UBoxComponent>("VehRoot");
	MyRootComp->SetBoxExtent(FVector(40.f, 42.f, 25.f));
	//Добавляем блок к актеру
	RootComponent = MyRootComp;
	//Создаем статический блок для загрузки сетки в модель
	class UStaticMeshComponent* VehComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Stolb"));
	//Задаём статическую сетку для блока
	VehComp->SetStaticMesh(Mesh);
	//Зададим все размерности для нашей машины
	VehComp->SetRelativeLocation(FVector(0, 0, 0));
	//Уже подобранный материал красит наш столб
	VehComp->SetMaterial(0, VehColor);
	//Прикрепили к центральной точке нашей модели
	VehComp->AttachTo(MyRootComp);
}

// Called when the game starts or when spawned
void AMyObstacles::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyObstacles::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	DeadTouch();
Buff += DeltaTime;
	if (Buff > Delay) {
		Destroy(true, true);
	}
}

void AMyObstacles::DeadTouch()
{
	//Объявим массив, куда запишем всех акторов с которыми мы столкнулись.
	TArray<AActor* > CollectedActors;
	GetOverlappingActors(CollectedActors);
	//Переберём всех с кем есть столкновение.
	for (int32 i = 0; i < CollectedActors.Num(); i++) {
		AMyCharacter* const Test = Cast<AMyCharacter>(CollectedActors[i]);
		if (Test) {
			CollectedActors[i]->Destroy();
			//Так как мы нашли нашего персонажа, то нет смысла дальше проверять
			break;
		}
	}
}

int AMyObstacles::GetEndScore()
{
	return EndScore;
}

