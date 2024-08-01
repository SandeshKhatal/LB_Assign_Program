#include<stdio.h>

void Pattern(int iRow, int iCol) 
{
    for (int i = iRow; i >= 1; i--) 
    {
        for (int j = 1; j <= i; j++) 
        {
            printf("*\t");
        }
        printf("\n");
    }
}

int main() 
{
    int iValue1, iValue2;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}
