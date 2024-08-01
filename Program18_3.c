#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    for (int i = 0; i < iRow; i++) 
    {
        for (int j = 0; j < iCol; j++) 
        {
            if (i == 0 || i == iRow - 1) 
            {
                printf("* ");
            }
            else if (j == 0 || j == iCol - 1) 
            {
                printf("* ");
            }
            else if (j == iCol - i - 1) 
            {
                printf("* ");
            }
            else 
            {
                printf("  ");
            }
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
