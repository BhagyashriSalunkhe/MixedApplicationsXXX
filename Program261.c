//write a prgram which accept string from user and convert it into lower case
//ip="Marvellous Multi OS"
//op=marvellous multi os

#include<stdio.h>
void strlwrx(char*str)
{
    while(*str!='\0')
    {
        if((*str>='A')&&(*str<='Z'))
        {
            *str=(*str+32);
        }
        printf("%c",*str);
        str++;
    }


}
int main()
{
    char arr[20];
    int bRet=0;
    printf("Enter String\n");
    scanf("%[^'\n']s",arr);
    strlwrx(arr);
    
    return 0;
}