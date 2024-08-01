#include <iostream>
using namespace std;

int Fact(int iNo) 
{
    if(iNo <= 1) 
    {
        return 1;
    } 
    else 
    {
        return iNo * Fact(iNo - 1);
    }
}

int main() 
{
    int iValue = 0, iRet = 0;

    cout << "Enter number: ";
    cin >> iValue;

    iRet = Fact(iValue);
    cout << iRet;

    return 0;
}
