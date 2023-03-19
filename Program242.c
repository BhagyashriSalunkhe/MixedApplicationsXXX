//accept character from user.if character is small display its corresponding capital capital character
//and it is small then display its corresponding capital .in other cases display as it is
#include<stdio.h>
void Display(char ch)
{
    if((ch<=122)&&(ch>=97))
    {
       printf("%c\n",ch-32);
    }
    else if((ch<=90)&&(ch>=65))
    {
      printf("%c\n",ch+32);  
    }
    else
    {
       printf("%c\n",ch);
    }
}
int main()
{
    char cValue='\0';
    printf("Enter the character\n");
    scanf("%c",&cValue);
    Display(cValue);
    return 0;
}