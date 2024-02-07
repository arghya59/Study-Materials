#include <iostream>
using namespace std;

template <class T1>
void swapNumbers(T1 &num1, T1 &num2)
{
    T1 temp = num1;
    num1 = num2;
    num2 = temp;
}

// Driver programme...

int main()
{
    float a = 5.5;
    float b = 2.5;
    swapNumbers(a, b);
    cout<<"Swapped value: a="<<a<<" b="<<b;
    return 0;
}