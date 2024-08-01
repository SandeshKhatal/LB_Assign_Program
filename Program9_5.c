#include<stdio.h>

void RangeDisplayRev(int iStart, int iEnd)
{
    if(iStart > iEnd)
    {
        printf("Invalid range\n");
    }

    for(int iCnt = iEnd ; iCnt >= iStart; iCnt--)
    {
        printf("%d ", iCnt);
    }
}

int main()
{
    int iValue1 = 0,iValue2 = 0;

    printf("Enter starting point:");
    scanf("%d",&iValue1);

    printf("Enter ending point:");
    scanf("%d",&iValue2);

    RangeDisplayRev(iValue1,iValue2);
    
    return 0;
}