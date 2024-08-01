#include <stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL StrNCmpX(char *src, char *dest, int iCnt)
{
    while(iCnt > 0 && *src != '\0' && *dest != '\0')
    {
        if(*src != *dest)
        {
            return FALSE;
        }
        src++;
        dest++;
        iCnt--;
    }

    if(iCnt == 0)
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
    char brr[50] = "Marvellous Logic Building";
    int iCnt = 10;

    bret = StrNCmpX(arr, brr, iCnt);

    if(bret == TRUE)
    {
        printf("First %d characters of both strings are equal\n", iCnt);
    }
    else
    {
        printf("First %d characters of both strings are not equal\n", iCnt);
    }

    return 0;
}
