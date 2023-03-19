//Accept number of rows and number of columns from user and display below pattern
//ip= iRow=4    iCol=5
//op=  2    4   6   8   10
//     1    3   5   7   9
//     2    4   6   8   10
//     1    3   5   7   9

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
   int iNo=0;
    for(i=1;i<=iRow;i++)
    {    if(i%2!=0)
           {
              iNo=2;
           }
           else
           {
            iNo=1;
           }
        for(j=1;j<=iCol;j++)
        {
            printf("%d\t",iNo);
             iNo=iNo+2;
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