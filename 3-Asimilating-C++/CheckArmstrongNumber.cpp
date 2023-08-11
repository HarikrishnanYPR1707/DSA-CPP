/*
    Program to Check Armstrong Number
*/

#include <bits/stdc++.h>
using namespace std;

int checkArmstrongNumber(int n) {
    int armstrongSum = 0, nCopy = n;

    while (n != 0) {
        armstrongSum += pow(n%10, 3);
        n /= 10;
    }

    if(armstrongSum == nCopy)
        return 1;
    else
        return 0;
}

int main() {
    int n;
    string res;

    cout << "Enter a number : ";
    cin >> n;

    res = (checkArmstrongNumber(n) == 1)? "It's a Armstrong Number" : "It's not a Armstrong Number";

    cout << res;

    return 0;
}