#include <stdio.h>

void Pattern(char *str)
{
    if(str == NULL || *str == '\0')
    {
        return;
    }
    
    int len = 0;
    while(str[len] != '\0')
    {
        len++;
    }
    
    for(int i = len; i > 0; i--)
    {
        for
        (int j = 0; j < len; j++)
        {
            printf("%c ", str[j]);
        }
        printf("\n");
    }
}

int main()
{
    char arr[] = "Marvellous";
    
    Pattern(arr);
    
    return 0;
}
