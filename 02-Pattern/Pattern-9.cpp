/*
  Simple Star Pattern with equal rows and columns is printed here
  1
  2 3
  3 4 5
  5 6 7 8
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r, count = 1;

    cout << "Enter the number of rows : ";
    cin >> r;

    cout << "The pattern formed is : " << endl;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << count << " ";
            count++;
        }
        if (i >= 1)
            count--;
        cout << endl;
    }

    return 0;
}