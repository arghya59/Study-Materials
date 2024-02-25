#include <iostream>
using namespace std;

template <class T1>
void swapNumbers(T1 &num1, T1 &num2)
{
    T1 temp = num1;
    num1 = num2;
    num2 = temp;
}

void swapByPointers(int *p1, int *p2){
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

// Driver programme...

int main()
{
    float a = 5.5;
    float b = 2.5;
    int c,d;
    c=10;d=12;
    swapByPointers(&c, &d);
    swapNumbers(a, b);
    cout<<"Swapped value: a="<<a<<" b="<<b;
     cout<<endl<<"Swapped value: c="<<c<<" d="<<d;
    return 0;
}