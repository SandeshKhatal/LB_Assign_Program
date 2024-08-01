#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iLength) 
{
    if (iLength <= 0) 
    {
        return 0;
    }

    int min = Arr[0]; 
    int max = Arr[0];
    
    for (int i = 1; i < iLength; i++) 
    {
        if (Arr[i] < min) 
        {
            min = Arr[i]; 
        }
        if (Arr[i] > max) 
        {
            max = Arr[i]; 
        }
    }
    return max - min;
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

    iRet = Difference(p, iSize);

    printf("Difference between largest and smallest number is: %d\n", iRet);

    free(p);

    return 0;
}
