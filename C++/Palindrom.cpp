#include <iostream>
using namespace std;

int sum, remainder, reverse;

void reverseNumber(int number)
{
    while (number > 0)
    {
        remainder = number % 10;
        sum = (sum * 10) + remainder;
        number = number / 10;
        reverse = sum;
    }
}

void isPalindrome(int number)
{
    if (number == reverse) cout<<"Number "<<number <<" is a Palindrome";
    else cout<<"Number "<<number <<" is not a Palindrome";
}

// Driver programme...
int main()
{
    int number;
    cout << "Enter the number you want to check: ";
    cin >> number;
    reverseNumber(number);
    isPalindrome(number);
    return 0;
}