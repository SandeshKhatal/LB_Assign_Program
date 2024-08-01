#include <stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit5And18(UINT iNo) 
{
    UINT mask1 = 1 << 4;  
    UINT mask2 = 1 << 17;
    
    BOOL is5thBitOn = (iNo & mask1) ? TRUE : FALSE;
    BOOL is18thBitOn = (iNo & mask2) ? TRUE : FALSE;
    
    return (is5thBitOn && is18thBitOn) ? TRUE : FALSE;
}

int main() 
{
    UINT number;

    printf("Enter a number: ");
    scanf("%u", &number);

    if (ChkBit5And18(number)) 
    {
        printf("Both 5th and 18th bits are ON\n");
    } 
    else 
    {
        printf("One or both of the 5th and 18th bits are OFF\n");
    }

    return 0;
}
