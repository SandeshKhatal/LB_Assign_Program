#include<stdio.h>

int Factorial(int iNo)
{
    int iFact = 1;
    if(iNo < 0)
    {
        iNo = - iNo;
    }
    
    while(iNo > 1)
    {
        iFact = iFact * iNo;
        iNo--;
    }
    return iFact;
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet =  Factorial(iValue);
    printf("Factorial of number is %d",iRet);
    return 0;
}