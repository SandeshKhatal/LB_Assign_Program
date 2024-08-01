#include<stdio.h>

void NonFact(int iNo)
{
    for (int iCnt = 1; iCnt < iNo; iCnt++) 
    {
        if (iNo % iCnt != 0) 
        {
            printf("%d ", iCnt);
        }
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number :");
    scanf("%d",&iValue);
    
    NonFact(iValue);
    return 0;
}