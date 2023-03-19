//Accept number of rows and number of columns from user and display below pattern
//ip= iRow=5    iCol=5
//op=  a    b   c   d   e
//     1    2   3   4   5
//     a    b   c   d   e
//     1    2   3   4   5

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
    char ch='a';
    for(i=1;i<=iRow;i++)
    {
         for(j=1,ch='a';j<=iCol;j++)
        {
          if(i%2==0)
          {
            printf("%d\t",j);
          }
          else
          {
            printf("%c\t",ch);
            ch++;
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