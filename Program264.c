//write a program which accept string from user and display only digits from that string
//ip="marve89llous121"
//op=89121
//ip=Demo
//op=


#include<stdio.h>
void DisplayDigit(char*str)
{
    while(*str!='\0')
    {
      if((*str>='0') && (*str<='9'))
      {
        printf("%c",*str);
      }
      str++;
    }


}
int main()
{
    char arr[20];
    int bRet=0;
    printf("Enter String\n");
    scanf("%[^'\n']s",arr);
    DisplayDigit(arr);
    
    return 0;
}