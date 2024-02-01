#include <iostream>
using namespace std;

class Prime
{
public:
    bool isPrime(int n)
    {
        if (n == 0 || n == 1)
            return false;
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
                return false;
        }
        return true;
    }
};

// Driver programme...
int main()
{
    int n;
    Prime obj1;
    cout << "==== : Prime number : ==== " << endl;
    cout << "Enter how many prime numbers do you need from the series: ";
    cin >> n;
    cout<<"Prime Numbers til ("<<n<<"): ";
    for (int i = 0; i <= n; i++)
    {
        if (obj1.isPrime(i) == true)
        {
            cout << i << " ";
        }
    }

    return 0;
}