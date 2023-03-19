//write a prgram which accept string from user and convert it into upper case
//ip="Marvellous Multi OS"
//op=MARVELLOUS MULTI OS

#include<stdio.h>
void struprx(char*str)
{
   while(*str!='\0')
   {
    if((*str>='a')&&(*str<='z'))
    {
        *str=*str-32;
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
    struprx(arr);
    
    return 0;
}