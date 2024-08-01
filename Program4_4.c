#include<stdio.h>

int SumNonFact(int iNo)
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

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter number :");
    scanf("%d",&iValue);
    
    iRet = SumNonFact(iValue);
    printf("%d",iRet);
    return 0;
}