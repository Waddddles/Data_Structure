#include "SList.h"

SLTNode* BuyListNode(SLTDataType x)
{
    SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
    newnode->data = x;
    newnode->next = NULL;
    return newnode;
}

void SListPrint(SLTNode* phead)
{
    SLTNode* cur = phead;
    while (cur != NULL)
    {
        printf("%d->",cur->data);
        cur = cur->next;
    }
    printf("NULL\n");
}

void SLPushBack(SLTNode** pphead, SLTDataType x)
{
    SLTNode* newnode = BuyListNode(x);
    if (*pphead == NULL)
    {
        *pphead = newnode;
    }
    else
    {
        SLTNode* tail = *pphead;
        while (tail->next != NULL)
        {
            tail = tail->next;
        }
        tail->next = newnode;
    }
}

void SLPushFront(SLTNode** pphead, SLTDataType x)
{
    SLTNode* newnode = BuyListNode(x);

    newnode->next = *pphead;
    *pphead = newnode;
}

void SLPopBack(SLTNode** pphead)
{
    assert(*pphead != NULL);
    SLTNode* prev = NULL;
    SLTNode* tail = *pphead;
    while (tail->next)
    {
        prev = tail;
        tail = tail->next;
    }
    free(tail);
    tail = NULL;
    prev->next = NULL;
}

void SLPopFront(SLTNode** pphead)
{
    assert(*pphead);
    SLTNode* next = (*pphead)->next;
    free(*pphead);
    *pphead = next;
}


