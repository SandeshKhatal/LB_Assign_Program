#include <stdio.h>

void Transpose(int Arr[][4], int iRow, int iCol) 
{
    int Trans[iCol][iRow];
    
    for(int i = 0; i < iRow; i++) 
    {
        for (int j = 0; j < iCol; j++) 
        {
            Trans[j][i] = Arr[i][j];
        }
    }

    printf("Transpose of the matrix:\n");
    for(int i = 0; i < iCol; i++) 
    {
        for(int j = 0; j < iRow; j++) 
        {
            printf("%d ", Trans[i][j]);
        }
        printf("\n");
    }
}

int main() 
{
    int Arr[4][4] = 
    {
        {3, 2, 5, 9},
        {4, 3, 2, 2},
        {8, 4, 1, 9},
        {3, 9, 7, 5}
    };

    int iRow = 4, iCol = 4;

    Transpose(Arr, iRow, iCol);

    return 0;
}
