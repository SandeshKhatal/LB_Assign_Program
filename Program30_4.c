#include <stdio.h>

void StrRevTogX(char *str)
{
    char *first = str;
    char *last = str;

    while(*last != '\0')
    {
        last++;
    }
    last--;

    while(first <= last)
    {
        char temp = *first;
        *first = *last;
        *last = temp;

        if(*first >= 'a' && *first <= 'z')
        {
            *first = *first - 32;
        }
        else if(*first >= 'A' && *first <= 'Z')
        {
            *first = *first + 32;
        }

        if(*last >= 'a' && *last <= 'z')
        {
            *last = *last - 32;
        }
        else if(*last >= 'A' && *last <= 'Z')
        {
            *last = *last + 32;
        }
        first++;
        last--;
    }
}

int main()
{
    char arr[50] = "aCBdef";

    StrRevTogX(arr);

    printf("%s\n", arr);

    return 0;
}
