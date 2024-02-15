#include <iostream>
using namespace std;

class Process
{
public:
    bool isPrime(int number)
    {
        if (number == 0 || number == 1)
        {
            return true;
        }
        else if (number == 2)
            return true;

        else
        {
            for (int i = 2; i < number; i++)
            {
                if (number % i == 0)
                    return false;
            }
            return true;
        }
    }
};

class Output : public Process
{
private:
    int input;

public:
    Output(int input)
    {
        this->input = input;
    }

    // Call by ref of Base class obj Approach...
    void display(Process &obj)
    {
        bool status = obj.isPrime(input);

        if (status == true)
            cout << input << " is a Prime Number.";
        else
            cout << input << " is not a prime number";
    }

    // Easy Approach...
    /*
    void display(int input)
    {
        bool status = isPrime(input);
        if (status == true)
            cout << input << " is a Prime Number.";
        else
            cout << input << " is not a prime number";
    }*/
};

// Driver programme...

int main()
{
    int input;
    cout << "Enter the number you want to check: ";
    cin >> input;
    Process p1;
    Output task1(input);
    task1.display(p1);
    //task1.display(input);
    return 0;
}