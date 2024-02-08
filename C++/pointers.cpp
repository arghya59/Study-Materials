#include<iostream>
using namespace std;

//Driver programme...
 
int main(){
    int value=0;
    int * pointer = new int [5];
    //Storin values...
    cout<<"Enter the values"<<endl;
    for(int i=0; i<5 ; i++){
        cin>>value;
        pointer = &value;
    }

    //Displaying the memory of the elements...
    for(int i=0; i<5 ; i++){
       cout<<pointer + i<<endl;
    }
    
    //Displaying the value of the elements...
    for(int i=0; i<5; i++){
        cout<< (*pointer)-- <<endl;
    }
    
    int a = 3;
    int * ptr = &a;
    cout<<"Value of a = " << *ptr;

    return 0;
}