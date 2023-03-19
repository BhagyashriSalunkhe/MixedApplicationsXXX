//Write a program which search last occurance of particular element from singly linear linked list.Function should return position at which element is found
//input linked list:|10|->|20|->|30|->|40|->|50|->|30|->|70|
//input element:30
//output:6
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
int SearchLastOcc(PPNODE Head,int no)
{
    int NodeCnt=0,iCnt=0,OccCnt=0;
    NodeCnt=Count(*Head);
    for(iCnt=1;iCnt<=NodeCnt;iCnt++)
    {
        
        if((*Head)->Data==no)
        {
            OccCnt=iCnt;
            
        }
       *Head=(*Head)->Next;
    }
    return OccCnt;
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
    InsertFirst(&First,70);
    InsertFirst(&First,30);
    InsertFirst(&First,50);
    InsertFirst(&First,40);
    InsertFirst(&First,30);
    InsertFirst(&First,20);
    InsertFirst(&First,10);
    Display(First);
    iRet=SearchLastOcc(&First,30);
    printf("Last Occurance is at:%d",iRet);

    return 0;
}