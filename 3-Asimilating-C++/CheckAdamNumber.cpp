/*
    Check weather the given number is a ADAM NUMBER
*/

#include <bits/stdc++.h>
using namespace std;

int ReverseNumber(int n) {
    int rev = 0;

    while (n != 0) {
        rev = rev * 10 + n % 10;

        n /= 10;
    }

    return rev;
}

int main()
{
    int n, revVal;

    cout << "Enter a number : ";
    cin >> n;

    revVal = ReverseNumber(n);

    if(pow(n, 2) == ReverseNumber(pow(revVal, 2)))
        cout << n << " is a Adam Number.";
    else
        cout << n << " is not a Adam Number.";

    return 0;
}