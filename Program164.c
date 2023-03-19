//Accept N numbers from user and accept Range,Display all elements from that range which are even
//ip=N :6
//Start=60    End=90
//Elements:85 66 3 76 93 88 
//op=66 76 88
//ip=N :6
//Start=30    End=50
//Elements:85 66 3 76 93 88 
//op=0
#include<stdio.h>
#include<stdlib.h>
void Range(int Arr[],int iLength,int iStart,int iEnd)
{
  int i=0;
 
  for(i=0;i<iLength;i++)
  {
    if((Arr[i]>=iStart)&&(Arr[i]<=iEnd)&&(Arr[i]%2==0))
    {
    
       printf("%d\n",Arr[i]);
    }
  }
   
}
int main()
{
    int*p=NULL;
    int iSize=0,iRet=0,iValue1=0,iValue2=0;
    printf("Enter number of elements\n");
    scanf("%d",&iSize);
    printf("Enter the starting point\n");
    scanf("%d",&iValue1);
     printf("Enter the ending point\n");
    scanf("%d",&iValue2);

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
    Range(p,iSize,iValue1,iValue2);
    free(p);
    return 0;
}
