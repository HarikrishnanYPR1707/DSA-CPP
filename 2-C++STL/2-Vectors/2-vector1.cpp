#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    vector<int> integerVector;

    cout << "\nEnter the elements : ";

    for (int i = 0; i < 10; i++)
    {
        cin >> a;
        integerVector.emplace_back(a);
    }

    cout << "Iterator, insertion, looping in a vector";

    cout << "\n-----------------------------------------------------------";
    cout << "\nPRINTING THE ELEMENTS USING USING -- vector<int>::iterator --";
    cout << "\nThe elements in the vector are : ";   
    for(vector<int>::iterator it = integerVector.begin(); it != integerVector.end(); it++) {
        cout << *(it) << " ";
    }

    cout << "\n-----------------------------------------------------------";
    cout << "\nPRINTING THE ELEMENTS USING USING -- auto it --";
    cout << "\nThe elements in the vector are : ";   
    for (auto it = integerVector.begin(); it != integerVector.end(); it++) {
        cout << *(it) << " ";
    }

    cout << "\n-----------------------------------------------------------";
    cout << "\nPRINTING THE ELEMENTS USING USING for-each-loop -- auto it : v --";
    cout << "\nThe elements in the vector are : ";
    for (auto it : integerVector) {
        cout << it << " ";
    }
    
    return 0;
}