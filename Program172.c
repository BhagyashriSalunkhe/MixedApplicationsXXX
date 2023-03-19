//Accept N numbers from user and return the smallest number
//ip=N=6 (Elements:85   66  3   66  93  88)
//op=3
#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
int Minimum(int Arr[],int iLength)
{
  int i=0,iMin=Arr[0];
  for(i=0;i<iLength;i++)
  {
    if(Arr[i]<iMin)
    {
        iMin=Arr[i];
    }
  }
  return iMin;
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
    iRet=Minimum(p,iSize);
    printf("Smallest Number is %d\n",iRet);
    
    free(p);
    return 0;
}