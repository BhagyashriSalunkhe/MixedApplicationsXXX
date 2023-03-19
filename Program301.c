//Write a program which reverse each element from singly linear
//input linked list:|11|->|28|->|17|->|41|->|6|->|89|
//output:|11|->|82|->|71|->|14|->|6|->|98|
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
void Reverse(PPNODE Head)
{
    int NodeCnt=0,iCnt=0,No=0;
    NodeCnt=Count(*Head);
    PNODE temp=*Head;
    
    for(iCnt=1;iCnt<=NodeCnt;iCnt++)
    {
        
       while(temp->Data!=0)
       {
        No=temp->Data%10;
        if(No!=0)
        {
        printf("%d",No);
        }
        temp->Data=temp->Data/10;
       }
        
        printf("\t");
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
    InsertFirst(&First,89);
    InsertFirst(&First,6);
    InsertFirst(&First,41);
    InsertFirst(&First,17);
    InsertFirst(&First,28);
    InsertFirst(&First,11);
    
    Display(First);
   Reverse(&First);
    

    return 0;
}    