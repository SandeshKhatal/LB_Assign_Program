#include <stdio.h>
#define UINT unsigned int

UINT ToggleBit(UINT iNo) 
{
    UINT mask = (1 << 6) | (1 << 9);
    return iNo ^ mask;
}

int main() 
{
    UINT number;

    printf("Enter a number: ");
    scanf("%u", &number);

    UINT result = ToggleBit(number);
    printf("Modified number: %u\n", result); 
    
    return 0;
}
