#include <stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit15(UINT iNo) 
{
    UINT mask = 1 << 14;
    return (iNo & mask) ? TRUE : FALSE;
}

int main() 
{
    UINT number;

    printf("Enter a number: ");
    scanf("%u", &number);

    if (ChkBit15(number)) 
    {
        printf("15th bit is ON\n");
    } 
    else 
    {
        printf("15th bit is OFF\n");
    }
    return 0;
}
