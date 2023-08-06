/*
    Check Whether a given Year is a Leap Year
*/

#include <bits/stdc++.h>
using namespace std;

int checkLeapYear(int yr) {
    if(yr % 4 == 0 && yr % 100 == 0 && yr % 400 != 0)
        return 1;
    else
        return 0;
}

int main() {
    int year;

    cout << "Enter a year : ";
    cin >> year;

    if (checkLeapYear(year) == 1)
        cout << year << " is a Leap Year.";
    else
        cout << year << " is not a Leap Year.";

    return 0;
}