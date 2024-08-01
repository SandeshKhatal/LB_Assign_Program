#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[], int iLength) 
{
    int min = Arr[0];
    
    for (int i = 1; i < iLength; i++) 
    {
        if (Arr[i] < min) 
        {
            min = Arr[i];
        }
    }
    
    return min;
}

int main() 
{
    int iSize = 0, iRet = 0;
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

    for (int i = 0; i < iSize; i++) 
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &p[i]);
    }

    iRet = Minimum(p, iSize);

    printf("Smallest number is: %d\n", iRet);

    free(p);

    return 0;
}
