//Accept N numbers from user check whether that numbers contains 11 in it or not
//ip=N :6
//elements:85 66 11  80 93 88 
//op=  11 is present
//ip=N :6
//elements:85 66 3 80 93 88 
//op=  11 is absent
#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL Check(int Arr[],int iLength)
{
    int i=0,j=0;
    for(i=0;i<iLength;i++)
    {
        if(Arr[i]==11)
        {
           j++;
        }
    }
    if(j>0)
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
    int iSize=0;
    BOOL bRet=FALSE;
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
   bRet=Check(p,iSize);
   if(bRet==TRUE)
   {
     printf("11 is present");
   }
   else
   {
    printf("11 is absent");
   }
    free(p);
    return 0;
}