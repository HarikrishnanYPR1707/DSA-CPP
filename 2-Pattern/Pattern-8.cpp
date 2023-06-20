/*
  Simple Star Pattern with equal rows and columns is printed here
  1
  2 3
  4 5 6
  7 8 9 10
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r, count = 0;

    cout << "Enter the numbers of rows : ";
    cin >> r;

    cout << "The pattern formed is : " << endl;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            ++count;
            cout << count << " ";
        }
        cout << endl;
    }

    return 0;
}