//accept  the character from user and check whether it is alphabet or not
//ip=F op=true
//ip=& op=false
#include<stdio.h>
#include<stdbool.h>
bool ChkAlphabet(char ch)
{
    if((ch>='a')&&(ch<='z')||(ch>='A')&&(ch<='Z'))
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
    bRet=ChkAlphabet(cValue);
    if(bRet==true)
    {
        printf("It is alphabet\n");
    }
    else
    {
        printf("It is not alphabet\n"); 
    }

    return 0;
}