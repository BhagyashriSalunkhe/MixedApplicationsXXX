//write a program which accept distance in kilometers and convert it into meters(1km=1000m)
//ip=5
//op=5000
#include<stdio.h>
int KMtoMeter(int iNo)
{
  int iConvert=0;
  iConvert=iNo*1000;
  return iConvert;
}
int main()
{
    int iValue=0,iRet=0;
    printf("Enter distance \n");
    scanf("%d",&iValue);
    iRet=KMtoMeter(iValue);
    printf("%d kilometer is %d meter",iValue,iRet);
    return 0;
}