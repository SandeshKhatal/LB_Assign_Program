#include <stdio.h>
#define UINT unsigned int

UINT ToggleBitRange(UINT iNo, int iStart, int iEnd) 
{
    UINT mask = 0;
    for (int i = iStart - 1; i <= iEnd - 1; ++i)
    {
        mask |= (1 << i);
    }
    return iNo ^ mask;
}

int main() 
{
    UINT number;
    int start, end;

    printf("Enter a number and range of positions: ");
    scanf("%u %d %d", &number, &start, &end);

    UINT result = ToggleBitRange(number, start, end);
    printf("Modified number: %u\n", result); 
    
    return 0;
}
