#include <stdio.h>
#define UINT unsigned int

void CommonBits(UINT iNo1, UINT iNo2) 
{
    UINT common = iNo1 & iNo2;

    printf("Common ON bit positions: ");
    for (int i = 0; common != 0; ++i) 
    {
        if (common & 1) 
        {
            printf("%d ", i + 1);
        }
        common >>= 1;
    }
    printf("\n");
}

int main() 
{
    UINT number1, number2;

    printf("Enter two numbers: ");
    scanf("%u %u", &number1, &number2);

    CommonBits(number1, number2); 
    
    return 0;
}
