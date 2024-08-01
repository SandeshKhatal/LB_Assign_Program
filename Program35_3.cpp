#include <iostream>
using namespace std;

int Strlen(const char *str) 
{
    if (*str == '\0') 
    {
        return 0;
    } 
    else 
    {
        return 1 + Strlen(str + 1);
    }
}

int main() 
{
    int iRet = 0;
    char arr[20];

    cout << "Enter string: ";
    cin >> arr;

    iRet = Strlen(arr);

    cout << iRet;

    return 0;
}
