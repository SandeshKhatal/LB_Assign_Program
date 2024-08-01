#include <stdio.h>

int CountWhite(char *str) 
{
    int count = 0;

    while (*str != '\0') 
    {
        if (*str == ' ') 
        {
            count++;
        }
        str++;
    }

    return count;
}

int main() 
{
    char arr[100];  
    int iRet = 0;

    printf("Enter string: ");
    scanf("%[^\n]s", arr); 
    
    iRet = CountWhite(arr);

    printf("Number of white spaces: %d\n", iRet);

    return 0;
}
