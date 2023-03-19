//write a program which accept number from user and display its digits in reverse order
//ip=2395
//op=5 9 3 2
//ip=9000
//op=0009
#include<stdio.h>

void DisplayDigit(int iNo)
{
    int iDigit=0;

    if(iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo!=0)
    {
        iDigit=iNo%10;
        printf("%d\n",iDigit);
        iNo= iNo/10;
    }
}
int main()
{
    int iValue=0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    DisplayDigit(iValue);

    return 0;
}