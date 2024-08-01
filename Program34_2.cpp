#include <iostream>
using namespace std;

void Display(int iNo, int i = 1) 
{
    if(i <= iNo) 
    {
        cout << i <<endl;
        Display(iNo, i + 1);
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
