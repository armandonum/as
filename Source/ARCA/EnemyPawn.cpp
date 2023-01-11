// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyPawn.h"



//void AEnemyPawn::Hunt()
//{
//
//	estado = EEnemyState::Default;
//
//	StateChangedEvent.Broadcast(estado);
//
//}
//
//void AEnemyPawn::Idle()
//{
//
//
//	estado = EEnemyState::Idle;
//
//	StateChangedEvent.Broadcast(estado);
//}
//
//

AEnemyPawn::AEnemyPawn()
{

	PrimaryActorTick.bCanEverTick = true;
}

void AEnemyPawn::BeginPlay()

{
	Super::BeginPlay();
}

void AEnemyPawn::Tick(float DeltaTime)
{

	Super::Tick(DeltaTime);
}

void AEnemyPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}
