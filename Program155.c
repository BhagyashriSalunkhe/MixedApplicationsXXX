//Accept N numbers from user and accept one another number as No,return frequency of No from it
//ip=N :6
//NO=66
//elements:85 66 3 66 93 88 
//op=  2
//ip=N :6
//NO=12
//elements:85 11 3 15 11 111
//op=  0
#include<stdio.h>
#include<stdlib.h>
int Frequency(int Arr[],int iLength,int iNo)
{
    int i=0,iFreq=0;
    for(i=0;i<iLength;i++)
    {
       if(Arr[i]==iNo)
       {
        iFreq++;
       }
    }
    return iFreq;
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
    iRet=Frequency(p,iSize,iValue);
    printf("Frequency of %d is :%d\n",iValue,iRet);
    free(p);
    return 0;
}