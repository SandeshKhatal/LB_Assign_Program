#include <stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo) 
{
    UINT mask = (1 << 6) | (1 << 7) | (1 << 8);
    
    if ((iNo & mask) == mask) 
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
    UINT number = 0x000001C0;

    if (ChkBit(number)) 
    {
        printf("7th, 8th, and 9th bits are ON.\n");
    } 
    else 
    {
        printf("7th, 8th, and 9th bits are OFF.\n");
    }
    return 0;
}
