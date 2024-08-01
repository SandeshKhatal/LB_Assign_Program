#include <stdio.h>

int FirstChar(char *str, char ch) 
{
    int index = 0;

    while (*str != '\0') 
    {
        if (*str == ch) 
        {
            return index;
        }
        str++;
        index++;
    }

    return -1; 
}    

int main() 
{
    char arr[100];  
    char cValue;
    int iRet = 0;

    printf("Enter string: ");
    scanf(" %[^\n]s", arr); 

    printf("Enter the character to find: ");
    scanf(" %c", &cValue);

    iRet = FirstChar(arr, cValue);

    printf("Character location is %d\n", iRet);

    return 0;
}
