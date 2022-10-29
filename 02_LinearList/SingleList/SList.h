#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int SLTDataType;

typedef struct SListNode
{
    SLTDataType data;
    struct SListNode* next;
}SLTNode;

void SListPrint(SLTNode* phead);
void SLPushBack(SLTNode** pphead, SLTDataType x);
void SLPushFront(SLTNode** pphead, SLTDataType x);
void SLPopBack(SLTNode** pphead);
void SLPopFront(SLTNode** pphead);


