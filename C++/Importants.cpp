#include<iostream>
using namespace std;

//Diffrence bitween Class & Structure...

struct employee{
    int age = 24;
    float b = 33;
    char a = 'c';
};

class Topics{
    int a = 10;
    float b = 22.56;
    char c = 'A';
    double d = 15698.145;
};


//Operator overloading...
//Polymorphishm
//Contructor
//Virtual Function & pure virtual function
//Compile time polymorphism and run time polymorphism
//Diff b/w friend class and friend function...
//smart pointer...  


//Driver programme...
 
int main(){
    employee Arghya;
    cout<<Arghya.age;
    return 0;
}