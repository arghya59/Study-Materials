// Find Maximum element from array...

#include <iostream>
using namespace std;

int main()
{
    int n, array[10], max=0;
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
    max = array[0];

    for (int i = 0; i < n; i++)
    {
       if(array[i]>max){
        max = array[i];
       }
    }

    cout << "Highest element is: "<<max;
    return 0;
}