#include <stdio.h>
#include <string.h>

void StrCpyRev(char *src, char *dest)
{
    int len = strlen(src);
    
    for(int i = len - 1; i >= 0; i--)
    {
        *dest = src[i];
        dest++;
    }
    *dest = '\0';
}

int main()
{
    char arr[30] = "Marvellous Python";
    char brr[30];

    StrCpyRev(arr, brr);

    printf("%s", brr);

    return 0;
}
