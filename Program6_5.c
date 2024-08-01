#include<stdio.h>

void RevTable(int iNo)
{
    int iCnt = 0;
    
    for(iCnt = 10; iCnt >= 1; iCnt--)
    {
            printf("%d\t", iNo * iCnt);
    }    
}
int main()
{
    int iValue = 0;
    printf("Enter number : \n");
    scanf("%d",&iValue);

    RevTable(iValue);
    return 0;
}

