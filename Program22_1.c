#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[], int iLength) 
{
    int max = Arr[0];
    
    for (int i = 1; i < iLength; i++) 
    {
        if (Arr[i] > max) 
        {
            max = Arr[i]; 
        }
    }
    
    return max;
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

    iRet = Maximum(p, iSize);

    printf("Largest number is: %d\n", iRet);

    free(p);

    return 0;
}
