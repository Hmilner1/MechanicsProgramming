// Fill out your copyright notice in the Description page of Project Settings.

#include "DialogueWidget.h"

#include <string>

#include "MyCharacter.h"
#include "Kismet/GameplayStatics.h"

void UDialogueWidget::NativeConstruct()
{
	Super::NativeConstruct();
	m_Dialogue->SetVisibility(ESlateVisibility::Hidden);
	m_DialogueName->SetVisibility(ESlateVisibility::Hidden);
	m_Border->SetVisibility(ESlateVisibility::Hidden);
	Visible = false;
	NumText = 0;

	AActor* Player;
	Player = UGameplayStatics::GetActorOfClass(GetWorld(),AMyCharacter::StaticClass());
	AMyCharacter* Character = Cast<AMyCharacter>(Player);
	Character->DialogueEvent.AddDynamic(this, &UDialogueWidget::DisplayBox);
}

void UDialogueWidget::DisplayBox(TArray<FString> AIDisplayText, TArray<FString> PlayerDisplayText, FString DisplayName)
{
	if(dialoguePoint < AIDisplayText.Num() + PlayerDisplayText.Num() + 1)
	{
		int remainder = dialoguePoint % 2;
		m_Dialogue->SetVisibility(ESlateVisibility::Visible);
		m_DialogueName->SetVisibility(ESlateVisibility::Visible);
		m_Border->SetVisibility(ESlateVisibility::Visible);
		if(remainder == 0)
		{
			m_Dialogue->SetText(FText::FromString(PlayerDisplayText[NumText]));
			m_DialogueName->SetText(FText::FromString("Player"));
			dialoguePoint++;
			NumText++;
		}
		else if (remainder != 0)
		{
			m_Dialogue->SetText(FText::FromString(AIDisplayText[NumText]));
			m_DialogueName->SetText(FText::FromString(DisplayName));
			dialoguePoint++;
		}
		Visible = true;
	}
	else if(dialoguePoint > AIDisplayText.Num() + PlayerDisplayText.Num() + 1)
	{
		m_Dialogue->SetVisibility(ESlateVisibility::Hidden);
		m_DialogueName->SetVisibility(ESlateVisibility::Hidden);
		m_Border->SetVisibility(ESlateVisibility::Hidden);
		Visible = false;
		NumText = 0;
		dialoguePoint = 1;
	}
}