//Write a program which returns addition of all element from singly linear
//input linked list:|10|->|20|->|30|->|40|
//output:100
#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

struct node
{
    int Data;
    struct node*Next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE Head,int no)
{
    PNODE newn=NULL;

    newn=(PNODE)malloc(sizeof(NODE));

    newn->Next=NULL;
    newn->Data=no;
    if(*Head==NULL)
    {
        *Head=newn;
    }
    else
    {
        newn->Next=*Head;
        *Head=newn;
    }
}
int Count(PNODE Head)
{
    int iCnt=0;
    while(Head!=NULL)
    {
        iCnt++;
        Head=Head->Next;
    }
    return iCnt;
}
int Addition(PPNODE Head)
{
    int NodeCnt=0,iCnt=0,iSum=0;
    NodeCnt=Count(*Head);
    for(iCnt=1;iCnt<=NodeCnt;iCnt++)
    {
        iSum=iSum+((*Head)->Data);
       *Head=(*Head)->Next;
    }
    return iSum;
}
void Display(PNODE Head)
{
    while(Head!=NULL)
    {
        printf("|%d|->",Head->Data);
        Head=Head->Next;
    }
    printf("NULL\n");
}
int main()
{
    PNODE First=NULL;
    int iRet=0;
    InsertFirst(&First,40);
    InsertFirst(&First,30);
    InsertFirst(&First,20);
    InsertFirst(&First,10);
    Display(First);
    iRet=Addition(&First);
    printf("Addition is:%d",iRet);

    return 0;
}