#include <stdio.h>
#define UINT unsigned int

UINT OffBit(UINT iNo) 
{
    UINT mask = 0b11111100;
    return iNo & mask;
}

int main() 
{
    UINT number;

    printf("Enter a number: ");
    scanf("%u", &number);

    UINT result = OffBit(number);
    printf("Modified number: %u\n", result); 
    
    return 0;
}
