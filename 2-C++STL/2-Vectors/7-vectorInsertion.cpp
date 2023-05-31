#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5, val;

    vector<int> intVec;
    // ----------------------------------------------
    // Declaring vector with 2 instance of 200 in it.
    vector<int> intVecCopy(2, 200);
    // ----------------------------------------------

    cout << "\nEnter the elments : ";
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        intVec.emplace_back(val);
    }

    cout << "\nThe elements present in the vector container are : ";
    for (vector<int>::iterator it = intVec.begin(); it != intVec.end(); it++)
    {
        cout << *(it) << " ";
    }

    // ---------------------------------
    // Inserting 500 at the beginning
    cout << "\nInserting 500 at the beginning";
    intVec.insert(intVec.begin(), 500);
    // ---------------------------------

    cout << "\nThe elements present in the vector container after inserting 500 at beginning are : ";
    for (auto it : intVec)
    {
        cout << it << " ";
    }

    // --------------------------------------------
    // Inserting 2 instance of 300 at the beginning
    cout << "\nInserting 2 instance of 300 at the beginning";
    intVec.insert(intVec.begin(), 2, 300);
    // --------------------------------------------

    cout << "\nThe elements present in the vector container after inserting 2 instance of 300 at the beginning : ";
    for (auto it : intVec)
    {
        cout << it << " ";
    }

    // --------------------------------------------
    // Copying one vector into another vector
    cout << "\nCopying one vector into another vector";
    intVecCopy.insert(intVecCopy.begin(), intVec.begin(), intVec.end());
    // --------------------------------------------

    cout << "\nThe elements present in the vector container after Copying one vector into another vector are : ";
    for (auto it : intVecCopy)
    {
        cout << it << " ";
    }
    return 0;
}