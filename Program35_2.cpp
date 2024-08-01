#include <iostream>
using namespace std;

int Sum(int iNo) 
{
    if(iNo == 0) 
    {
        return 0;
    } 
    else 
    {
        return (iNo % 10) + Sum(iNo / 10);
    }
}

int main() 
{
    int iValue = 0, iRet = 0;

    cout << "Enter number: ";
    cin >> iValue;

    iRet = Sum(iValue);

    cout << iRet;

    return 0;
}
