#include <iostream>
#include <limits.h>
using namespace std;

int MinDigit(int iNo) 
{
    if(iNo == 0) 
    {
        return INT_MAX;
    } 
    else 
    {
        int currentDigit = iNo % 10;
        return min(currentDigit, MinDigit(iNo / 10));
    }
}

int main()
 {
    int iValue = 0;

    cout << "Enter number: ";
    cin >> iValue;

    int minDigit = MinDigit(iValue);
    cout << "Smallest digit: " << minDigit <<endl;

    return 0;
}
