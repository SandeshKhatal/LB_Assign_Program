#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    for (int i = 0; i < iRow; i++) 
    {
        for (int j = 0; j < iCol; j++) 
        {
            if (i == 0 || i == iRow - 1)             // Print '*' on the first and last row
            {
                printf("* ");
            }
            else if (j == 0 || j == iCol - 1)       // Print '*' on the first and last column of each row
            {
                printf("* ");
            }
            else if (j < iCol - i - 1)             // Print '#' for positions before the diagonal starting from (1, iCol-2) to (iRow-2, 1)
            {
                printf("# ");
            }
            else if (j > iCol - i - 1)             // Print '$' for positions after the diagonal from the bottom left to the top right
            {
                printf("$ ");
            }
            else                                  // Print '*' on the diagonal from (1, iCol-2) to (iRow-2, 1)
            {
                printf("* ");
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
