#include<stdio.h>

int CountTwo(int iNo)
{
    int iCnt = 0;
    
    while(iNo != 0)
    {
        if(iNo % 10 == 2)
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }
    return iCnt;
}

int main()
{
    int iValue = 0; 
    int iRet = 0;

    printf("Enter number:");
    scanf("%d", &iValue);

    iRet = CountTwo(iValue);
    printf("%d",iRet);
    
    return 0;
}