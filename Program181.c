//Accept number from user and display below pattern
//ip=5
//op=A  B   C   D   E
#include<stdio.h>
void Pattern(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
    int iCnt=0;
    char cAlpha='A';
    for(iCnt=1,cAlpha='A';iCnt<=iNo;iCnt++,cAlpha++)
    {
        printf("%C\t",cAlpha);
    }

}
int main()
{
    int iValue=0;

    printf("Enter number of elements\n");
    scanf("%d",&iValue);

    Pattern(iValue);
    return 0;
}