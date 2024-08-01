#include <iostream>
using namespace std;

void Display(int n) 
{
    if(n > 0) 
    {
        cout<< "* ";
        Display(n - 1);
    }
}

void Display() 
{
    Display(5);
}

int main() 
{
    Display();
    return 0;
}
