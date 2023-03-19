//Accept number of rows and number of columns from user and display below pattern
//ip= iRow=4    iCol=4
//op=  A    B   C   D   
//     a    b   c   d 
//     A    B   C   D 
//     a    b   c   d 

#include<stdio.h>
void Pattern(int iRow,int iCol)
{   int i=0,j=0,k=0;
    char sAlpha='a';
    char bAlpha='A';
    if(iRow<0)
    {
        iRow=-iRow;
    }
     if(iCol<0)
    {
        iCol=-iCol;
    }
    for(i=1;i<=iRow;i++)
    {
        bAlpha='A';
        sAlpha='a';
        for(j=1;j<=iCol;j++)
        {
            if(i%2==0)
            {
                printf("%C\t",sAlpha);
                sAlpha++;
            }
            else
            {
                printf("%C\t",bAlpha); 
                bAlpha++;
            }
        }
        printf("\n");
    }

}
int main()
{
    int iValue1=0,iValue2=0;

    printf("Enter number of rows and columns\n");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);
    return 0;
}