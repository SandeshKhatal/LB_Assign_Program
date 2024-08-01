#include <stdio.h>
#define UINT unsigned int

#define BOOL int
#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo) 
{
    if ((iNo & (1 << 8)) || (iNo & (1 << 11))) 
    {
        return TRUE;
    } 
    else 
    {
        return FALSE;
    }
}

int main() 
{
    UINT number;

    printf("Enter a number: ");
    scanf("%u", &number);

    BOOL result = ChkBit(number);
    printf(result ? "TRUE\n" : "FALSE\n");
    return 0;
}
