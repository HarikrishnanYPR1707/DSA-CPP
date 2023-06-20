/*
  Simple Star Pattern with equal rows and columns is printed here
  1 2 3 4
  1 2 3 4
  1 2 3 4
  1 2 3 4
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r, c;

    cout << "Enter the number of rows and column : ";
    cin >> r >> c;

    cout << "The pattern formed is : ";

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << j + 1 << " ";
        }
        cout << endl;
    }

    return 0;
}