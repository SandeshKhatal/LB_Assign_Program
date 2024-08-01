#include <iostream>
using namespace std;

int MaxDigit(int iNo) 
{
    if(iNo == 0) 
    {
        return 0;
    } 
    else
    {
        int currentDigit = iNo % 10;
        return max(currentDigit, MaxDigit(iNo / 10));
    }
}

int main() 
{
    int iValue = 0;
    
    cout << "Enter number: ";
    cin >> iValue;

    int maxDigit = MaxDigit(iValue);
    cout << "Largest digit: " << maxDigit << std::endl;

    return 0;
}
