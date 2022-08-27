// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Components/SplineComponent.h"
#include "SplineHelper.generated.h"

/**
 * 
 */
UCLASS()
class ROLLERBALL_API USplineHelper : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
		UFUNCTION(BlueprintPure , Category ="SplinesHelper")
		static FVector getClosestDirectionOnSpline(USplineComponent* spline , FVector Location);
};
