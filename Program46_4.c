#include <stdio.h>

int main() 
{
    FILE *file;
    char filename[100];
    long size;

    printf("Enter the filename to check size: ");
    scanf("%s", filename);

    file = fopen(filename, "r");

    if (file == NULL) 
    {
        printf("Could not open file %s\n", filename);
    } 
    else 
    {
        fseek(file, 0, SEEK_END);
        size = ftell(file);
        fclose(file);

        printf("File size is %ld bytes\n", size);
    }

    return 0;
}
