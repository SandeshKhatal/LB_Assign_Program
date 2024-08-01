#include <stdio.h>
#include <stdlib.h>

void Range(int Arr[], int iLength, int iStart, int iEnd) 
{
    printf("Elements within the range %d to %d are:\n", iStart, iEnd);

    for (int i = 0; i < iLength; i++) 
    {
        if (Arr[i] >= iStart && Arr[i] <= iEnd) 
        {
            printf("%d ", Arr[i]);
        }
    }
    printf("\n");
}

int main()
{
    int iSize = 0, iCnt = 0, iValue1 = 0, iValue2 = 0;
    int *p = NULL;

    printf("Enter number of elements: ");
    scanf("%d", &iSize);

    printf("Enter the starting point of the range: ");
    scanf("%d", &iValue1);

    printf("Enter the ending point of the range: ");
    scanf("%d", &iValue2);

    p = (int*)malloc(iSize * sizeof(int));

    if (p == NULL) 
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elements:\n", iSize);

    for (iCnt = 0; iCnt < iSize; iCnt++) 
    {
        printf("Enter element %d: ", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    Range(p, iSize, iValue1, iValue2);

    free(p);

    return 0;
}
