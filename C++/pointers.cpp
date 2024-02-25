#include<iostream>
using namespace std;

//Driver programme...
 
int main(){
    int value=0;
    int array[5]={10,25,33,46,98};
    int *ptr1 = &array[0];
    
    int * pointer = new int [5];
    //Storin values...
    cout<<"Enter the values"<<endl;
    for(int i=0; i<5 ; i++){
        // cin>>value;
        // pointer = &value;
        cin>>pointer[i];
    }

    //Displaying the memory of the elements...
    for(int i=0; i<5 ; i++){
       cout<<pointer[i]<<endl;
    }

    // cout<<"Array 0 " <<*ptr1++<<endl;
    // cout<<"Array 1 " <<*ptr1++<<endl;
    // cout<<"Array 2 " <<*ptr1++<<endl;
    // cout<<"Array 3 " <<*ptr1++<<endl;
    // cout<<"Array 4 " <<*ptr1<<endl;

    for(int i=0; i<5; i++){
        cout<<"Array pos "<<i<<" = "<<*ptr1<<endl;
        *ptr1++;
    }

    int a = 3;
    int * ptr = &a;
    cout<<"Value of a = " << *ptr;

    return 0;
}