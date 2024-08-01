#include <stdio.h>
#include <ctype.h>

void DisplaySchedule(char chDiv) 
{
    chDiv = toupper(chDiv);          // Convert the division to uppercase to handle case insensitivity

    switch (chDiv) {
        case 'A':
            printf("Your exam at 7 AM\n");
            break;
        case 'B':
            printf("Your exam at 8.30 AM\n");
            break;
        case 'C':
            printf("Your exam at 9.20 AM\n");
            break;
        case 'D':
            printf("Your exam at 10.30 AM\n");
            break;
        default:
            printf("Invalid division\n");
            break;
    }
}

int main() 
{
    char cValue = '\0';

    printf("Enter your division: ");
    scanf("%c", &cValue);

    DisplaySchedule(cValue);

    return 0;
}
