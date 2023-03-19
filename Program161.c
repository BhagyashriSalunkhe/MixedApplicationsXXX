//Accept N numbers from user and accept one another number as No,check whether NO is present or not
//ip=N :6
//NO=66
//elements:85 66 3 66 93 88 
//op= TRUE
//ip=N :6
//NO=12
//elements:85 11 3 15 11 111
//op=FALSE
#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL Check(int Arr[],int iLength,int iNo)
{
    int i=0,iFreq=0;
    for(i=0;i<iLength;i++)
    {
        if(Arr[i]==iNo)
        {
           iFreq++; 
        }
    }
    if(iFreq>0)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}
int main()
{
    int*p=NULL;
    int iSize=0,iValue=0;
    BOOL bRet=FALSE;
    printf("Enter number of elements\n");
    scanf("%d",&iSize);
    printf("Enter the number\n");
    scanf("%d",&iValue);

    p=(int*)malloc(sizeof(int)*iSize);
    if(p==NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }
    printf("Enter %d elements \n",iSize);
    int iCnt=0;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("Enter element:%d\n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    bRet=Check(p,iSize,iValue);
    if(bRet==TRUE)
    {
       printf("Number is present\n");
    }
    else
    {
       printf("Number is not present\n");  
    }
    free(p);
    return 0;
}