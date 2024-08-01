#include <stdio.h>

int LargestWordLength(char *str)
{
    int iMax = 0;
    int currentLength = 0;
    
    if(str == NULL)
    {
        return -1;
    }
    
    while(*str != '\0')
    {
        while (*str == ' ')
        {
            str++;
        }
        
        while(*str != ' ' && *str != '\0')
        {
            currentLength++;
            str++;
        }
        
        if (currentLength > iMax)
        {
            iMax = currentLength;
        }
        
        currentLength = 0;
    }
    return iMax;
}

int main()
{
    char arr[] = "Marvellous Multi OS Infosystems";
    
    int maxLength = LargestWordLength(arr);
    
    printf("Length of largest word: %d\n", maxLength);
    
    return 0;
}
