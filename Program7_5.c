#include<stdio.h>

int EvenFactorial(int iNo) 
{
    int iFact = 1;
    if (iNo < 0) 
    {
        iNo = -iNo;
    }
    while (iNo > 0) 
    {
        iFact *= iNo;
        iNo -= 2;
    }
    return iFact;
}

int OddFactorial(int iNo) {
    int iFact = 1;
    if (iNo < 0) 
    {
        iNo = -iNo;
    }
    while (iNo > 0) 
    {
        iFact *= iNo;
        iNo -= 2;
    }
    return iFact;
}

int FactorialDiff(int iNo) 
{
    return EvenFactorial(iNo) - OddFactorial(iNo);
}

int main() 
{
    int iValue = 0; 
    int iRet = 0;
    printf("Enter number: ");
    scanf("%d", &iValue);
    iRet = FactorialDiff(iValue);
    printf("Factorial difference is %d\n", iRet);
    return 0;
}
