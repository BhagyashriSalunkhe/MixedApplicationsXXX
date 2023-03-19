//Accept N numbers from user and display all such elements which are multiples of 11
//ip=N :6
//elements:85 66 3  55 93 88
//op=  66 55 88
#include<stdio.h>
#include<stdlib.h>
void Display(int Arr[],int iLength)
{
    int i=0;
    printf("Numbers which are multiples of 11 are:\n");
    for(i=0;i<iLength;i++)
    {
        if(Arr[i]%11==0)
        {
         printf("%d\n",Arr[i]);
        }
    }

}
int main()
{
    int*p=NULL;
    int iSize=0;
    printf("Enter number of elements\n");
    scanf("%d",&iSize);
    p=(int*)malloc(sizeof(int)*iSize);
    if(p==NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }
    printf("Enter %d elements \n",iSize);
    int iCnt=0;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("Enter element:%d\n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    Display(p,iSize);
    
    free(p);
    return 0;
}