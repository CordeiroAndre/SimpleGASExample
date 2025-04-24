// Fill out your copyright notice in the Description page of Project Settings.


#include "DemoCharacter.h"


ADemoCharacter::ADemoCharacter()
{
	AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>("Componente de habilidades");
	DemoAttributes = CreateDefaultSubobject<UDemoAttributes>("DemoAttributes");
}

UAbilitySystemComponent* ADemoCharacter::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

void ADemoCharacter::BeginPlay()
{
	Super::BeginPlay();
	AbilitySystemComponent->InitializeComponent();
}
