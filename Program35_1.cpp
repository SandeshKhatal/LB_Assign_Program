#include <iostream>
using namespace std;

void Display(int iNo) 
{
    if(iNo > 0) 
    {
        cout << iNo;
        if (iNo > 1) 
        {
            cout << " * ";
        }
        Display(iNo - 1);
    }
}

int main() 
{
    int iValue = 0;

    cout << "Enter number: ";
    cin >> iValue;

    Display(iValue);

    return 0;
}
