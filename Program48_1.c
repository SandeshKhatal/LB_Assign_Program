#include <stdio.h>

int AddDiagonal(int Arr[][10], int iRow, int iCol) 
{
    int sum = 0;
    for(int i = 0; i < iRow; i++) 
    {
        sum += Arr[i][i]; 
    }
    return sum;
}

int main() 
{
    int Arr[4][10] = 
    {
        {3, 2, 5, 9},
        {4, 3, 2, 2},
        {8, 4, 1, 9},
        {3, 9, 7, 5}
    };

    int iRow = 4, iCol = 4;

    printf("Addition of diagonal elements: %d\n", AddDiagonal(Arr, iRow, iCol));

    return 0;
}
