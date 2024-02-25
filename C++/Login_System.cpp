#include <iostream>
#include <string>
using namespace std;

template <class pass>
class LogIn
{
    pass password;

public:
    // LogIn(){};
    // LogIn(pass input)
    // {
    //     password = input;
    // }
    void registerPassword()
    {
        cin >> password;
        cout << endl
             << "Password registered successfully." << endl <<endl;
    }
    bool checkPassword()
    {
        pass input;
        cin >> input;
        if (password == input)
            return true;
        else
            return false;
    }
};

int main()
{
    LogIn<string> obj;
    int choice;
TryAgain:
    cout << "===========================================" << endl
         << "> Sign In" << endl
         << "> Log In" << endl
         << "===========================================" << endl
         << endl
         << "Enter 0 for sign in or 1 for log in" << endl;

    cin >> choice;
    if (choice == 0 || choice == 1)
    {
        switch (choice)
        {
        case 0:
        {
            cout << endl
                 << endl
                 << "[Sign In]" << endl
                 << "Register your password: ";
            obj.registerPassword();
            goto TryAgain;
        }
        case 1:
        {   
            passwordDontMatch:
            cout << endl
                 << endl
                 << "[Log In]" << endl
                 << "Enter your password: ";
            bool status = obj.checkPassword();
            if (status == true)
            {
                cout << endl
                     << "Passwoed matched." << endl
                     << "You have successfully logged In.";
            }
            else
            {
                cout << endl
                     << "[ Access denied!! ]" << endl
                     << endl
                     << "Please Try again" <<endl;
                goto passwordDontMatch;
            }
        }

        break;
        }
    }
    else
    {
        cout << "Invalid input!";
        goto TryAgain;
    }

    return 0;
}