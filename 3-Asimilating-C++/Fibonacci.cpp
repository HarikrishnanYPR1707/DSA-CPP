/*

*/

#include <bits/stdc++.h>
using namespace std;

void Fibonacci(int n) {
    int a = 0, b = 1, temp;

    cout << a << " " << b;

    for (int i = 0; i < n; i++) {
        cout << " " << a + b;

        temp = a;
        a = b;
        b = temp + b;
    }
}

int main() {
    int n;

    cout << "Enter the limit for Fibonacci Series : ";
    cin >> n;

    Fibonacci(n);

    return 0;
}