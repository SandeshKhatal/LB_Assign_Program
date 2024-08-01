#include <stdio.h>

int main() 
{
    FILE *file;
    char filename[100];

    printf("Enter the filename to create: ");
    scanf("%s", filename);

    file = fopen(filename, "w");

    if (file == NULL) 
    {
        printf("Could not create file %s\n", filename);
    } 
    else 
    {
        printf("File created successfully.\n");
        fclose(file);
    }

    return 0;
}
