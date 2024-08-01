#include<stdio.h>
double SquareMeter(int iNo)
{
   return iNo * 0.0929;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;
    printf("Enter area in square feet :\n");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);
    printf("Area in square feet : %f\n",dRet);
    return 0;
}
