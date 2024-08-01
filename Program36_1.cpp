#include <iostream>
using namespace std;

int WhiteSpace(const char *str) 
{
    if(*str == '\0') 
    {
        return 0;
    } 
    else if(*str == ' ') 
    {
        return 1 + WhiteSpace(str + 1);
    } 
    else 
    {
        return WhiteSpace(str + 1);
    }
}

int main() 
{
    char arr[50];

    cout << "Enter string: ";
    cin.getline(arr, 50);

    int count = WhiteSpace(arr);
    cout << "Number of white spaces: " << count << endl;

    return 0;
}
