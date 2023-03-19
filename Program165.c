//Accept N numbers from user and return product of all odd elements
//ip=N=6
//Elements:15   66  3   70  10  88
//op=45
//ip=N=6
//Elements:44 66 72 70 10  88
//op=0
#include<stdio.h>
#include<stdlib.h>
int Product(int Arr[],int iLength)
{
    int i=0,iMult=1;
    for(i=0;i<iLength;i++)
    {
        if(Arr[i]%2!=0)
        {
            iMult=iMult*Arr[i];
        }
    }
    if(iMult==1)
     {
        return 0;
     }
     else
     {
        return iMult;
     }
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
    iRet=Product(p,iSize);
    printf("Product is %d\n",iRet);
    
    free(p);
    return 0;
}