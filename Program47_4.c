#include <stdio.h>
#include <stdlib.h>

int CountChar(char FName[], char Ch) 
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
        if (ch == Ch) 
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
    char cValue;

    printf("Enter file name: ");
    scanf("%s", FileName);

    printf("Enter the character: ");
    scanf(" %c", &cValue); 

    iRet = CountChar(FileName, cValue);

    if (iRet != -1) 
    {
        printf("Frequency of %c is %d\n", cValue, iRet);
    }

    return 0;
}
