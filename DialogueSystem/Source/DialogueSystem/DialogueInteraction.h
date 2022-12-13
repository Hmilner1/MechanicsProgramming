// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/TextBlock.h"
#include "GameFramework/Actor.h"
#include "DialogueInteraction.generated.h"

UCLASS()
class DIALOGUESYSTEM_API ADialogueInteraction : public AActor
{
	GENERATED_BODY()
	
public:	
	ADialogueInteraction();
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category="TextBox")
	TArray<FString> m_Dialogue;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category="TextBox")
	FString m_AiName;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category="TextBox")
	TArray<FString> m_PlayerDialogue;

protected:

	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category="Root")
	USceneComponent* m_Root;

};
