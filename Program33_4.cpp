#include <iostream>
using namespace std;

void Display(char ch) 
{
    if(ch <= 'F') 
    {
        cout << ch << " ";
        Display(ch + 1);
    }
}

void Display() 
{
    Display('A');
}

int main() 
{
    Display();
    return 0;
}
