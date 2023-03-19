//Accept number of rows and number of columns from user and display below pattern
//ip= iRow=3    iCol=5
//op=  A    A   A   A   A   
//     B    B   B   B   B
//     C    C   C   C   C

#include<stdio.h>
void Pattern(int iRow,int iCol)
{
    int i=0,j=0;
     if(iRow<0)
    {
        iRow=-iRow;
    }
     if(iCol<0)
    {
        iCol=-iCol;
    }
    char bAlpha='A';
    for(i=1,bAlpha='A';i<=iRow;i++,bAlpha++)
    {
        
        for(j=1;j<=iCol;j++)
        {
          printf("%C\t",bAlpha);
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