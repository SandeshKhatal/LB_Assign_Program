#include <stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkMultipleBits(UINT iNo) 
{
    UINT mask1 = 1 << 6;  
    UINT mask2 = 1 << 14; 
    UINT mask3 = 1 << 20; 
    UINT mask4 = 1 << 27;
    
    BOOL is7thBitOn = (iNo & mask1) ? TRUE : FALSE;
    BOOL is15thBitOn = (iNo & mask2) ? TRUE : FALSE;
    BOOL is21stBitOn = (iNo & mask3) ? TRUE : FALSE;
    BOOL is28thBitOn = (iNo & mask4) ? TRUE : FALSE;
    
    return (is7thBitOn && is15thBitOn && is21stBitOn && is28thBitOn) ? TRUE : FALSE;
}

int main() 
{
    UINT number;
    printf("Enter a number: ");
    scanf("%u", &number);

    if (ChkMultipleBits(number)) 
    {
        printf("7th, 15th, 21st, and 28th bits are ON\n");
    } 
    else 
    {
        printf("One or more of the 7th, 15th, 21st, and 28th bits are OFF\n");
    }
    return 0;
}
