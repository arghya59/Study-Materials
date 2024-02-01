#include <iostream>
using namespace std;

float power;

float powerOf(float base, int expo)
{
    power = base;

    for (int i = 1; i < expo; i++)
    {
        power = power * base;
    }

    return 0;
}

// Driver programme...
int main()
{
    float base;
    int exponent;
    cout << "Enter the base: ";
    cin >> base;
    cout << endl
         << "Enter the exponent: ";
    cin >> exponent;
    powerOf(base, exponent);
    cout << endl
         << base << "^" << exponent << " = " << power;
}