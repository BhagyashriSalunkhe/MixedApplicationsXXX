//write a prgram which accept string from user and convert it into toggle case
//ip="Marvellous Multi OS"
//op=mARVELLOUS mULTI os

#include<stdio.h>
void strtogglex(char*str)
{
    while(*str!='\0')
    {
    if((*str>='a')&&(*str<='z'))
    {
        *str=*str-32;
    }
   else if((*str>='A')&&(*str<='Z'))
    {
        *str=*str+32;
    }
   printf("%c",*str);
   str++;
    }
}
int main()
{
    char arr[20];
    
    printf("Enter String\n");
    scanf("%[^'\n']s",arr);
    strtogglex(arr);
    
    return 0;
}