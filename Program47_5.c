#include <stdio.h>
#include <stdlib.h>

void DisplayN(char FName[], int iSize) 
{
    FILE *file;
    char ch;
    int count = 0;

    file = fopen(FName, "r");
    if (file == NULL) 
    {
        printf("Could not open file %s\n", FName);
        return;
    }

    printf("First %d characters from %s are:\n", iSize, FName);
    while ((ch = fgetc(file)) != EOF && count < iSize) 
    {
        putchar(ch);
        count++;
    }

    fclose(file);
}

int main() 
{
    char FileName[30];
    int iValue = 0;

    printf("Enter file name: ");
    scanf("%s", FileName);

    printf("Enter the number of characters: ");
    scanf("%d", &iValue);

    DisplayN(FileName, iValue);

    return 0;
}
