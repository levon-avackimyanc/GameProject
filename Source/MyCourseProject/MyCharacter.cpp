// Fill out your copyright notice in the Description page of Project Settings.

#include "MyCharacter.h"
#include "Math/TransformNonVectorized.h"
#include "MyCourseProjectGameModeBase.h"
#include "Kismet/GameplayStatics.h"
#include "MyDonuts.h"

// Sets default values
AMyCharacter::AMyCharacter(): Width(500.0f)
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	//Устанавливаем размер капсулы
	GetCapsuleComponent()->InitCapsuleSize(42.0f, 96.0f);

	//Убираем галочку с параметра Use Controller Rotation Yaw (Чтобы персонаж не поворачивал своё тело стоя на месте)
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	//Создаём и настраиваем компонент "SpringArm" рука на которой будет зафиксирована наша камера
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	//Назначаем CameraBoom как корневой компонент
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 110.0f), FRotator(-30.0f, 0.0f, 0.0f));
	//Изменяем дистанцию от руки до местоположения камеры
	CameraBoom->TargetArmLength = 350.0f;
	//Выключаем задержку камеры
	CameraBoom->bEnableCameraLag = false;
	CameraBoom->bUsePawnControlRotation = true;

	//Создаём и настраиваем камеру 
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	//Вкладываем нашу камеру в раздел CameraBoom
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	FollowCamera->bUsePawnControlRotation = false;

	//Настраиваем наш компонент перемещения (Movement Component)
	//Направление движения персонажа может определятся направлением камеры
	GetCharacterMovement()->bOrientRotationToMovement = false;
	//Настраиваем характеристики перемещения персонажа
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f);
	GetCharacterMovement()->JumpZVelocity = 700.0f;
	GetCharacterMovement()->AirControl = 0.2f;
	GetCharacterMovement()->MaxWalkSpeed = 600.0f;
	GetCharacterMovement()->SetWalkableFloorAngle(60);

	//Объявляем переменную смерти которая видная и редактируема во всех разделах движка
	//DonutsCollected = 0;
	ScoresPoints = 10;


}

// Called when the game starts or when spawned
void AMyCharacter::BeginPlay()
{
	Super::BeginPlay();
}

/*int AMyCharacter::GetScore()
{
	if (this) {
		return DonutsCollected;
	}
	else {
		return 0;
	}
}*/

// Called every frame
void AMyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if ((Controller != NULL) && (DeltaTime != 0.0f)) {
		//Получаем угол направления камеры по оси Yaw
		const FRotator Rotation = Controller->GetControlRotation();
		//Инициализируем YawRotation с помощью конструктора
		const FRotator YawRotation(0.0f, Rotation.Yaw, 0.0f);
		//Рассчитываем вектор (направления) движения по оси х
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		//Задаём движение
		BuffTimer += DeltaTime;
		AddMovementInput(Direction, DeltaTime * GetCharacterMovement()->MaxWalkSpeed);
		CollectDon();
		if (BuffTimer > Delay) {
			if (GetCharacterMovement()->MaxWalkSpeed == 950.0f) 
			{ }
			else { GetCharacterMovement()->MaxWalkSpeed += 5.0f; }
			BuffTimer = 0;
		}
	}
}

// Called to bind functionality to input
void AMyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	//Биндим повороты камеры
	//PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	//PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);

	//Биндим прыжок и остановку прыжка
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &AMyCharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	//Биндим движения вперёд-назад и влево-вправо
	//PlayerInputComponent->BindAxis("MoveForward", this, &AMyCharacter::Tick);
	PlayerInputComponent->BindAction("MoveRight", IE_Pressed, this, &AMyCharacter::MoveRight);
	PlayerInputComponent->BindAction("MoveLeft", IE_Pressed, this, &AMyCharacter::MoveLeft);
}

void  AMyCharacter::MoveRight() {
	if ((Controller != NULL)) {
		FVector Direction = GetActorLocation();
		if (Direction.Y < Width) {
			//Получаем угол направления камеры по оси Yaw
			FRotator Rotation = Controller->GetControlRotation();
			//Инициализируем YawRotation с помощью конструктора
			FRotator YawRotation(0.0f, Rotation.Yaw, 0.0f);
			//Рассчитываем вектор (направления) движения по другой оси
			//FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
			//FVector Direction = GetActorLocation();
			FVector NewDirection(Direction.X + 10.0f, Direction.Y + Width, Direction.Z);
			//Задаём движение
			TeleportTo(NewDirection, Rotation, false, true);
		}
	}
}
void AMyCharacter::MoveLeft() {
	if ((Controller != NULL)) {
		FVector Direction = GetActorLocation();
		if (Direction.Y > (-Width)) {
			//Получаем угол направления камеры по оси Yaw
			FRotator Rotation = Controller->GetControlRotation();
			//Инициализируем YawRotation с помощью конструктора
			FRotator YawRotation(0.0f, Rotation.Yaw, 0.0f);
			//Рассчитываем вектор (направления) движения по другой оси
			 //FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
			//FVector Direction = GetActorLocation();
			FVector NewDirection(Direction.X + 10.f, Direction.Y - Width, Direction.Z);
			//Задаём движение
			TeleportTo(NewDirection, Rotation, false, true);
		}
	}
}


void  AMyCharacter::Jump() {
	if ((Controller != NULL)) {
		ACharacter::Jump();
	}
}

void  AMyCharacter::StopJumping() {
	ACharacter::StopJumping();
}

void AMyCharacter::CollectDon()
{
	//Объявим массив, куда запишем всех акторов с которыми мы столкнулись.
	TArray<AActor* > CollectedDonuts;
	//Переберём всех акторов, с которыми столкнулись.
	GetOverlappingActors(CollectedDonuts);
	AMyCourseProjectGameModeBase* Gamemode = Cast<AMyCourseProjectGameModeBase>(UGameplayStatics::GetGameMode(this));
	//Переберём всех с кем есть столкновение.
	for (int32 i = 0; i < CollectedDonuts.Num(); i++) {
		AMyDonuts* const Test = Cast<AMyDonuts>(CollectedDonuts[i]);
		if (Test) {
			if (Gamemode)
			{
				Gamemode->AddScores(ScoresPoints);
			}
			CollectedDonuts[i]->Destroy();
			break;
		}
	}
}

