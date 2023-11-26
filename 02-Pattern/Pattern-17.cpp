/*
    Triangular pattern where the columns depend on rows
    A
    B C
    C D E
    D E F G
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
        if (i >= 1)
            ch--;
        cout << endl;
    }

    return 0;
}