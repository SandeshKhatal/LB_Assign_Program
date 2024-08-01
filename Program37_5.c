#include <stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo) 
{
    UINT firstBitMask = 1;

    UINT lastBitMask = (1 << 31);
    
    if ((iNo & firstBitMask) && (iNo & lastBitMask)) 
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
    UINT number = 0x80000001;

    if (ChkBit(number)) 
    {
        printf("1st and 32nd bits are ON.\n");
    } 
    else 
    {
        printf("1st and 32nd bits are OFF.\n");
    }
    return 0;
}
