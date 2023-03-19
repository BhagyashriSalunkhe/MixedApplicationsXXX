//Accept N numbers from user and accept one another number as NO,
//return index of last occurrence of that NO
//ip=N :6
//NO=66
//elements:85 66 3 66 93 88 
//op= 3
//ip=N :6
//NO=93
//elements:85 66 3 66 93 88 
//op= 4
//ip=N :6
//NO=12
//elements:85 11 3 15 11 111
//op=  -1
#include<stdio.h>
#include<stdlib.h>
int LastOcc(int Arr[],int iLength,int iNo)
{
    int i=0,iPose=-1;
    for(i=iLength-1;i>=0;i--)
    {
        if(Arr[i]==iNo)
        {
            iPose=i;
            break;
        }
    }
   if(iPose==-1)
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
    iRet=LastOcc(p,iSize,iValue);
    if(iRet==-1)
    {
        printf("There is no such number\n");
    }
    else
    {
     printf("Last occurance of number is %d\n",iRet);
    }
    free(p);
    return 0;
}