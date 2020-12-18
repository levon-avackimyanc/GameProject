// Fill out your copyright notice in the Description page of Project Settings.


#include "MyDonuts.h"
#include "Components/SphereComponent.h"
#include "MyCharacter.h"
#include "UObject/ConstructorHelpers.h"

// Sets default values
AMyDonuts::AMyDonuts()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MyRootComp = CreateDefaultSubobject<USphereComponent>("DonRoot");
	//Добавляем сферический блок к актеру
	//Задаём радиус
	MyRootComp->SetSphereRadius(97.5f);
	RootComponent = MyRootComp;
	//Берём уже готовый мэш и инициализируем им нашу переменную того же типа
	MyMeshComp = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Game/MyBluePrints/PolygonCity/PolygonCity/Meshes/Props/SM_Prop_LargeSign_Donut_01.SM_Prop_LargeSign_Donut_01'")).Object;
	DonColor = ConstructorHelpers::FObjectFinder<UMaterial>(TEXT("Material'/Game/MyBluePrints/DonutMaterial.DonutMaterial'")).Object;
	DonColor2 = ConstructorHelpers::FObjectFinder<UMaterial>(TEXT("Material'/Game/MyBluePrints/DonutMaterial2.DonutMaterial2'")).Object;
	FVector Size = FVector(0.5f, 0.5f, 0.5f);
	//Создаем статический блок для загрузки сетки в модель
	class UStaticMeshComponent* EatDon = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Eat"));
	//Задаём статическую сетку для блока
	EatDon->SetStaticMesh(MyMeshComp);
	//Задаём для нашей еды все размерности
	EatDon->SetRelativeRotation(FRotator(90, 0, 0));
	EatDon->SetRelativeLocation(FVector(0, 0, 0));
	EatDon->SetRelativeScale3D(FVector(0.5, 0.5, 0.5));
	EatDon->SetMaterial(0, DonColor);
	EatDon->SetMaterial(1, DonColor2);
	//Прикрепили пончик к центральной точке нашей модели
	EatDon->AttachTo(MyRootComp);
	//Включаем симуляцию физики для нашей модели
	EatDon->SetSimulatePhysics(false);
}

// Called when the game starts or when spawned
void AMyDonuts::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AMyDonuts::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Buff += DeltaTime;
	if (Buff > Delay) {
		Destroy(true, true);
		}
}


/*void AMyDonuts::CollectDonut()
{
	//Объявим массив, куда запишем всех акторов с которыми мы столкнулись.
	TArray<AActor* > CollectedDonuts;
	//Переберём всех акторов, с которыми столкнулись.
	GetOverlappingActors(CollectedDonuts);
	
	//Переберём всех с кем есть столкновение.
	for (int32 i = 0; i < CollectedDonuts.Num(); i++) {
		AMyCharacter* const Test = Cast<AMyCharacter>(CollectedDonuts[i]);
		if (Test) {
			Destroy(true, true);
			//Так как мы нашли нашего персонажа, то нет смысла дальше проверять
			break;
		}
	}
}*/

