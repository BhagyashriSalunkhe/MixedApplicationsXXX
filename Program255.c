 //Write a program which accept string from user and display it in reverse order
//ip="MarvellouS"  op="SuollevraM"
#include<stdio.h>

void StrRev(char*str)
{
    char *Start=str;
    char*End=str;
    char iTemp='\0';
    while(*End!='\0')
    {
     End++; 
    }
    End--;
    while(Start<End)
    {
        iTemp=*Start;
        *Start=*End;
        *End=iTemp;
        Start++;
        End--;
    }

}
int main()
{
    char arr[20];
    printf("Enter String\n");
    scanf("%[^'\n']s",arr);
    StrRev(arr);
    printf("Reverse String is :%s\n",arr);
    return 0;
}