//write a program which accept string from user and accept one character .Return index of last occurance of that character
//ip="Marvellous Multi OS"  M  OP=11
//ip="Marvellous Multi OS"  w op=-1
#include<stdio.h>

int LastChar(char str[],char ch)
{    
    int i=0,iCnt=0;
    while(str[i]!='\0')
    {
        if(str[i]==ch)
        {
          iCnt=i; 
        }
        i++;
    }
    if(iCnt==0)
    {
        return -1;
    }
    else
    {
        return iCnt;
    }

}
int main()
{
    char arr[20];
    char cValue='\0';
    int iRet=0;
    printf("Enter String\n");
    scanf("%[^'\n']s",arr);

    printf("Enter Character\n");
    scanf(" %c",&cValue);
    iRet=LastChar(arr,cValue);
    printf("Character location is :%d",iRet);
    return 0;
}