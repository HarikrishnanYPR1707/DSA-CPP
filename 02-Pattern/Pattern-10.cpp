/*
  Simple Star Pattern with triangular pattern
  1
  2 1
  3 2 1
  4 3 2 1
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r;

    cout << "Enter the number of rows : ";
    cin >> r;

    cout << "The pattern formed is " << endl;

    for (int i = 1; i <= r; i++)
    {
        for (int j = i; j > 0; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}