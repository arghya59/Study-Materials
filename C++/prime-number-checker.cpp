#include<iostream>
using namespace std;

//Driver programme...
int main(){
    int n;
    bool flag = true;
    cout<<"Enter your number: ";
    cin>>n;
    if(n==0 || n==1){
        cout<<n<<" is not a Prime Number";
    }
    for(int i=2; i<n; i++){
        if(n % i == 0){
             flag = false;
             break;
        }
    }

    if(flag == true) cout<<n<<" is a Prime number";
    
    else cout<<n<<" is not a Prime number";

    return 0;
}