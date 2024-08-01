#include <stdio.h>

void StrNCatX(char *src, char *dest, int iCnt)
{
    while(*src != '\0')
    {
        src++;
    }

    while((*dest != '\0') && (iCnt != 0))
    {
        *src = *dest;
        src++;
        dest++;
        iCnt--;
    }
    *src = '\0';
}

int main()
{
    char arr[50] = "Marvellous Infosystems";
    char brr[50] = "Logic Building";
    int iCnt;

    printf("Enter the number of characters to concatenate: ");
    scanf("%d", &iCnt);

    StrNCatX(arr, brr, iCnt);

    printf("%s\n", arr); 

    return 0;
}
