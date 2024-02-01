#include <iostream>
using namespace std;

void reverse(int number)
{
    int remainder = 0, sum = 0; 
    //number = 78
    while(number>0)
    {
        remainder = number % 10; // 8 > 7 % 10 = 7 
        sum = (sum * 10) + remainder; // 8 > 8*10+7 = 87
        number = number / 10; // [7.8]=>7 bcoz intezer value > 7/10 = 0 [0.7]
    }

    cout<<sum;
}

// Driver programme...
int main()
{
    int number;
    cout << "Enter the number: ";
    cin >> number;
    reverse(number);
    return 0;
}