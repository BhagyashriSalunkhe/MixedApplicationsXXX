//accept  the character from user and check whether it id digit or not(0-9)
//ip=7 op=true
//ip=d op=false
#include<stdio.h>
#include<stdbool.h>
bool ChkDigit(char ch)
{
    if((ch>='0')&&(ch<='9'))
    {
        return true;
    }
    else
    {
    return false;
    }

}
int main()
{
    char cValue='\0';
    bool bRet=false;
    printf("Enter the character\n");
    scanf("%c",&cValue);
    bRet=ChkDigit(cValue);
    if(bRet==true)
    {
        printf("It is Digit\n");
    }
    else
    {
        printf("It is not Digit\n"); 
    }

    return 0;
}