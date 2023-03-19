//write a program which accept range from user and display all numbers in between that range in reverse order
//ip-10 18
//op-18 17  16 15 14 13 12 11 10 
//ip-10 10
//op-10
//ip=-10  2
//op= 2 1 0 -1 - 2 -3 -4 -5 -6 -7 -8 -9 -10
//ip-90 18
//op-invalid range

#include<stdio.h>

void RangeDisplayRev(int iStart ,int iEnd)
{
  int iCnt=0;
  if(iStart>iEnd)
  {
    printf("Invalid range\n");
    return ;
  }
  for(iCnt=iEnd;iCnt>=iStart;iCnt--)
  {
    printf("%d\n",iCnt);
  }

}
int main()
{
  int iValue1=0,iValue2=0;

  printf("Enter starting point\n");
  scanf("%d",&iValue1);

  printf("Enter ending point\n");
  scanf("%d",&iValue2);
  
  RangeDisplayRev(iValue1,iValue2);

  return 0;

}