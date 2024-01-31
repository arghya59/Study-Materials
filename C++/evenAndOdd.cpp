#include <iostream>
using namespace std;

int parityChecker(int input)
{
    if (input % 2 == 0)
        cout << "The number " << input << " is an Even number";
    else
        cout << "The number " << input << " is an Odd number";
}

int main()
{
    cout << "====: Welcome to Parity checker :===="<<endl;
    int input;
    cout << "Enter the number you want to check:"<<endl;
    cin >> input;
    parityChecker(input);
    return 0;
}