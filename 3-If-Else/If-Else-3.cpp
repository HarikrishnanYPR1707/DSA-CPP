#include <bits/stdc++.h>
using namespace std;

int main() {
    int age;
    cout << "Enter the age : ";
    cin >> age;

    if(age < 18) {
        cout << "Not eligible for job.";
    }
    else if (age < 55) {
        cout << "Eligible for job.";
    }
    else if (age <= 57) {
        cout << "Eligible for job, but retirement soon.";
    }
    else if (age > 57) {
        cout << "Retirement Time. ";
    }

    return 0;
}