#include <stdio.h>
#include <stdlib.h>

int Product(int Arr[], int iLength) 
{
    int product = 1;
    for (int i = 0; i < iLength; i++) 
    {
        if (Arr[i] % 2 != 0) 
        { 
            product *= Arr[i];
        }
    }
    return product;
}

int main() 
{
    int iSize = 0, iCnt = 0, iRet = 0;
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

    iRet = Product(p, iSize);

    printf("Product is %d\n", iRet);

    free(p);

    return 0;
}
