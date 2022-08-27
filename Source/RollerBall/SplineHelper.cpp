// Fill out your copyright notice in the Description page of Project Settings.


#include "SplineHelper.h"

FVector USplineHelper::getClosestDirectionOnSpline(USplineComponent* spline, FVector Location)
{
	return spline->FindDirectionClosestToWorldLocation(Location , ESplineCoordinateSpace::Local);
}
