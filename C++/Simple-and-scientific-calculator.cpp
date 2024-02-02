#include <iostream>
#include <cmath>
using namespace std;

class Math
{
public:
    // Factorial
    int factorial(int n)
    {
        if (n < 1)
        {
            return 1;
        }
        return n * factorial(n - 1);
    }
    // Power
    float powerOf(float base, int expo)
    {
        float power = base;

        for (int i = 1; i < expo; i++)
        {
            power = power * base;
        }

        return power;
    }
};

class Calculator
{
    void display(char op, int num1, int num2)
    {
        cout << endl
             << num1 << op << num2 << " = " << output;
    }

public:
    float output = 0;
    void calculate(char option)

    {
        float num1, num2;

        if (option == '+')
        {
            cout << endl
                 << "You choose Addition: "
                 << endl
                 << endl;
            cout << "Enter the first number: ";
            cin >> num1;
            cout << "Enter the second number: ";
            cin >> num2;
            output = num1 + num2;
            display(option, num1, num2);
        }
        else if (option == '-')
        {
            cout << endl
                 << "You choose Subtraction: " << endl
                 << endl;
            cout << "Enter the first number: ";
            cin >> num1;
            cout << "Enter the second number: ";
            cin >> num2;
            output = num1 - num2;
            display(option, num1, num2);
        }
        else if (option == '*')
        {
            cout << endl
                 << "You choose Multiplication: " << endl
                 << endl;
            cout << "Enter the first number: ";
            cin >> num1;
            cout << "Enter the second number: ";
            cin >> num2;
            output = num1 * num2;
            display(option, num1, num2);
        }
        else if (option == '/')
        {
            cout << endl
                 << "You choose Division: " << endl
                 << endl;
            cout << "Enter the first number: ";
            cin >> num1;
            cout << "Enter the second number: ";
            cin >> num2;
            output = num1 / num2;
            display(option, num1, num2);
        }
        else
            cout << endl
                 << "Calculator: "
                 << "'"
                 << option << "'"
                 << " is not a valid option!" << endl;
    }
};

// Inherited from Math & Calculator...

class ScientificCalculator : public Calculator, public Math
{
public:
    void operation(char option)
    {
        cout << endl;
        // Calc
        if (option == '+' || option == '-' || option == '*' || option == '/')
        {
            calculate(option);
        }
        // Power
        else if (option == '^')
        {
            cout << endl
                 << "Power:" << endl
                 << endl;
            float base;
            int expo;
            cout << "Enter the base: ";
            cin >> base;
            cout << "Enter the exponent: ";
            cin >> expo;
            cout << endl
                 << base << "^" << expo << " = " << powerOf(base, expo);
        }
        // Factorial
        else if (option == '!')
        {
            cout << "Factorial! :" << endl
                 << endl;
            int input;
            cout << "Enter the number: ";
            cin >> input;
            cout << endl
                 << endl
                 << "Factorial of " << input << "! = " << factorial(input);
            ;
        }
        // Root
        else if (option == 'r')
        {
            cout << "Squar Root :" << endl
                 << endl;
            float number;
            cout << "Enter the number :";
            cin >> number;
            cout << endl
                 << "sqrt of " << number << " = " << sqrt(number);
        }
        // Pi
        else if (option == 'p')
        {
            cout << "Pi * n :" << endl
                 << endl;
            float input = 0, pi = 3.142;
            cout << "Enter the number you want to multiply with Pi :";
            cin >> input;
            cout << endl
                 << "Pi * " << input << " = " << (pi * input);
        }
        else
            cout << endl
                 << "Calculator: "
                 << "'"
                 << option << "'"
                 << " is not a valid option!" << endl;
    }
};

// Driver programme...

int main()
{
    int mode;
    char option;

    cout << "=======================================" << endl;
    cout << ">"
         << "Enter 1 for Normal Calculator " << endl
         << ">"
         << "Enter 2 for Scientific Calculator" << endl;
    cout << "=======================================" << endl;

    cin >> mode;
    // Normal
    if (mode == 1)
    {
        cout << endl
             << "Welcome to Normal Calculator..." << endl;
        cout << "========================================"
             << endl
             << "Enter the [sign] to select that option" << endl
             << endl
             << "----------------------------------------" << endl
             << "Addition [+]" << endl
             << "Subtraction [-]" << endl
             << "Multiplication [*]" << endl
             << "Division [/]" << endl
             << "----------------------------------------" << endl;
        cin >> option;

        Calculator normal;
        normal.calculate(option);
    }
    // Scientific
    else if (mode == 2)
    {
        cout << endl
             << "==== : Welcome to Scientific Calculator : ====" << endl
             << endl
             << "========================================" << endl;
        cout << "Enter the [sign] to select that option" << endl
             << endl
             << "Addition [+]" << endl
             << "Subtraction [-]" << endl
             << "Multiplication [*]" << endl
             << "Division [/]" << endl
             << "Power [^]" << endl
             << "Root [r]" << endl
             << "Factorial [!]" << endl
             << "Pi [p]" << endl
             << "----------------------------------------" << endl <<endl;
        cin >> option;
        ScientificCalculator calc;
        calc.operation(option);
    }
    else
        cout << endl
             << "Error: "
             << mode
             << " is not a valid mode!" << endl;

    return 0;
}