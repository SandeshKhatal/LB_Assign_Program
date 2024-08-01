#include <iostream>
using namespace std;

void Display(int iNo, char ch = 'a', bool toggle = true)
{
    if(ch > 'f')
    {
        return;
    }
    if(toggle && islower(ch)) 
    {
        cout << char(toupper(ch)) << " ";
    }    
    else
    {
        cout << ch << " ";
    }
    Display(iNo, ch + 1, !toggle);
}

int main()
{
    int iValue = 6; 
    
    cout << "Enter number: ";
    cin >> iValue;

    Display(iValue);
    return 0;
}