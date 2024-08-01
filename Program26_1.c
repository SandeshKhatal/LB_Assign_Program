#include <stdio.h>
#include <ctype.h> 

void strlwrx(char *str) 
{
    while (*str != '\0') 
    {
        *str = tolower(*str); 
        str++;
    }
}

int main() 
{
    char arr[100];

    printf("Enter string: ");
    scanf("%[^\n]s", arr);
    
    strlwrx(arr);

    printf("Modified string is: %s\n", arr);

    return 0;
}
