/*
    Program to Check Armstrong Number
*/

#include <bits/stdc++.h>
using namespace std;

int CheckArmStrongNumber(int n) {
    int sum = 0, copy = n, count = 0;

    while (copy != 0) {
        copy /= 10;
        count++;
    }

    // cout << "Number of digit => " << count << endl;

    copy = n;


    while (copy != 0) {
        // cout << sum << " ==> " << copy%10 <<  " ==> " << pow((copy%10), count) << endl;
        sum = sum + pow((copy%10), count);
        // cout << "sum => " << sum << endl;
        copy /= 10;
    }

    // cout << "Sum of the digit with power " << count << " is " << sum << endl;

    if (sum == n)
        return 1;
    else 
        return 0;
}

int main() {
    int n;

    cout << "Enter a number : ";
    cin >> n;

    string res = (CheckArmStrongNumber(n) == 1)? " is a Armstrong Number." : " is not a Armstrong Number.";

    cout << n << res << endl;

    return 0;
}