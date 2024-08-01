#include <stdio.h>

void ReverseCol(int Arr[][4], int iRow, int iCol) 
{
    for(int j = 0; j < iCol; j++)
    {
        int start = 0;

        int end = iRow - 1;

        while(start < end) 
        {
            int temp = Arr[start][j];
            Arr[start][j] = Arr[end][j];
            Arr[end][j] = temp;
            start++;
            end--;
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
        {9, 7, 5, 5}
    };
    
    ReverseCol(matrix, 4, 4);
    PrintMatrix(matrix, 4, 4);

    return 0;
}
