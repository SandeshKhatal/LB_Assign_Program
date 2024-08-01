#include <stdio.h>

int main() 
{
    FILE *file;
    char filename[100];

    printf("Enter the filename to open: ");
    scanf("%s", filename);

    file = fopen(filename, "r");

    if (file == NULL) 
    {
        printf("Could not open file %s\n", filename);
    } else {
        printf("File opened successfully.\n");
        fclose(file);
    }

    return 0;
}
