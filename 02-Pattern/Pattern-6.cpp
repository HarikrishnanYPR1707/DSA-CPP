/*
  Simple Star Pattern with equal rows and columns is printed here
  *
  * *
  * * *
  * * * *
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r, c;

    cout << "Enter the rows : ";
    cin >> r;

    cout << "The pattern formed is : " << endl;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}