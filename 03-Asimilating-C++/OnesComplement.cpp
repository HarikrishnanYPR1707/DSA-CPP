/*
    C++ Program to Print the 1's Complement of an Integer

    Example :- 
    input --> 1100
    output --> 0011
*/

#include <bits/stdc++.h>
using namespace std;

void OnesComplement(int n) {
    vector<int> arr;
    
    while (n != 0) {
        if (n%10 == 0) 
            arr.push_back(1);
        else
            arr.push_back(0);

        n/=10; 
    }

    reverse(arr.begin(), arr.end());

    for(vector<int>::iterator it = arr.begin(); it < arr.end(); it++) {
        cout << *it;
    }
}

int main() {
    int n;

    cout << "Enter a binary number : ";
    cin >> n;

    OnesComplement(n);

    return 0;
}