//write a program which accept string from user and count number of white spaces
//ip="Marvellous"  op=0
//ip="Marvellous Infosystems"  op=1
#include<stdio.h>

int CountWhite(char*str)
{
    int iWhite=0;
    
    while(*str!='\0')
    {
        if(*str==' ')
        {
            iWhite++;
        }
       
        str++;
    }
   return iWhite;
}
int main()
{
    
    char arr[20];
    int iRet=0;
    printf("Enter String\n");
    scanf("%[^'\n']s",arr);
    iRet=CountWhite(arr);
    printf("%d",iRet);
    return 0;
}