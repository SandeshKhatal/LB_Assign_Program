#include <stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL StrCmpX(char *src, char *dest)
{
    while((*src != '\0') && (*dest != '\0'))
    {
        if(*src != *dest)
        {
            return FALSE;
        }
        src++;
        dest++;
    }

    if(*src == '\0' && *dest == '\0')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    BOOL bret = TRUE;
    char arr[50] = "Marvellous Infosystems";
    char brr[30] = "Marvellous Infosystems";

    bret = StrCmpX(arr, brr);

    if (bret == TRUE)
    {
        printf("Both strings are equal\n");
    }
    else
    {
        printf("Both strings are not equal\n");
    }

    return 0;
}
