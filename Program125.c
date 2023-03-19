//write a program which accepts number from user and count frequency of such a digit which are less than 6
//ip=2395
//op=3

#include<stdio.h>

int Count(int iNo)
{
     int iCnt=0;
    int iDigit=0;
    while(iNo!=0)
    {
        iDigit=iNo%10;
        if(iDigit<6)
        {
            iCnt++;
        }
        iNo=iNo/10;
    }
   return iCnt;

}
int main()
{   
    int iValue=0;
    int iRet=0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet=Count(iValue);

    printf("%d",iRet);
    return 0;
}