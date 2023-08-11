/*
    Program to Check Prime Number
*/

#include <bits/stdc++.h>
using namespace std;

int checkPrime(int n) {
    for (int i = 2; i < n; i++) {
        if(n%i == 0) {
            return 0;
        } else {
            return 1;
        }
    }
}

int main() {
    int n;

    cout << "Enter a number : ";
    cin >> n;

    if(n == 2) {
        cout << "It's a Prime Number";
        return 0;
    }

    if(checkPrime(n) == 1) 
        cout << "It's a Prime Number";
    else
        cout << "It's not a Prime Number";

    return 0;
}