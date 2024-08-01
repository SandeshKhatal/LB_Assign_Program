#include <stdio.h>
#define UINT unsigned int

UINT ToggleBit(UINT iNo) 
{
    UINT firstNibble = iNo & 0xF;         
    UINT lastNibble = (iNo >> 28) & 0xF;  

    
    iNo &= ~0xF;
    iNo &= ~(0xF << 28);

    
    iNo |= (lastNibble);
    iNo |= (firstNibble << 28);

    return iNo;
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
