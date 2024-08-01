#include <iostream>
using namespace std;

void Display(char ch, int index) 
{
    if(index < 6) 
    {
        if(index == 2) 
        {
            cout << char(toupper(ch)) << " ";
        } 
        else 
        {
            cout << ch << " ";
        }
        Display(ch + 1, index + 1);
    }
}

void Display() 
{
    Display('a', 0);
}

int main() 
{
    Display();
    return 0;
}
