//write a program which accept temperature in Fahrenheit and convert it into celcius
//(1celcius=(Fahrenheit-32)*(5/9))
//ip=10
//op=-12.222 (10-32)*5/9

#include<stdio.h>
double FhtoCs(float fTemp)
{
  double dCelcius=0.0;
  dCelcius=((fTemp-32)*5)/9;
  return dCelcius;
}
int main()
{
    float fValue=0.0;
    double dRet=0.0;
    printf("Enter temperature in Fahrenheit\n");
    scanf("%f",&fValue);
    dRet=FhtoCs(fValue);
    printf("%f Fahrenheit is %lf celcius\n",fValue,dRet);
    return 0;
}