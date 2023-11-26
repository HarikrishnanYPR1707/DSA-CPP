/*
  Simple Star Pattern with equal rows and columns is printed here
  1 1 1
  2 2 2
  3 3 3
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
        for (int j = 0; j < c; j++)
        {
            cout << i + 1 << " ";
        }
        cout << endl;
    }

    return 0;
}