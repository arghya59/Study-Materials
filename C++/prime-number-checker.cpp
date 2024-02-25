#include <iostream>
using namespace std;

bool isPrime(int n){
    if(n == 0 || n==1) return false;
    for(int i=2; i<n; i++){
        if(n % i == 0) return false;
    }
    return true;
}

int main() {
    int number;
    cout<<"Enter the number:";
    cin>>number;
    if(isPrime(number) == true ) cout<<number<<" is a Prime number";
    else cout<<number<<" is not a Prime number";
    return 0;
}