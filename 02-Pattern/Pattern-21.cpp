/*Triangular pattern where the columns depend on rows
     _ _ _ 1
     _ _ 1 2 1
     _ 1 2 3 2 1
     1 2 3 4 3 2 1

    So it is divided into blank spaces, left triangle and right triangle
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
        for (int j = 0; j < r - i + 1; j++)
        {
            cout << " "
                 << " ";
        }

        for (int j = 0; j < i + 1; j++)
        {
            cout << j + 1 << " ";
        }

        for (int j = i; j >= 1; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}