//Accept N numbers from user and display all such numbers which contains 3 digits in it
//ip=N=6 (Elements:8225  665  3   76  953  858)
//op=665  953   858 
#include<stdio.h>
#include<stdlib.h>
void Digits(int Arr[],int iLength)
{
    int i=0;
    for(i=0;i<iLength;i++)
    {
      if((Arr[i]>=100)&&(Arr[i]<1000))
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
    Digits(p,iSize);
    free(p);
    return 0;
}