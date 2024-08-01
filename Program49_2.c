#include <stdio.h>

void ReverseRows(int Arr[][4], int iRow, int iCol) 
{
    for(int i = 0; i < iRow; i++) 
    {
        int start = 0, end = iCol - 1;
        while(start < end) 
        {
            int temp = Arr[i][start];
            Arr[i][start] = Arr[i][end];
            Arr[i][end] = temp;
            start++;
            end--;
        }
    }

    printf("Matrix with reversed rows:\n");
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
    int Arr[4][4] = 
    {
        {3, 2, 5, 9},
        {4, 3, 2, 2},
        {8, 4, 1, 9},
        {3, 9, 7, 5}
    };

    int iRow = 4, iCol = 4;

    ReverseRows(Arr, iRow, iCol);

    return 0;
}
