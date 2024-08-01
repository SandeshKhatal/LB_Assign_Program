#include <stdio.h>
#include <string.h>

void StrRevX(char *str) 
{
    int length = strlen(str);
    int i, j;

    for (i = 0, j = length - 1; i < j; i++, j--)
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() 
{
    char arr[100];  

    printf("Enter string: ");
    scanf("%[^\n]s", arr); 

    StrRevX(arr);

    printf("Modified string is %s\n", arr);

    return 0;
}
