#include <stdio.h>

int LastChar(char *str, char ch) 
{
    int index = -1;  
    int i = 0;

    while (str[i] != '\0') 
    {
        if (str[i] == ch) 
        {
            index = i;
        }
        i++;
    }
    return index;
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

    iRet = LastChar(arr, cValue);

    printf("Character location is %d\n", iRet);

    return 0;
}
