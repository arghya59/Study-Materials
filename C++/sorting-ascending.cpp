#include <iostream>
using namespace std;

class Sorting
{
    int array[10], temp = 0;

public:
    // Creation of array...
    void makeArray()
    {
        cout << endl
             << "Enter the elements of the array: " << endl;
        for (int i = 0; i < sizeof(array) / 4; i++)
        {
            cin >> array[i];
        }
    }

    //Sorting...
    void sortAsc()
    {
        for (int i = 0; i < sizeof(array) / 4; i++)
        {
            for (int j = i + 1; j < sizeof(array) / 4; j++)
            {
                if (array[i] > array[j])
                {
                    temp = array[i];
                    array[i] = array[j];
                    array[j] = temp;
                }
            }
        }
    }

    // Display array...
    void display()
    {
        cout << endl
             << "Array: [";
        for (int i = 0; i < sizeof(array)/4; i++)
        {
            cout << " " << array[i];
        }
        cout << " ]" << endl;
    }
};

// Driver programme...
int main()
{
    Sorting obj1;

    // Make array
    obj1.makeArray();

    //displaying array...
    obj1.display();

    // Sorting...
    obj1.sortAsc();

    //Sprted array...
    cout<<"Sorted ";
    obj1.display();
}