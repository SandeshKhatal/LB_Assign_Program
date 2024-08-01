#include <stdio.h>
#define UINT unsigned int

UINT OnBit(UINT iNo) 
{
    UINT mask = 0b00001111;
    return iNo | mask;
}

int main() 
{
    UINT number;

    printf("Enter a number: ");
    scanf("%u", &number);

    UINT result = OnBit(number);
    printf("Modified number: %u\n", result); 
    
    return 0;
}
