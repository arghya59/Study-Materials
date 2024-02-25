#include <iostream>
using namespace std;

// Driver programme...

int main()
{
    int array2D[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    cout << "===============================================" << endl;
    cout << "Example-1 : " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << array2D[i][j] << " ";
        }
        cout << endl;
    }
    cout << "===============================================" << endl;

    cout << endl
         << "===============================================" << endl;
    cout << "Example-2 : ";

    int col, row;
    cout << endl
         << "Enter Row size: ";
    cin >> row;
    cout << endl
         << "Enter colomn size: ";
    cin >> col;
    cout << endl
         << "Making [" << row << " x " << col << "] matrix..." << endl;
    int array2d[row][col];
    // Input...
    for (int i = 0; i < row; i++)
    {
        cout << "Enter elements of row " << i + 1 << " : "<<endl;
        for (int j = 0; j < col; j++)
        {
            cin >> array2d[i][j];
            cout << endl;
        }
    }
    // Output...
    cout << endl
         << endl
         << "Showing Matrix..." << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << array2d[i][j] <<" ";
        }
        cout << endl;
    }

    return 0;
}