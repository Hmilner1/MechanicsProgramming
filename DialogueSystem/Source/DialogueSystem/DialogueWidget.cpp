// Fill out your copyright notice in the Description page of Project Settings.

#include "DialogueWidget.h"
#include "MyCharacter.h"
#include "Kismet/GameplayStatics.h"

void UDialogueWidget::NativeConstruct()
{
	Super::NativeConstruct();
	m_Dialogue->SetVisibility(ESlateVisibility::Hidden);
	m_Border->SetVisibility(ESlateVisibility::Hidden);
	Visible = false;
	
	AActor* Player;
	Player = UGameplayStatics::GetActorOfClass(GetWorld(),AMyCharacter::StaticClass());
	AMyCharacter* Character = Cast<AMyCharacter>(Player);
	Character->OnTestEvent.AddDynamic(this, &UDialogueWidget::DisplayBox);
}

void UDialogueWidget::DisplayBox(FString DisplayText)
{
	if(!Visible)
	{
		m_Dialogue->SetVisibility(ESlateVisibility::Visible);
		m_Border->SetVisibility(ESlateVisibility::Visible);
		m_Dialogue->SetText(FText::FromString(DisplayText));
		Visible = true;
	}
	else if(Visible)
	{
		m_Dialogue->SetVisibility(ESlateVisibility::Hidden);
		m_Border->SetVisibility(ESlateVisibility::Hidden);
		Visible = false;
	}
}
