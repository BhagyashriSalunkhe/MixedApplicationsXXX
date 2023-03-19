//write a program which accept string from user and return diffrence between frequency of small characters and frequency of capital characters

//ip="MarvellouS" op=6(8-2)
#include<stdio.h>
int CountDifference(char*str)
{
    int i=0,j=0,iDiff=0;
    while(*str!='\0')
    {
      if((*str>='A')&&(*str<='Z'))
      {
        i++;
      }
      if((*str>='a')&&(*str<='z'))
      {
        j++;
      }
      str++;
    }
    iDiff=i-j;
    if(iDiff<0)
    {
        iDiff=-iDiff;
    }
   return  iDiff;
}
int main()
{
    char arr[20];
    int bRet=0;
    printf("Enter String\n");
    scanf("%[^'\n']s",arr);
    bRet=CountDifference(arr);
    printf("Difference is:%d\n",bRet);
    return 0;
}