// Fill out your copyright notice in the Description page of Project Settings.

#include "DialogueInteraction.h"

ADialogueInteraction::ADialogueInteraction()
{
	PrimaryActorTick.bCanEverTick = true;

	m_Root = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Root"));
	RootComponent = m_Root;
	
}

