#include <stdio.h>

int main() 
{
    FILE *file;
    char filename[100];
    char ch;

    printf("Enter the filename to read: ");
    scanf("%s", filename);

    file = fopen(filename, "r");

    if (file == NULL) 
    {
        printf("Could not open file %s\n", filename);
    } 
    else 
    {
        printf("Displaying all data of file %s:\n", filename);
        while ((ch = fgetc(file)) != EOF) 
        {
            putchar(ch);
        }
        fclose(file);
    }

    return 0;
}
