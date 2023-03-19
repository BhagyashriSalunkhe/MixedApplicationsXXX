//Write a program which returns second maximum of all element from singly linear
//input linked list:|110|->|230|->|320|->|240|
//output:240
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
int SecondLargestElement(PPNODE Head)
{
    int NodeCnt=0,iCnt=0;
    NodeCnt=Count(*Head);
    PNODE temp=*Head;
    int Large=temp->Data,SecondLarge=temp->Data;
    for(iCnt=1;iCnt<=NodeCnt;iCnt++)
    {
        
        if(((temp->Data)>Large))
        {
            Large=temp->Data;
        }
        else if((temp->Data)>SecondLarge)
        {
           SecondLarge=temp->Data;   
        }
        else{}
        
        
       temp=temp->Next;
    }
    return SecondLarge;
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
    InsertFirst(&First,240);
    InsertFirst(&First,320);
    InsertFirst(&First,230);
    InsertFirst(&First,110);
    
    Display(First);
    iRet=SecondLargestElement(&First);
    printf("Second Largest Element is:%d",iRet);

    return 0;
}    