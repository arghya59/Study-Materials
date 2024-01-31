// Find Smallest element from array...

#include <iostream>
using namespace std;

int main()
{
    int n=0, array[10], min=0;
    cout << "Enter size of the araay: "<<endl;
    cin>>n;
    cout << "Enter the elements of araay: "<<endl;

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    cout <<endl << "Array : [";

    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }

    cout << "]"<<endl;
    min = array[0];

    for (int i = 0; i < n; i++)
    {
       if(array[i] < min){
        min = array[i];
       }
    }

    cout << "Smallest element is: "<<min;
    return 0;
}