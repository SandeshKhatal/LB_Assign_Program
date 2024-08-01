#include <stdio.h>
#include <stdlib.h>

int Frequency(int Arr[], int iLength) 
{
    int iEvenCount = 0, iOddCount = 0;

    for (int i = 0; i < iLength; i++) 
    {
        if (Arr[i] % 2 == 0) 
        {
            iEvenCount++;
        } 
        else 
        {
            iOddCount++;
        }
    }
    return iEvenCount - iOddCount;
}

int main() 
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements: ");
    scanf("%d", &iSize);

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

    iRet = Frequency(p, iSize);

    printf("Result is %d\n", iRet);

    free(p);

    return 0;
}
