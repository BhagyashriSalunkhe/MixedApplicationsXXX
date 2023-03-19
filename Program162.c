//Accept N numbers from user and accept one another number as NO,
//return index of first occurrence of that NO
//ip=N :6
//NO=66
//elements:85 66 3 66 93 88 
//op= 1
//ip=N :6
//NO=12
//elements:85 11 3 15 11 111
//op=  -1
#include<stdio.h>
#include<stdlib.h>
int FirstOcc(int Arr[],int iLength,int iNo)
{
    int i=0,j=0,iPose=0;
    for(i=0;i<iLength;i++)
    {
        if(Arr[i]==iNo)
        {
            iPose=i;
            break;
        }
    }
    if(i==iLength)
    {
        return -1;
    }
    else
    {
        return iPose;
    }
  
}
int main()
{
    int*p=NULL;
    int iSize=0,iRet=0,iValue=0;
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
    iRet=FirstOcc(p,iSize,iValue);
    if(iRet==-1)
    {
        printf("There is no such number\n");
    }
    else
    {
     printf("First occurance of number is %d\n",iRet);
    }
    free(p);
    return 0;
}