#include<stdio.h>
double RectArea(float fRadius1,float fRadius2)
{
   return fRadius1 * fRadius2;
}

int main()
{
    float fValue1 = 0.0;
    float fValue2 = 0.0;
    double dRet = 0.0;

    printf("Enter width : \n");
    scanf("%f",&fValue1);

    printf("Enter height : \n");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1,fValue2);
    printf("Area of Rectangle is %f",dRet);
    return 0;
}

