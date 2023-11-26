/*
  Alphabetical pattern where the rows and columns are same
    A B C
    A B C
    A B C
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
        char ch = 'A';
        for (int j = 0; j < r; j++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }

    return 0;
}