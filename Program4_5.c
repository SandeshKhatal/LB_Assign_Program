#include<stdio.h>

int SumOfact(int iNo) 
{
    int sum = 0;
    for (int iCnt = 1; iCnt <= iNo; iCnt++) 
    {
        if (iNo % iCnt == 0) 
        {
            sum += iCnt;
        }
    }
    return sum;
}

int SumOfNonFact(int iNo) 
{
    int sum = 0;
    for (int iCnt = 1; iCnt <= iNo; iCnt++) 
    {
        if (iNo % iCnt != 0) 
        {
            sum += iCnt;
        }
    }
    return sum;
}

int FactDiff(int iNo) 
{
    int FactorsSum = SumOfact(iNo);
    int NonFactorsSum = SumOfNonFact(iNo);
    return FactorsSum - NonFactorsSum;
}

int main() 
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = FactDiff(iValue);

    printf("%d\n", iRet);

    return 0;
}