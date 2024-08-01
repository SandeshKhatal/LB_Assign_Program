#include <iostream>
using namespace std;

template<class T>
T Max(T *arr, int iSize) 
{
    T max = arr[0];
    for(int i = 1; i < iSize; i++) 
    {
        if(arr[i] > max) 
        {
            max = arr[i];
        }
    }
    return max;
}

int main() 
{
    int arr[] = {10, 20, 30, 40, 50};
    float brr[] = {10.0, 3.7, 9.8, 8.7};
    
    int iRet = Max(arr, 5);
    std::cout << "Max of int array: " << iRet << std::endl;
    
    float fRet = Max(brr, 4);
    std::cout << "Max of float array: " << fRet << std::endl;

    return 0;
}
