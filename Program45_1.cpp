#include <iostream>
using namespace std;

template <class T>
void Display(T value, int iSize) 
{
    for (int i = 0; i < iSize; ++i) 
    {
        std::cout << value << " ";
    }
    std::cout << std::endl;
}

int main() 
{
    Display('M', 7);
    Display(11, 3);
    Display(3.7, 6);
    return 0;
}
