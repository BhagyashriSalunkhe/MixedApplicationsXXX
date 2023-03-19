//Accept N numbers from user and return difference between frequency of even number and odd numbers
//ip=N :7
//elements:85 66 3  80 93 88 90
//op=  1(4-3)
#include<stdio.h>
#include<stdlib.h>
int Frequency(int Arr[],int iLength)
{
    int i=0,iEvenFreq=0,iOddFreq=0;
    for(i=0;i<iLength;i++)
    {
        if(Arr[i]%2==0)
        {
          iEvenFreq++;
        }
        else
        {
            iOddFreq++;
        }
    }
   return (iEvenFreq-iOddFreq);
}
int main()
{
    int*p=NULL;
    int iSize=0,iRet=0;
    printf("Enter number of elements\n");
    scanf("%d",&iSize);
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
    iRet=Frequency(p,iSize);
    printf("Difference between even count and odd count is:%d\n",iRet);
    free(p);
    return 0;
}