#include <iostream>
using namespace std;

int Small(const char *str) 
{
    if(*str == '\0') 
    {
        return 0;
    } 
    else if
    (*str >= 'a' && *str <= 'z') 
    {
        return 1 + Small(str + 1);
    } 
    else 
    {
        return Small(str + 1);
    }
}

int main() 
{
    char arr[50];

    cout << "Enter string: ";
    cin.getline(arr, 50);

    int count = Small(arr);
    cout << "Number of small characters: " << count <<endl;

    return 0;
}
