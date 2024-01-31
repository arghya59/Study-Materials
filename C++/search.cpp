//Search the elemeent...

#include<iostream>
using namespace std;

int main(){
    int key=0, array[10], n, pos=0;
    bool status;
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<endl<<"Enter the array elements: "<<endl;
    for(int i=0; i<n; i++){
        cin>>array[i];
    }

    cout<<endl<<"Array: [";
    for(int i=0; i<n; i++){
        cout<<" "<<array[i];
    }
    cout<<" ]"<<endl;
    cout<<endl<<"Enter the element you want to search: "<<endl;
    cin>>key;
    for(int i=0; i<n; i++){
        if(key == array[i]){
            status = true;
            pos = i;
            break;
        }
        else
           status = false; 
    }

    if (status == true)
        cout<<endl<<"Element "<<key<<" found at position no: "<<pos<<" in the array";
    else
        cout<<endl<<"Element "<<key<<" not found!";  

    return 0;
}