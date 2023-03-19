//Accept N numbers from user and display summation of digits of eache number
//ip=N=6 (Elements:8225  665  3   76  953  858)
//op=17 17  3   13  17  21   
#include<stdio.h>
#include<stdlib.h>
void DigitsSum(int Arr[],int iLength)
{   int i=0,iNo=0,iDigit=0; 
   for(i=0;i<iLength;i++)
   {
    int iSum=0;
    iNo=Arr[i];
    while(iNo!=0)
    {
      iDigit=iNo%10;
      iSum=iSum+iDigit;
      iNo=iNo/10;
    }
   printf("%d\t",iSum);
   }
}
int main()
{
    int*p=NULL;
    int iSize=0;
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
    DigitsSum(p,iSize);
    free(p);
    return 0;
}