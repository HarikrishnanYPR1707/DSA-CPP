/*
    Triangular pattern where the columns depend on rows
    A
    B C
    D E F
    G H I J
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r;
    char ch = 'A';

    cout << "Enter the number of rows : ";
    cin >> r;

    cout << "The pattern formed is : " << endl;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }

    return 0;
}