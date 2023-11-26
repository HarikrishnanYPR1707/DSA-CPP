#include <bits/stdc++.h>
using namespace std;

int main() {
    int n , temp, rev = 0;

    cout << "Enter a number : ";
    cin >> n;

    while (n != 0) {
        rev = rev * 10 + n % 10;

        n /= 10;
    }

    cout << "The reversed numer is " << rev << endl;

    return 0;
}