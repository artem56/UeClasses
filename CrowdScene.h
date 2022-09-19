// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NPC.h"
#include "CrowdScene.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT_API ACrowdScene : public ANPC
{
	GENERATED_BODY()
	
public:

	ACrowdScene();



protected:


	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Variables")
		FString Animation;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Variables")
		int MovementSpeed;
};
