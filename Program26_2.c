#include <stdio.h>
#include <ctype.h>

void struprx(char *str) 
{
    while (*str != '\0') 
    {
        *str = toupper(*str);
        str++;
    }
}

int main() 
{
    char arr[100];

    printf("Enter string: ");
    scanf("%[^\n]s", arr);

    struprx(arr);

    printf("Modified string is: %s\n", arr);

    return 0;
}
