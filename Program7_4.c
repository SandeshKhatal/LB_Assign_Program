#include<stdio.h>

int OddFactorial(int iNo)
{
    int iFact = 1;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    while(iNo > 0)
    {
        iFact = iFact * iNo;
        iNo -= 2;
    }
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue-1);
    printf("Odd Factorial of number is %d",iRet);
    return 0;
}