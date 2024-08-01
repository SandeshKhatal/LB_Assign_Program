#include <stdio.h>

void Pattern(int iRow, int iCol) 
{
    int num;
    for (int i = 0; i < iRow; i++) 
    {
        num = (i % 2 == 0) ? 2 : 1;       // Start with even for even rows and odd for odd rows
        for(int j = 0; j < iCol; j++) 
        {
            printf("%d\t", num);
            num += 2;
        }
        printf("\n");
    }
}

int main() 
{
    int iValue1, iValue2 = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}
