// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/Character.h"
#include "Kismet/GameplayStatics.h"
#include "MyCharacter.generated.h"

UCLASS()
class DIALOGUESYSTEM_API AMyCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMyCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
	void MoveForward(float AxisVal);
	void MoveRight(float AxisVal);
	void HorizontalRotation(float Val);
	void VerticalRotation(float Val);

	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category="Camera")
	UCameraComponent* m_Camera;
	
};
