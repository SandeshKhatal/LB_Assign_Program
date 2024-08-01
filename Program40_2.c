#include <stdio.h>
#define UINT unsigned int

UINT OffBit(UINT iNo, int iPos) 
{
    UINT mask = ~(1 << (iPos - 1));
    return iNo & mask;
}

int main() 
{
    UINT number;
    int position;

    printf("Enter a number and position: ");
    scanf("%u %d", &number, &position);

    UINT result = OffBit(number, position);
    printf("Modified number: %u\n", result); 
    
    return 0;
}
