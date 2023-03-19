//Write a program which displays all element which are prime from singly linear
//input linked list:|11|->|20|->|17|->|41|->|22|->|89|
//output:11 17  41  89
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
void PrimeElement(PPNODE Head)
{
    int NodeCnt=0,iCnt=0,i=0;
    NodeCnt=Count(*Head);
    PNODE temp=*Head;
    for(iCnt=1;iCnt<=NodeCnt;iCnt++)
    {
       
        if((temp->Data%1==0)&&(temp->Data%temp->Data==0)&&(temp->Data%2!=0)&&(temp->Data%3!=0)&&(temp->Data%5!=0))
        {
            printf("%d\t",temp->Data);
        }
        
        temp=temp->Next;
       
    }
    
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
    InsertFirst(&First,89);
    InsertFirst(&First,22);
    InsertFirst(&First,41);
    InsertFirst(&First,17);
    InsertFirst(&First,20);
    InsertFirst(&First,11);
    Display(First);
    PrimeElement(&First);
    

    return 0;
}    