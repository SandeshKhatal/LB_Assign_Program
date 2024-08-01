#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    for (int i = 0; i < iRow; i++) 
    {
        for (int j = 0; j < iCol; j++) 
        {
            if (i == 0 || i == iRow - 1)            // Print numbers 1 to iCol for the first and last row
            {
                printf("%d ", j + 1);
            } 
            else 
            {
                if (j == 0)                        // Print 1 at the start of each row
                {
                    printf("1 ");
                } 
                else if (j == iCol - 1)          // Print iCol at the end of each row
                {
                    printf("%d ", iCol);
                } 
                else if (j == i)                  // Print the diagonal elements
                {
                    printf("%d ", i + 1);
                } 
                else                             // Print spaces for the remaining elements
                {
                    printf("  ");
                }
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
