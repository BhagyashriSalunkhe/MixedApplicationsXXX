//accept  the character from user and check whether it is small case or not
//ip=g op=true
//ip=D op=false
#include<stdio.h>
#include<stdbool.h>
bool ChkSmallCase(char ch)
{
    if((ch>='a')&&(ch<='z'))
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
    bRet=ChkSmallCase(cValue);
    if(bRet==true)
    {
        printf("It is small case\n");
    }
    else
    {
        printf("It is not small case\n"); 
    }

    return 0;
}