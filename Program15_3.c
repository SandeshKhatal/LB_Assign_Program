#include <stdio.h>

void Pattern(int iRow, int iCol) 
{
    for (int i = 0; i < iRow; i++) 
    {
        if (i % 2 == 0) 
        {
            char ch = 'a';
            for (int j = 0; j < iCol; j++) 
            {
                printf("%c\t", ch++);
            }
        } 
        else 
        {
            for (int j = 1; j <= iCol; j++) 
            {
                printf("%d\t", j);
            }
        }
        printf("\n");
    }
}

int main() 
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}
