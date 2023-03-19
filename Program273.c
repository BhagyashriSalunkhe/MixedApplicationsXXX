//write a program which accept string from user and accept one character .Return index of first occurance of that character
//ip="Marvellous Multi OS"  M  OP=0
//ip="Marvellous Multi OS"  e op=4
#include<stdio.h>

void FirstChar(char Arr[],char ch)
{
    int i=0;
  while(Arr[i]!='\0')
  {
    if(Arr[i]==ch)
    {
        break;
    }
    i++;
  }
  if(Arr[i]=='\0')
  {
    printf("Index of first occurance is: %d\n",-1);
  }
  else
  {
    printf("Index of first occurance is: %d\n",i);
  }

}
int main()
{
    char arr[20];
    char cValue='\0';
   
    printf("Enter String\n");
    scanf("%[^'\n']s",arr);

    printf("Enter Character\n");
    scanf(" %c",&cValue);
    FirstChar(arr,cValue);
    
    return 0;
}