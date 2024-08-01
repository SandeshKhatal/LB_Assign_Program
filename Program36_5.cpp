#include <iostream>
using namespace std;

int ReverseHelper(int iNo, int rev) 
{
    if(iNo == 0) 
    {
        return rev;
    } 
    else 
    {
        rev = rev * 10 + (iNo % 10);
        return ReverseHelper(iNo / 10, rev);
    }
}

int Reverse(int iNo) 
{
    return ReverseHelper(iNo, 0);
}

int main() 
{
    int iValue = 0;

    cout << "Enter number: ";
    cin >> iValue;

    int iRet = Reverse(iValue);
    cout << "Reversed number: " << iRet << endl;

    return 0;
}
