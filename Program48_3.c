#include <stdio.h>

int MaxDiagonal(int Arr[][10], int iRow, int iCol) 
{
    int max = Arr[0][0];

    for(int i = 0; i < iRow; i++) 
    {
        if(Arr[i][i] > max) 
        {
            max = Arr[i][i];
        }
        if(Arr[i][iCol - i - 1] > max) 
        {
            max = Arr[i][iCol - i - 1];
        }
    }
    return max;
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

    printf("Maximum element from diagonals: %d\n", MaxDiagonal(Arr, iRow, iCol));

    return 0;
}
