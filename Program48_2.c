#include <stdio.h>

int Frequency(int Arr[][10], int iRow, int iCol, int iNo) 
{
    int count = 0;

    for(int i = 0; i < iRow; i++) 
    {
        for(int j = 0; j < iCol; j++) 
        {
            if(Arr[i][j] == iNo) 
            {
                count++;
            }
        }
    }
    return count;
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
    int number = 9;

    printf("Frequency of %d: %d\n", number, Frequency(Arr, iRow, iCol, number));

    return 0;
}
