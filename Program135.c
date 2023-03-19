//write a program which accept number from user and return difference between summation of even digits and summation of odd digits
//ip=2395
//op=-15

#include<stdio.h>

int CountDiff(int iNo)
{
    int iDigit=0;
    int ieSum=0;
    int ioSum=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo!=0)
    {
        iDigit=iNo%10;
        if((iDigit%2)==0)
        {
            ieSum=ieSum+iDigit;
        }
        else
        {
            ioSum=ioSum+iDigit;
        }
        iNo=iNo/10;
    }
   return (ieSum-ioSum);
}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet=CountDiff(iValue);

    printf("%d",iRet);
    return 0;
}