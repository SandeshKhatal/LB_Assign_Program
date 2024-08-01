#include <stdio.h>
#define UINT unsigned int
#define BOOL int
#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo, int iPos1, int iPos2) 
{
    if ((iNo & (1 << (iPos1 - 1))) || (iNo & (1 << (iPos2 - 1)))) 
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
    int pos1, pos2;

    printf("Enter a number and two positions: ");
    scanf("%u %d %d", &number, &pos1, &pos2);

    BOOL result = ChkBit(number, pos1, pos2);
    printf(result ? "TRUE\n" : "FALSE\n"); 
    
    return 0;
}
