#include <stdio.h>

void Pattern(int iNo) 
{
    for (int i = 1; i <= iNo; i++) 
    {
       printf("%d\t", i*2);
    }
   printf("\n");
}

int main() 
{
    int iValue = 0;

    printf("Enter number of elements: ");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}