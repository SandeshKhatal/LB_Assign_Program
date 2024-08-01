#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

bool StrPalindrome(char *str)
{
    char *left = str;
    char *right = str;

    while(*right != '\0')
    {
        right++;
    }
    right--;

    while(left < right)
    {
        if (tolower(*left) != tolower(*right))
        {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main()
{
    bool bret;
    char arr[20] = "1abccBA1";

    bret = StrPalindrome(arr);

    if(bret == true)
    {
        printf("String is palindrome\n");
    }
    else
    {
        printf("String is not palindrome\n");
    }
    return 0;
}
