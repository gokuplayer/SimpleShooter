// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTAsk_ClearBlackboardValue.h"
#include "BehaviorTree/BlackboardComponent.h"


UBTTAsk_ClearBlackboardValue::UBTTAsk_ClearBlackboardValue()
{
    NodeName = TEXT("Clear Blackboard Value");
}

EBTNodeResult::Type UBTTAsk_ClearBlackboardValue::ExecuteTask(UBehaviorTreeComponent &OwnerComp, uint8 *NodeMemory)
{
    Super::ExecuteTask(OwnerComp, NodeMemory);

    OwnerComp.GetBlackboardComponent()->ClearValue(GetSelectedBlackboardKey());

    return EBTNodeResult::Succeeded;
}
