//Write a program which displays all element which are perfect from singly linear
//input linked list:|11|->|28|->|17|->|41|->|6|->|89|
//output:6 28
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
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
bool Sum(int iNo)
{  int iCnt=0,iSum=0,iTemp=iNo;
    for(iCnt=1;iCnt<=(iNo/2);iCnt++)
    {
        if(iNo%iCnt==0)
        {
            iSum=iSum+iCnt;
        }
    }
  return (iSum==iTemp);
}
void ChkPerfect(PNODE Head)
{
 bool bRet=true;
 while(Head!=NULL)
 {
 bRet=Sum(Head->Data);
 
 if(bRet==true)
 {
    printf("%d\t",Head->Data);
 }
 Head=Head->Next;
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
    InsertFirst(&First,6);
    InsertFirst(&First,41);
    InsertFirst(&First,17);
    InsertFirst(&First,28);
    InsertFirst(&First,11);
    Display(First);
    ChkPerfect(First);
    

    return 0;
}    