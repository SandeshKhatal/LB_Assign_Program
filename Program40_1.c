#include <stdio.h>
#define UINT unsigned int
#define BOOL int
#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo, int iPos) 
{
    UINT mask = 1 << (iPos - 1);
    return (iNo & mask) ? TRUE : FALSE;
}

int main() 
{
    UINT number;
    int position;

    printf("Enter a number and position: ");
    scanf("%u %d", &number, &position);

    BOOL result = ChkBit(number, position);
    printf(result ? "TRUE\n" : "FALSE\n");
    
    return 0;
}
