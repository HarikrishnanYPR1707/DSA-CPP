//   Simple Star Pattern with equal rows and columns is printed here
//   * * *
//   * * *
//   * * *

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r, c;

    cout << "Enter the number of column and rows : ";
    cin >> r >> c;

    cout << "The pattern formed is : " << endl;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}