/*
    Binary to Decimal

    Example :-
    input => 1010
    output => 10
*/

#include <bits/stdc++.h>
using namespace std;

int BinaryToDecimal(long int n) {
    int sum = 0, i = 0;

    while (n != 0) {
        sum = sum + (n%10) * pow(2,i);

        i++;
        n/=10;
    }

    return sum;
}

int main() {
    long int num;

    cout << "Enter a Binary Number : ";
    cin >> num;

    cout << "Decimal Conversion of " << num << " is : " << BinaryToDecimal(num);

    return 0;
}