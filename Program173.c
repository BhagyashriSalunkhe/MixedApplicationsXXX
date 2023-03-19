//Accept N numbers from user and return difference between largest and smallest number
//ip=N=6 (Elements:85   66  3   66  93  88)
//op=93
#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
int Difference(int Arr[],int iLength)
{
    int i=0,iMin=Arr[0],iMax=Arr[0];
    for(i=0;i<iLength;i++)
    {
        if(Arr[i]>iMax)
        {
            iMax=Arr[i];
        }
        if(Arr[i]<iMin)
        {
            iMin=Arr[i];
        }
    }
   return (iMax-iMin);
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
    iRet=Difference(p,iSize);
    printf("Difference is %d\n",iRet);
    
    free(p);
    return 0;
}