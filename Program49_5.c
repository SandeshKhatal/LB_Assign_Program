#include <stdio.h>
#include <stdbool.h>

bool ChkSparse(int Arr[][10], int iRow, int iCol) 
{
    int zeroCount = 0;

    int totalElements = iRow * iCol;

    for(int i = 0; i < iRow; i++) 
    {
        for(int j = 0; j < iCol; j++) 
        {
            if(Arr[i][j] == 0)
            {
                zeroCount++;
            }
        }
    }

    return zeroCount > totalElements / 2;
}

int main() 
{
    int matrix[4][4] = 
    {
        {1, 0, 3, 0},
        {0, 6, 0, 0},
        {0, 0, 1, 0},
        {9, 0, 0, 9}
    };

    if(ChkSparse(matrix, 4, 4)) 
    {
        printf("True\n");
    } 
    else 
    {
        printf("False\n");
    }

    return 0;
}
