#include <iostream>
#include <string>
using namespace std;

// Reverse a string...
string stringReverse(string input)
{
    string output;
    int l = input.length();
    for (int i = 0; i <= input.length(); i++)
    {
        output += input[l - i];
    }

    return output;
}

// to Upper Case...
string toUpperCase(string input)
{
    for (int i = 0; i <= input.length(); i++)
    {
        if (input[i] >= 'a' && input[i] <= 'z')
            input[i] -= 32;
    }
    return input;
}

// to Lower Case...
string toLowerCase(string input)
{
    for (int i = 0; i <= input.length(); i++)
    {
        if (input[i] >= 'A' && input[i] <= 'Z')
            input[i] += 32;
    }
    return input;
}

//Capitalize...
string capitalize(string input)
{
    for (int i = 0; i <= input.length(); i++)
    {
        if (input[i] >= 'A' && input[i] <= 'Z')
            input[i] += 32;    
    }
    input[0] -= 32;
    return input;
}

// Driver programme...

int main()
{
    string str, name, surname, str2(5, 'A'), strIn, str3;
    str = "This is string declaration";
    name = "Arghya";
    surname = " Banerjee";
    str3 = "123456789";
    int number = 123456789;
    string text = "HeLLo ThiS is an unOrganIseD tExT";

    cout << "My Name is " << name.append(surname) << endl; // Concatination
    // cout<<str<<endl;
    // cout<<str2;

    // cout<<endl<< "Enter a string input: "<<endl;
    //  cin>>strIn;
    //  cout<<"Your String is: "<< strIn[5] <<endl;

    /* // Get a full String ...

     getline(cin, strIn);
     cout<<"Full string: "<<strIn; */

    // Get String length...
    cout
        << endl
        << "Length of the String (Str): " << str.length() << endl;

    // Revers...
    cout << endl
         << "Reversed String: " << stringReverse(str);
    cout << endl
         << "Reversed Name: " << stringReverse(name.append(surname)) << endl;

    // Compare...
    cout << endl
         << "Compare: " << name.compare(surname) << endl;

    // Erase...
    cout << endl
         << "Erase 4 to 7 " << str.erase(4, 7) << endl;

    // Find...
    cout << endl
         << "Find word string from (str) : " << str.find("his") << endl;

    // Substring...
    cout << endl
         << "Sub-String : " << str.substr(0, 4) << endl;

    // Parsing...
    cout << endl
         << "String to Int : " << stoi(str3)
         << endl
         << "and Number to String : " << to_string(number) + "-255";

    cout << endl
         << "String (" << text << ") To upper case: " << toUpperCase(text);
    cout << endl
         << "String (" << text << ") To Lower case: " << toLowerCase(text);
    cout << endl
         << "String (" << text << ") To Capitalize: " << capitalize(text);

    return 0;
}