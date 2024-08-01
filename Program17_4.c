#include<stdio.h>

void Pattern(int iRow, int iCol) 
{
    for (int i = 1; i <= iRow; i++) 
    {
        for (int j = 1; j <= iCol; j++) 
        {
            if (i == 1 || i == iRow)     // First and last rows
            {
                printf("* ");
            }
            else if (j == 1 || j == iCol || j == i)  // Diagonals in middle rows
            {
                printf("* ");
            }
            
            else                  // Spaces elsewhere
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