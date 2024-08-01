#include <stdio.h>

int WordCount(char *str)
{
    int iCnt = 0;
    
    if(str == NULL)
    {
        return -1;
    }
    
    while(*str != '\0')
    {
        while(*str == ' ')
        {
            str++;
        }
        
        if(*str != '\0')
        {
            iCnt++;
        }
        
        while(*str != ' ' && *str != '\0')
        {
            str++;
        }
    }
    return iCnt;
}

int main()
{
    char arr[] = "Marvellous Multi OS Infosystems";
    
    int count = WordCount(arr);
    
    printf("Number of words: %d\n", count);
    
    return 0;
}
