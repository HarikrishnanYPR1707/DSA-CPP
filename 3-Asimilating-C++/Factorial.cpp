/*
    Print the Factorial of a Given Number
*/

#include <bits/stdc++.h>
using namespace std;

int Factorial(int n) {
    int fact = 1;

    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }

    return fact;
}

int main() {
    int n;

    cout << "Enter a number : ";
    cin >> n;

    cout << "Factorial of " << n << " is : " << Factorial(n);

    return 0;
}