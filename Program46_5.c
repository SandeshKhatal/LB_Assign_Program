#include <stdio.h>

int main() 
{
    FILE *file;
    char filename[100];
    char stringToAdd[100];

    printf("Enter the filename to append to: ");
    scanf("%s", filename);

    printf("Enter the string to append: ");
    scanf(" %[^\n]s", stringToAdd);

    file = fopen(filename, "a");

    if (file == NULL) 
    {
        printf("Could not open file %s\n", filename);
    } 
    else 
    {
        fprintf(file, "%s", stringToAdd);
        fclose(file);
        printf("String appended successfully.\n");
    }

    return 0;
}
