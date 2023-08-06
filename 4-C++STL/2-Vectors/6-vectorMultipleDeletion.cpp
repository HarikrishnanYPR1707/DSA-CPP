#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5, val;

    vector<int> intVec;

    cout << "\nEnter the elments : ";
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        intVec.emplace_back(val);
    }

    cout << "\nThe elements present in the vector container before deleting are : ";
    for (vector<int>::iterator it = intVec.begin(); it != intVec.end(); it++)
    {
        cout << *(it) << " ";
    }

    // 1, 2, 3, 4, 5

    // --------------------------------
    // DELETING MULTIPLE ELEMENTS
    cout << "\nDeleting the elements on the index 1 and 2 : ";
    intVec.erase(intVec.begin() + 1, intVec.begin() + 3);
    // --------------------------------

    cout << "\nThe elements present in the vector container after deleting : ";
    for (vector<int>::iterator it = intVec.begin(); it != intVec.end(); it++)
    {
        cout << *(it) << " ";
    }

    return 0;
}