/*
  Triangular pattern where the columns depend on rows
   * * * *
   * * *
   * *
   *
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r;

    cout << "Enter the number of rows : ";
    cin >> r;

    cout << "The pattern formed is : " << endl;

    for (int i = 0; i < r; i++)
    {
        for (int j = i; j < r; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}