#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, inputValue, deletingElement;
    char yesOrNo;

    vector<int> integerVector;

    cout << "\nEnter the total number of elements : ";
    cin >> n;

    cout << "\nEnter the elements : \n";
    for(int i = 0; i < n; i++) {
        cin >> inputValue;
        integerVector.emplace_back(inputValue);
    }

    cout << "\nThe elements entered in the vector are : \n";
    for(auto it = integerVector.begin(); it != integerVector.end(); it++) {
        cout << *(it) << " ";
    }

    do {
        cout << "\nEnter the elment to delete : ";
        cin >> deletingElement;

        for(vector<int>::iterator it = integerVector.begin(); it != integerVector.end(); it++){
            if(*(it) == deletingElement) {
                integerVector.erase(it);
            }
        }

        cout << "\nThe new vector is : ";
        for(auto it : integerVector) {
            cout << it << " ";
        }

        cout << "\nDo you want to delete another element (y/n) : ";
        cin >> yesOrNo;
    } while(yesOrNo == 'y' || yesOrNo == 'Y');

    return 0;
}