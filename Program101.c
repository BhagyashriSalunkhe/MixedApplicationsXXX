//write a program which accept radius of circle from user and calculate its area.
//consider value of PI as 3.14(Area=PI*Radius*Radius)
//ip=5.3
//op=88.2026
//ip=10.4
//op=339.6224
#include<stdio.h>
double CircleArea(float fRadius)
{   double PI=3.14;
    double dArea=0.0;
    dArea=PI*fRadius*fRadius;
    return dArea;
}
int main()
{
    float fValue=0.0;
    double dRet=0.0;
    printf("Enter Radius \n");
    scanf("%f",&fValue);
    dRet=CircleArea(fValue);
    printf("Area of circle is %lf\n",dRet);
    return 0;
}