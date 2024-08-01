#include <iostream>
using namespace std;

void Display(int n, int max) 
{
    if(n <= max) 
    {
        cout<< n << " ";
        Display(n + 1, max);
    }
}

void Display() 
{
    Display(1, 5);
}

int main() 
{
    Display();
    return 0;
}
