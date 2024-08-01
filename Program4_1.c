#include<stdio.h>

int MultFact(int iNo)
{
    int iFact = 1;

    for (int iCnt = 1; iCnt <= iNo; iCnt++)
     {
        if (iNo % iCnt == 0) 
        {
            iFact *= iCnt;
        }
    }
    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter number :");
    scanf("%d",&iValue);
    
    iRet = MultFact(iValue);
    printf("%d\n",iRet);
    return 0;
}