#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int CountWhite(char FName[]) 
{
    FILE *file;
    char ch;
    int count = 0;

    file = fopen(FName, "r");
    if (file == NULL) 
    {
        printf("Could not open file %s\n", FName);
        return -1;
    }

    while ((ch = fgetc(file)) != EOF) 
    {
        if (isspace(ch)) 
        {
            count++;
        }
    }

    fclose(file);
    return count;
}

int main() 
{
    char FileName[30];
    int iRet = 0;

    printf("Enter file name: ");
    scanf("%s", FileName);

    iRet = CountWhite(FileName);

    if (iRet != -1) 
    {
        printf("Number of white spaces are %d\n", iRet);
    }

    return 0;
}
