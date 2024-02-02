#include <iostream>
using namespace std;

int cubeOf(int num)
{
    return num * num * num;
}

void checkArmstrong(int number)
{
    int r, sum = 0, store = number;
    while (number > 0)
    {
        r = number % 10;
        number = number / 10;
        sum += cubeOf(r);
    }
    if (sum == store)
        cout << "Number " << store << " is an Armstrong number";
    else
        cout << "Number " << store << " is not an Armstrong number";
}
// Driver programme...
int main()
{
    int n;
    cout << "Enter the number to check wheather it's armstrong or not: ";
    cin >> n;
    checkArmstrong(n);
    return 0;
}