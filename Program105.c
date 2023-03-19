//write a program which accept area in square feet and convert it into square meter(1square meter =0.0929 Square meter)
//ip=5
//op=0.464515
#include<stdio.h>
double SquareMeter(int iValue)
{
   double dSquareMeter=0.0;
   dSquareMeter=iValue*0.0929;
   return dSquareMeter;
}
int main()
{
    int iValue=0;
    double dRet=0.0;
    printf("Enter area in square feet\n");
    scanf("%d",&iValue);
    dRet=SquareMeter(iValue);
    printf("%d Square feet is %lf square meter\n",iValue,dRet);
    return 0;
}