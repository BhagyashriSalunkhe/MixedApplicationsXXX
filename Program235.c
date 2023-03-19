//Accept division of student from user and depends on the division  display exam timing .there are 4 divisions in school
//as A,B,C,D .exam of division A at 7 AM ,B at 8:30 AM,C at9:20 AM and D at 10:30 AM.(Application should be case insensitive)
//ip=c op=Youe exam at 9:20 AM
//ip=d op=Your eaxm at 10:30 AM
#include<stdio.h>
void DisplaySchedule(char chDiv)
{
    if((chDiv=='a')||(chDiv=='A'))
    {
        printf("Your Exam at 7 AM");
    }
    else if((chDiv=='b')||(chDiv=='B'))
    {
        printf("Your Exam at 8:30 AM");
    }
    else if((chDiv=='c')||(chDiv=='C'))
    {
        printf("Your Exam at 9:20 AM");
    }
    else if((chDiv=='d')||(chDiv=='D'))
    {
        printf("Your Exam at 10:30 AM");
    }
    else
    {
        printf("There is no such Division\n");
    }

}
int main()
{
    char cValue='\0';
    printf("Enter the character\n");
    scanf("%c",&cValue);
    DisplaySchedule(cValue);
    return 0;
}