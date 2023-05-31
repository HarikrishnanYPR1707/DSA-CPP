// write a program for deleting the elements from the vector
#include <bits/stdc++.h>
using namespace std;

int main() {
    int totalElement, inputValue, deletionValue;
    vector<int> integerVector;

    cout << "\nEnter the number of elements : ";
    cin >> totalElement;

    cout << "\nEnter the elements : ";
    for(int i = 0; i < totalElement; i++) {
        cin >> inputValue;
        integerVector.emplace_back(inputValue);
    }

    cout << "\nEnter the element to delete : ";
    cin >> deletionValue;

    cout << "\n-----------------------------------------------------------";
    cout << "\nDELETING THE ELEMENTS USING USING -- vector<int>::iterator --";
    for(vector<int>::iterator it = integerVector.begin(); it != integerVector.end(); it++) {
        if (*(it) == deletionValue) {
            integerVector.erase(it);
        }
    }

    // cout << "\n-----------------------------------------------------------";
    // cout << "\nPRINTING THE ELEMENTS USING USING -- auto it --";
    // for(auto it = integerVector.begin(); it != integerVector.end(); it++) {
    //     if (*(it) == deletionValue) {
    //         integerVector.erase(it);
    //     }
    // }

    cout << "\nThe elements in the vector are : ";   
    for(vector<int>::iterator it = integerVector.begin(); it != integerVector.end(); it++) {
        cout << *(it) << " ";
    }

    // for(auto it = integerVector.begin(); it != integerVector.end(); it++) {
    //     cout << *(it) << " ";
    // }
    
    return 0;
}