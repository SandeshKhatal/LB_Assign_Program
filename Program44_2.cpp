#include <iostream>
using namespace std;

template<class T>
T Max(T no1, T no2, T no3)
{
    T max = no1;
    if(no2 > max) max = no2;
    if(no3 > max) max = no3;
    return max;
}

int main()
{
    int iMax = Max(10, 20, 30);
    printf("%d\n", iMax);
    
    float fMax = Max(10.0f, 20.0f, 5.0f);
    printf("%f\n", fMax);

    return 0;
}
