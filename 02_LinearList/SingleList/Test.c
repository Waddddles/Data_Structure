#include "SList.h"
#include "SList.c"

void Test1()
{
    SLTNode* plist = NULL;
    SLPushBack(&plist,1);
    SLPushBack(&plist,2);
    SLPushBack(&plist,3);
    SLPushBack(&plist,4);
    SLPushBack(&plist,5);
    SListPrint(plist);

    SLPushFront(&plist,1);
    SLPushFront(&plist,2);
    SLPushFront(&plist,3);
    SLPushFront(&plist,4);
    SLPushFront(&plist,5);
    SListPrint(plist);

}

void Test2()
{
    SLTNode* plist = NULL;
    SLPushFront(&plist,1);
    SLPushFront(&plist,2);
    SLPushFront(&plist,3);
    SLPushFront(&plist,4);
    SLPushFront(&plist,5);
    SListPrint(plist);
}

int main()
{
    //Test1();
    Test2();
    return 0;
}