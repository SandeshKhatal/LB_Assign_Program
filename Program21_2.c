#include <stdio.h>
#include <stdlib.h>

int FirstOcc(int Arr[], int iLength, int iNo) 
{
    for (int i = 0; i < iLength; i++) 
    {
        if (Arr[i] == iNo) 
        {
            return i;
        }
    }
    return -1;  
}

int main() 
{
    int iSize = 0, iCnt = 0, iValue = 0, iRet = 0;
    int *p = NULL;

    printf("Enter number of elements: ");
    scanf("%d", &iSize);

    printf("Enter the number: ");
    scanf("%d", &iValue);

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

    iRet = FirstOcc(p, iSize, iValue);
    if (iRet == -1) 
    {
        printf("There is no such number\n");
    } 
    else 
    {
        printf("First occurrence of number is at index %d\n", iRet);
    }

    free(p);

    return 0;
}
