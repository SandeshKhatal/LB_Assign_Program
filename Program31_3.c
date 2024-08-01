#include <stdio.h>
#include <ctype.h>

void StrWrdRev(char *str)
{
    char *start = str;
    char *end = str;
    
    while(*end)
    {
        while(*end && !isspace(*end))
        {
            end++;
        }
        
        char *word_start = start;
        char *word_end = end - 1;
        
        while(word_start < word_end)
        {
            char temp = *word_start;
            *word_start = *word_end;
            *word_end = temp;
            word_start++;
            word_end--;
        }
        
        while(*end && isspace(*end))
        {
            end++;
        }
        start = end;
    }
}

int main()
{
    char arr[] = "Marvellous Multi OS";
    
    StrWrdRev(arr);
    
    printf("%s\n", arr);
    
    return 0;
}
