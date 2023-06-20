/*
  Simple Star Pattern with equal rows and columns is printed here
  3 2 1
  3 2 1
  3 2 1
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r, c;

    cout << "Enter the number of rows and column : ";
    cin >> r >> c;

    cout << "The pattern formed is : " << endl;

    for (int i = 0; i < r; i++)
    {
        for (int j = c; j > 0; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}