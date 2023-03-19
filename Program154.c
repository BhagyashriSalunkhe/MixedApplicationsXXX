//Accept N numbers from user and return frequency of 11 from it
//ip=N :6
//elements:85 66 3 15 93 88 
//op=  0
//ip=N :6
//elements:85 11 3 15 11 111
//op=  2
#include<stdio.h>
#include<stdlib.h>
int Frequency(int Arr[],int iLength)
{
    int i=0,j=0;
    for(i=0;i<iLength;i++)
    {
        if(Arr[i]==11)
        {
           j++;
        }
    }
   return j;
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
    printf("Frequency of 11 is:%d\n",iRet);
    free(p);
    return 0;
}