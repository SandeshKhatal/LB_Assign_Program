#include <stdio.h>
#include <ctype.h> 

void StrCpyX(const char *src, char *dest)
{
    if(src == NULL || dest == NULL)
    {
        return; 
    }
    
    while(*src)
    {
        while(isspace(*src))
        {
            src++;
        }
        
        while(*src && !isspace(*src))
        {
            *dest = *src;
            src++;
            dest++;
        }
        
        if(*src && !isspace(*src))
        {
            *dest = ' ';
            dest++;
        }
    }
    *dest = '\0';
}

int main()
{
    char arr[] = "Marvel lous multi OS";
    char brr[30];
    
    StrCpyX(arr, brr);
    
    printf("%s\n", brr);
    
    return 0;
}
