//Write a program which returns addition of all element which are even from singly linear
//input linked list:|11|->|20|->|32|->|41|
//output:52
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
int AdditionOfEven(PPNODE Head)
{
    int NodeCnt=0,iCnt=0,iSum=0;
    NodeCnt=Count(*Head);
    for(iCnt=1;iCnt<=NodeCnt;iCnt++)
    {
        if(((*Head)->Data)%2==0)
        {
        iSum=iSum+((*Head)->Data);
        }
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
    InsertFirst(&First,41);
    InsertFirst(&First,32);
    InsertFirst(&First,20);
    InsertFirst(&First,11);
    Display(First);
    iRet=AdditionOfEven(&First);
    printf("Addition of even numbers is:%d",iRet);

    return 0;
}