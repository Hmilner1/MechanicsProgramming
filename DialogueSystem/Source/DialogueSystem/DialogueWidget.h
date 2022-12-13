// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Border.h"
#include "Components/TextBlock.h"
#include "DialogueWidget.generated.h"

/**
 * 
 */
UCLASS( Abstract )
class DIALOGUESYSTEM_API UDialogueWidget : public UUserWidget
{
	GENERATED_BODY()

protected:
	
	UPROPERTY(meta=( BindWidget))
	UTextBlock* m_Dialogue;

	UPROPERTY(meta=( BindWidget))
	UTextBlock* m_DialogueName;

	UPROPERTY(meta=( BindWidget))
	UBorder* m_Border;
	
	bool Visible;

	void NativeConstruct() override;
	
	int NumText = 0;
	int dialoguePoint = 1;
	
	UFUNCTION()
	void DisplayBox(TArray<FString> AIDisplayText, TArray<FString> PlayerDisplayText, FString DisplayName);
};
