#include <stdio.h>

int IsIdentityMatrix(int Arr[][4], int iRow, int iCol) 
{
    if(iRow != iCol) 
    {
        return 0;
    }

    for(int i = 0; i < iRow; i++) 
    {
        for(int j = 0; j < iCol; j++) 
        {
            if (i == j && Arr[i][j] != 1) 
            {
                return 0;
            } else if (i != j && Arr[i][j] != 0) 
            {
                return 0;
            }
        }
    }
    return 1;
}

int main() 
{
    int matrix[4][4] = 
    {
        {1, 0, 0, 0},
        {0, 1, 0, 0},
        {0, 0, 1, 0},
        {0, 0, 0, 1}
    };
    
    if(IsIdentityMatrix(matrix, 4, 4)) 
    {
        printf("The matrix is an identity matrix.\n");
    } 
    else 
    {
        printf("The matrix is not an identity matrix.\n");
    }

    return 0;
}
