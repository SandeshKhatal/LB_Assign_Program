#include <stdio.h>

void SwapRows(int Arr[][4], int iRow, int iCol) 
{
    for(int i = 0; i < iRow - 1; i += 2) 
    {
        for(int j = 0; j < iCol; j++) 
        {
            int temp = Arr[i][j];
            Arr[i][j] = Arr[i + 1][j];
            Arr[i + 1][j] = temp;
        }
    }
}

void PrintMatrix(int Arr[][4], int iRow, int iCol) 
{
    for(int i = 0; i < iRow; i++) 
    {
        for(int j = 0; j < iCol; j++) 
        {
            printf("%d ", Arr[i][j]);
        }
        printf("\n");
    }
}

int main() 
{
    int matrix[4][4] = 
    {
        {3, 2, 5, 9},
        {4, 3, 2, 2},
        {8, 4, 1, 9},
        {3, 9, 7, 5}
    };
    
    printf("Original matrix:\n");
    PrintMatrix(matrix, 4, 4);
    
    SwapRows(matrix, 4, 4);
    
    printf("Matrix after swapping rows:\n");
    PrintMatrix(matrix, 4, 4);
    
    return 0;
}
