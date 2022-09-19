// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NPC.h"
#include "StoryCharacter.generated.h"

/**
 *
 */
UCLASS()
class MYPROJECT_API AStoryCharacter : public ANPC
{
	GENERATED_BODY()

public:

	AStoryCharacter();



protected:


	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Variables")
		FString Location;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Variables")
		FString Speech;

};
