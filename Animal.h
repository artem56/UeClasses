// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NPC.h"
#include "Animal.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT_API AAnimal : public ANPC
{
	GENERATED_BODY()

public:

	AAnimal();

protected:
	

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Variables")
		FString Location;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Variables")
		FString TryToDoing;

};
