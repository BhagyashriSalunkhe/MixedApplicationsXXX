//Write a program which display addition of digits of element from singly linear
//input linked list:|110|->|230|->|20|->|240|->|640|
//output:2  5   2   6   10
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
void SumOfDigits(PPNODE Head)
{
    int NodeCnt=0,iCnt=0,No=0,Sum=0;
    NodeCnt=Count(*Head);
    PNODE temp=*Head;
    
    for(iCnt=1;iCnt<=NodeCnt;iCnt++)
    {
        
       while(temp->Data!=0)
       {
        No=temp->Data%10;
        Sum=Sum+No;
        temp->Data=temp->Data/10;
       }
        
        printf("%d\t",Sum);
       temp=temp->Next;
       Sum=0;
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
    
    InsertFirst(&First,640);
    InsertFirst(&First,240);
    InsertFirst(&First,20);
    InsertFirst(&First,230);
    InsertFirst(&First,110);
    
    Display(First);
   SumOfDigits(&First);
    

    return 0;
}    