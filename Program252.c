//write a program which accept string from user and count number of small characters
//ip="Marvellous" op=9
#include<stdio.h>
int CountSmall(char*str)
{
    int iCnt=0;
    while(*str!='\0')
    {
        if((*str>='a')&&(*str<='z'))
        {
            iCnt++;
        }
        str++;
    }
   return iCnt;
}
int main()
{
    char arr[20];
    int bRet=0;
    printf("Enter String\n");
    scanf("%[^'\n']s",arr);
    bRet=CountSmall(arr);
    printf("Count of small character is:%d\n",bRet);
    return 0;
}