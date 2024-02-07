#include <iostream>
using namespace std;

template <class t1, class t2, class t3=double>
class Sum
{
public:
    t3 sumOfTheNumber(t1 n1, t2 n2)
    {
        t3 sum = n1 + n2;
        return sum;
    }
};

// Driver programme...

int main()
{
    double result;
    Sum<int, float> obj1;
    result = obj1.sumOfTheNumber(2, 5.5);
    cout << "Result= " << result;
    result = obj1.sumOfTheNumber(5, 10);
    cout <<endl << "Result= " << result;
    return 0;
}