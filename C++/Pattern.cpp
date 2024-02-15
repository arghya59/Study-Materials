#include <iostream>
using namespace std;

class Pattern
{
private:
    int row, col, N;

public:
    Pattern() {}
    Pattern(int row, int col)
    {
        this->row = row;
        this->col = col;
    }
    Pattern(int n)
    {
        N = n;
    }

    void rectanglePattern()
    {
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cout << "* ";
            }
            cout << endl;
        }
    }

    void HollowRectangle();
    void HalfStarPiramid();
    void HalfStarPiramidInverted();
};

void Pattern ::HollowRectangle()
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == 0 || i == row - 1 || j == 0 || j == col - 1)
                cout << "* ";

            else
                cout << "  ";
        }
        cout << endl;
    }
}

void Pattern ::HalfStarPiramid()
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void Pattern ::HalfStarPiramidInverted()
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N - i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
// Driver programme...

int main()
{
    Pattern rec(15, 10);
    Pattern pir(10);

    rec.rectanglePattern();
    cout << endl
         << endl;
    pir.HalfStarPiramid();
    cout << endl
         << endl;
    rec.HollowRectangle();
    cout << endl
         << endl;
    pir.HalfStarPiramidInverted();

    return 0;
}