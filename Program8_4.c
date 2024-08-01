#include<stdio.h>
double FhtoCs(float fTemp)
{
   return (fTemp-32) * 5/9;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Temperature in Fehreneit : \n");
    scanf("%f",&fValue);

    dRet =FhtoCs(fValue);
    printf("Temperature in Celcius : %f",dRet);
    return 0;
}

