// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BTTAsk_ClearBlackboardValue.generated.h"

/**
 * 
 */
UCLASS()
class SIMPLESHOOTER_API UBTTAsk_ClearBlackboardValue : public UBTTask_BlackboardBase
{
	GENERATED_BODY()

public:
	UBTTAsk_ClearBlackboardValue();

protected:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent &OwnerComp, uint8 *NodeMemory) override;
	
};