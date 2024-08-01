#include <stdio.h>
#define UINT unsigned int

int CountOne(UINT iNo) 
{
    int count = 0;
    while (iNo) 
    {
        count += iNo & 1; 
        iNo >>= 1;        
    }
    return count;
}

int main()
{
    UINT number;

    printf("Enter a number: ");
    scanf("%u", &number);

    int result = CountOne(number);
    printf("Number of ON bits: %d\n", result); 
    
    return 0;
}
