#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
//#define N 1000//静态数据表
typedef int SLDataType;

typedef struct SeqList
{
    SLDataType* a;//动态开辟内存(静态的为SLDataType a[N])
    int size;//数组能存储的数据的个数
    int capacity;//数据实际能存数据的个数
}SL;

void SeqListInit(SL* ps);//初始化
void SeqListPrint(SL* ps);//打印数据表
void SeqListDestory(SL* ps);//销毁
void SeqListCheakCapacity(SL* ps);//检查内存
void SeqListPushBack(SL* ps, SLDataType x);//尾部插入
void SeqListPopBack(SL* ps);//尾部删除
void SeqListPushFront(SL* ps, SLDataType x);//头部插入
void SeqListPopFront(SL* ps);//头部删除

int SeqListFind(SL* ps, SLDataType x);//寻找数据,找到返回x的下标,没有找到返回-1
void SeqListInsert(SL* ps, int pos, SLDataType x);//在指定下标位置插入
void SeqListErase(SL* ps, int pos);//删除pos地址的数据