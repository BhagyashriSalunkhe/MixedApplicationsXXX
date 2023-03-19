//Accept number of rows and number of columns from user and display below pattern
//ip= iRow=5    iCol=5
//op=  $    *   *   *   *    
//     *    $   *   *   *   
//     *    *   $   *   *
//     *    *   *   $   *
//     *    *   *   *   $

#include<stdio.h>
void Pattern(int iRow,int iCol)
{
    if(iRow!=iCol)
    {   
        printf("Rows and columns should be same\n");
        return;
    }
    int i=0,j=0;
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
         for(j=1;j<=iCol;j++)
        {
            if(i==j)
            {
               printf("$\t");
            }
            else
            {
                printf("*\t");
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