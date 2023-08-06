/*
    Check weather 
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter a number : ";
    cin >> n;

    string s = (n%2 == 0) ? "Even Number" : "Odd Number";

    cout << s;

    return 0;
}