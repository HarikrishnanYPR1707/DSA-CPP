/*
    Program to Display Factors of a Number
*/

#include <bits/stdc++.h>
using namespace std;

int FactorsPrinter(int n) {
    cout << "Factors of " << n << " are : 1 ";
    for(int i = 2; i <= n; i++) {
        if(n%i == 0) 
            cout << i << " ";
    }
}

int main() {
    int n;

    cout << "Enter a number: ";
    cin >> n;

    FactorsPrinter(n);

    return 0;
}