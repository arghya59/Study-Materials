//Delete k-th element from array...

#include<iostream>
using namespace std;

int array[50], pos=0, size=0;

//Creation of array...
void makeArray(int size){
    cout<<endl<<"Enter the elements of the array: "<<endl;
    for(int i = 0 ; i<size; i++){
        cin>>array[i];
    }
}

//Display array...
void display(int size){
    cout<<endl<<"Array: [";
    for(int i = 0 ; i < size  ; i++){
        cout<<" "<<array[i];
    }
    cout<<" ]"<<endl;
}
//Deletion of element...
void deleteElement(int position){
    if(position < size){
        cout<<endl<<"Element at "<<position<<" which is "<< array[position] <<" has successfully deleted" <<endl;
        for( int i = position; i<size; i++){
        array[i] = array[i+1];
    }
    --size;
    }
    else
        cout<<"Invalid input!";  
}


//Driver programme to performe the deletion...
int main(){
    //Creating array...
    cout<<"Enter the size of the array: ";
    cin>>size;
    makeArray(size);

    //Display array...
    display(size);

    //Enter the element for deletion...
    cout<<"Enter the position you want to delete: ";
    cin>>pos;

    //delete element...
    deleteElement(pos);

    //display the final array...
    cout<<endl << "New ";
    display(size);

    return 0;
}