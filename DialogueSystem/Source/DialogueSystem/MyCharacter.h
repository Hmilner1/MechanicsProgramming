// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/Character.h"
#include "MyCharacter.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FDialogueEvent, TArray<FString>, AISentText, TArray<FString>, PlayerSentText, FString, AiName);

UCLASS()
class DIALOGUESYSTEM_API AMyCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	AMyCharacter();
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
	UPROPERTY(BlueprintAssignable)
	FDialogueEvent DialogueEvent;

protected:
	void MoveForward(float AxisVal);
	void MoveRight(float AxisVal);
	void HorizontalRotation(float Val);
	void VerticalRotation(float Val);

	
	void Interact();
	void BoxOn();
	void BoxOff();
	bool m_BoxOpen;
	
	int DialogueTextNum = 0;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category="Camera")
	UCameraComponent* m_Camera;
};
