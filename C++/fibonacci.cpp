#include<iostream>
using namespace std;

void fibonacci(int size){
    int prev = 0 , next = 1;
    for(int i=2; i<size; i++){
        int temp = next;
        next = prev + next;
        prev = temp;
        cout<<" "<<next;
    }
}

//Driver programme...
int main(){
    int n;
    cout<<"Enter the size: ";
    cin>>n;
    cout<<"0 1";
    fibonacci(n);
    return 0;
}