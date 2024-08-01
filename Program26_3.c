#include <stdio.h>

void strtogglex(char *str) 
{
    while (*str != '\0') 
    {
        if (*str >= 'a' && *str <= 'z') 
        {
            *str = *str - 'a' + 'A';
        } 
        else if (*str >= 'A' && *str <= 'Z') 
        {
            *str = *str - 'A' + 'a'; 
        }
        str++;
    }
}

int main() 
{
    char arr[100]; 

    printf("Enter string: ");
    scanf("%[^\n]s", arr);

    strtogglex(arr);

    printf("Modified string is: %s\n", arr);

    return 0;
}
