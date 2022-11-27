// Fill out your copyright notice in the Description page of Project Settings.


#include "DialogueContainer.h"

// Sets default values for this component's properties
UDialogueContainer::UDialogueContainer()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	m_DevContainer = CreateDefaultSubobject<UStaticMesh>(TEXT("DialogueContainer"));
	
}


// Called when the game starts
void UDialogueContainer::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UDialogueContainer::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

