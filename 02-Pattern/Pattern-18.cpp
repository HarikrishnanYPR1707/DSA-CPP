/*Triangular pattern where the columns depend on rows
    D
    C D
    B C D
    A B C D
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r;
    char ch = 'D';

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
        ch -= (i + 2);
        cout << endl;
    }

    return 0;
}