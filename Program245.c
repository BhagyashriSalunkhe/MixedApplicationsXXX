//Accept character from user and display its ASCII value in decimal,octal,hexadecimal format
//ip=A
//op= decimal-65,octal 0101,hexadecimal-0X41
#include<stdio.h>
void Display(char ch)
{
    printf("Decimal:%d\n",ch);
    printf("Octal:%o\n",ch);
    printf("Hexadecimal:%x\n",ch);

}
int main()
{
    char cValue='\0';
   
    printf("Enter the character\n");
    scanf("%c",&cValue);
    Display(cValue);
    
    return 0;
}
