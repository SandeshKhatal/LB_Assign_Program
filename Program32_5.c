#include <stdio.h>
#include <string.h>

void Pattern(char *str) 
{
    int len = strlen(str);

    for(int i = 0; i < len; i++) 
    {
        for(int j = 0; j <= i; j++) 
        {
            printf("%c ", str[j]);
        }
        printf("\n");
    }
}

int main() 
{
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    Pattern(str);
    
    return 0;
}
