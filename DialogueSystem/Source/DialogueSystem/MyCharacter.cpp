// Fill out your copyright notice in the Description page of Project Settings.

#include "MyCharacter.h"
#include "DialogueInteraction.h"
#include "Blueprint/UserWidget.h"
#include "DrawDebugHelpers.h"

AMyCharacter::AMyCharacter()
{
	PrimaryActorTick.bCanEverTick = true;
	bUseControllerRotationYaw = false;
	
	m_Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	m_Camera->SetupAttachment(RootComponent);
}

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
	FHitResult OutHit;
	FVector Start = RootComponent-> GetComponentLocation();
	FVector ForwardVector = m_Camera->GetForwardVector();
	Start = Start + ForwardVector;

	FVector End = Start + (ForwardVector * 500.0f);

	FCollisionQueryParams CollisionParams;
	CollisionParams.AddIgnoredActor(this);

	//DrawDebugLine(GetWorld(), Start, End, FColor::Green, false, 1,0,1);

	bool IsHit = GetWorld()->LineTraceSingleByChannel(OutHit, Start, End, ECC_Visibility, CollisionParams);
	if(IsHit)
	{
		AActor* HitActor;
		HitActor = OutHit.GetActor();
		//OutHit.GetActor()->Destroy();
		ADialogueInteraction* CharHit = Cast<ADialogueInteraction>(HitActor);
		if(IsValid(CharHit))
		{
			FString TextToSend= CharHit->m_Dialogue;
			OnTestEvent.Broadcast(TextToSend);
		}
	}
}




