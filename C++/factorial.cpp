#include<iostream>
using namespace std;

int factorial(double n){
    if(n < 1){
        return 1;
    }
    return n * factorial(n-1);
}

int main(){
    cout << "====: Factorial! of a number :===="<<endl;
    double input;
    cout << "Enter the number: "<<endl;
    cin >> input;
    cout << "Factorial of "<<input<<"! = "<<input;
    for(int i = 1 ; i<input; i++){
        cout<<" * "<<input-i;
    }
    cout <<endl << "Which is: "<<factorial(input);
    return 0;
}