// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCharacter.h"
#include "Blueprint/UserWidget.h"

// Sets default values
AMyCharacter::AMyCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	bUseControllerRotationYaw = false;
	
	m_Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	m_Camera->SetupAttachment(RootComponent);
	
}

// Called when the game starts or when spawned
void AMyCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis(TEXT("MoveForward"), this, &AMyCharacter::MoveForward);
	PlayerInputComponent->BindAxis(TEXT("MoveRight"), this, &AMyCharacter::MoveRight);
	PlayerInputComponent->BindAxis(TEXT("Turn"), this, &AMyCharacter::HorizontalRotation);
	PlayerInputComponent->BindAxis(TEXT("LookUp"), this, &AMyCharacter::VerticalRotation);
	PlayerInputComponent->BindAction(TEXT("Jump"), IE_Pressed, this, &AMyCharacter::Jump);
	PlayerInputComponent->BindAction(TEXT("Interact"), IE_Pressed,this, &AMyCharacter::Interact);
	
}

void AMyCharacter::MoveForward(float AxisVal)
{
	AddMovementInput(GetActorForwardVector()* AxisVal);
}

void AMyCharacter::MoveRight(float AxisVal)
{
	AddMovementInput(GetActorRightVector()* AxisVal);

}

void AMyCharacter::HorizontalRotation(float Val)
{
	AddActorLocalRotation(FRotator(0, Val, 0));
}

void AMyCharacter::VerticalRotation(float Val)
{
	float rot = m_Camera->GetRelativeRotation().Pitch + Val;

	if(rot < 50 && rot > -50)
	{
		m_Camera->AddLocalRotation(FRotator(Val,0,0));
	}
}

void AMyCharacter::Interact()
{
	
	OnTestEvent.Broadcast();
}




