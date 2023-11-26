/*Triangular pattern where the columns depend on rows
   1 2 3 4 5 5 4 3 2 1
   1 2 3 4 * * 4 3 2 1
   1 2 3 * * * * 3 2 1
   1 2 * * * * * * 2 1
   1 * * * * * * * * 1

   So it is divided into left number triangle, star pattern and right triangle
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
        for (int j = 0; j < r - i; j++)
        {
            cout << j + 1 << " ";
        }

        for (int j = 1; j < i + 1; j++)
        {
            cout << "*"
                 << " ";
        }

        for (int j = 1; j < i + 1; j++)
        {
            cout << "*"
                 << " ";
        }

        for (int j = r - i; j > 0; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}