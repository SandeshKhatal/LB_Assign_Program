#include <stdio.h>
#include <ctype.h>

void StrCap(char *str)
{
    while(*str)
    {
        while(isspace(*str))
        {
            str++;
        }
    
        if(*str)
        {
            *str = toupper(*str);
        }
        
        while(*str && !isspace(*str))
        {
            str++;
        }
    }
}

int main()
{
    char arr[] = "marvellous infosystems by Piyush khairnar";
    
    StrCap(arr);
    
    printf("%s\n", arr);
    
    return 0;
}
