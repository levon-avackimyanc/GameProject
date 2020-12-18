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
	
	//������������� ������ �������
	GetCapsuleComponent()->InitCapsuleSize(42.0f, 96.0f);

	//������� ������� � ��������� Use Controller Rotation Yaw (����� �������� �� ����������� ��� ���� ���� �� �����)
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	//������ � ����������� ��������� "SpringArm" ���� �� ������� ����� ������������� ���� ������
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	//��������� CameraBoom ��� �������� ���������
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 110.0f), FRotator(-30.0f, 0.0f, 0.0f));
	//�������� ��������� �� ���� �� �������������� ������
	CameraBoom->TargetArmLength = 350.0f;
	//��������� �������� ������
	CameraBoom->bEnableCameraLag = false;
	CameraBoom->bUsePawnControlRotation = true;

	//������ � ����������� ������ 
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	//���������� ���� ������ � ������ CameraBoom
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	FollowCamera->bUsePawnControlRotation = false;

	//����������� ��� ��������� ����������� (Movement Component)
	//����������� �������� ��������� ����� ����������� ������������ ������
	GetCharacterMovement()->bOrientRotationToMovement = false;
	//����������� �������������� ����������� ���������
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f);
	GetCharacterMovement()->JumpZVelocity = 700.0f;
	GetCharacterMovement()->AirControl = 0.2f;
	GetCharacterMovement()->MaxWalkSpeed = 600.0f;
	GetCharacterMovement()->SetWalkableFloorAngle(60);

	//��������� ���������� ������ ������� ������ � ������������ �� ���� �������� ������
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
		//�������� ���� ����������� ������ �� ��� Yaw
		const FRotator Rotation = Controller->GetControlRotation();
		//�������������� YawRotation � ������� ������������
		const FRotator YawRotation(0.0f, Rotation.Yaw, 0.0f);
		//������������ ������ (�����������) �������� �� ��� �
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		//����� ��������
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
	//������ �������� ������
	//PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	//PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);

	//������ ������ � ��������� ������
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &AMyCharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	//������ �������� �����-����� � �����-������
	//PlayerInputComponent->BindAxis("MoveForward", this, &AMyCharacter::Tick);
	PlayerInputComponent->BindAction("MoveRight", IE_Pressed, this, &AMyCharacter::MoveRight);
	PlayerInputComponent->BindAction("MoveLeft", IE_Pressed, this, &AMyCharacter::MoveLeft);
}

void  AMyCharacter::MoveRight() {
	if ((Controller != NULL)) {
		FVector Direction = GetActorLocation();
		if (Direction.Y < Width) {
			//�������� ���� ����������� ������ �� ��� Yaw
			FRotator Rotation = Controller->GetControlRotation();
			//�������������� YawRotation � ������� ������������
			FRotator YawRotation(0.0f, Rotation.Yaw, 0.0f);
			//������������ ������ (�����������) �������� �� ������ ���
			//FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
			//FVector Direction = GetActorLocation();
			FVector NewDirection(Direction.X + 10.0f, Direction.Y + Width, Direction.Z);
			//����� ��������
			TeleportTo(NewDirection, Rotation, false, true);
		}
	}
}
void AMyCharacter::MoveLeft() {
	if ((Controller != NULL)) {
		FVector Direction = GetActorLocation();
		if (Direction.Y > (-Width)) {
			//�������� ���� ����������� ������ �� ��� Yaw
			FRotator Rotation = Controller->GetControlRotation();
			//�������������� YawRotation � ������� ������������
			FRotator YawRotation(0.0f, Rotation.Yaw, 0.0f);
			//������������ ������ (�����������) �������� �� ������ ���
			 //FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
			//FVector Direction = GetActorLocation();
			FVector NewDirection(Direction.X + 10.f, Direction.Y - Width, Direction.Z);
			//����� ��������
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
	//������� ������, ���� ������� ���� ������� � �������� �� �����������.
	TArray<AActor* > CollectedDonuts;
	//�������� ���� �������, � �������� �����������.
	GetOverlappingActors(CollectedDonuts);
	AMyCourseProjectGameModeBase* Gamemode = Cast<AMyCourseProjectGameModeBase>(UGameplayStatics::GetGameMode(this));
	//�������� ���� � ��� ���� ������������.
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

