#include <stdio.h>
#include <string.h>

void Reverse(char *str) 
{
    int length = strlen(str);
    int i, j;
    char temp;

    for (i = 0, j = length - 1; i < j; i++, j--) 
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() 
{
    char arr[100]; 
    printf("Enter string: ");
    scanf("%[^\n]s", arr);

    Reverse(arr);

    printf("Reversed string: %s\n", arr);

    return 0;
}
