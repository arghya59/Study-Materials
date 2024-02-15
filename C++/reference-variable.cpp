#include<iostream>
using namespace std;

//Driver programme...
 
int main(){
    int a = 25;
    int b = 16;
    int &ref = a;

    ref = b;
    cout<<ref;
    return 0;
}