#include <iostream>
using namespace std;

class Base
{
private:
    int var1 = 5;
    float var2 = 4;

protected:
    int change = 55;
    int val;

public:
    int pub = 20;
    void display()
    {
        // cout << var1 << endl;
        // cout << change << endl;
        cout << val << endl;
    }
};
class Derived : public Base
{
    // cout<<var1; //Can not accessible
    int var3 = change; // Can accesible bcoz change is protected
public:
    void displayVar()
    {
        cout << var3 <<endl;
    }

    // Method overriding...
    void display()
    {
        // change = 1005;
        // pub = 255;
        // cout << "Derived class method invoked "<<pub <<" & " <<change;
        val = 69;
        cout<<val<<endl;
    }
};

// Driver programme...

int main()
{
    Base obj1;
    Derived obj2;
    // obj2.display();
    obj2.displayVar();
    // obj1.display(); //Now we can access the private variable...

    obj2.display(); // Because Local scope has high priority
    obj1.display(); // value of variables will be reset when we create another instance

    return 0;
}