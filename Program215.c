//Accept number of rows and number of columns from user and display below pattern
//ip= iRow=4    iCol=4
//op=  1    2   3   4    
//     2    3   4   5
//     3    4   5   6
//     4    5   6   7

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
    int iNo=1;
    for(i=1;i<=iRow;i++)
    {     iNo=i;
         for(j=1;j<=iCol;j++)
        {
            
         printf("%d\t",iNo);
         iNo++;
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