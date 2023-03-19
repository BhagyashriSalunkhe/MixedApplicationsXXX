//write a program which accept range from user and return addition of all even  numbers in between that range(range should contain positive numbers only)
//I/P- 23 30
//O/P-108
//I/P- -10 2
//O/P-invalid range
//I/P- 90 18
//O/P-invalid range

#include<stdio.h>

int RangeSumEven(int iStart ,int iEnd)
{
  int iSum=0;
  int iCnt=0;
  if(iStart>iEnd)
  {
    printf("Invalid Range\n");
    return 0;
  }
  if((iStart<0)||(iEnd<0))
  {
    printf("Invalid Range\n");
    return 0;
  }
  for(iCnt=iStart;iCnt<=iEnd;iCnt++)
  {
    if(iCnt%2==0)
    {
    iSum=iSum+iCnt;
    }
  }
return iSum;
}
int main()
{
  int iValue1=0,iValue2=0,iRet=0;

  printf("Enter starting point\n");
  scanf("%d",&iValue1);

  printf("Enter ending point\n");
  scanf("%d",&iValue2);
  iRet=RangeSumEven(iValue1,iValue2);

  printf("Addition is %d",iRet);
  return 0;

}