//write program which accept range from user and disaplay all even numbers in between range
//input-23 35
//output-24 26 28 30 32 34
//input-10 10 
//output-10
//input--10 2
//op--10 -8 -6 -4 -2 0 2
//input-90 18
//output-invalid range

#include<stdio.h>

int RangeDisplayEven(int iStart,int iEnd)
{
  if(iStart>iEnd)
  {
    printf("Invalid range\n");
  }
  int iCnt=0;
  for(iCnt=iStart;iCnt<=iEnd;iCnt++)
  {
    if(iCnt%2==0)
    {
    printf("%d\n",iCnt);
    }
  }

}
int main()
{
  int iValue1=0,iValue2=0;

  printf("Enter starting point\n");
  scanf("%d",&iValue1);

  printf("Enter ending point\n");
  scanf("%d",&iValue2);

  RangeDisplayEven(iValue1,iValue2);

  return 0;

}