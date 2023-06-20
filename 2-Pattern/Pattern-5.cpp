/*
  Simple Star Pattern with equal rows and columns is printed here
  1 2 3
  4 5 6
  7 8 9
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r, c, count = 0;

    cout << "Enter the row and columns : ";
    cin >> r >> c;

    cout << "The pattern formed is : " << endl;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            ++count;
            cout << count << " ";
        }
        cout << endl;
    }

    return 0;
}