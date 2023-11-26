/* 
    Find the sum of the digits of the number
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, sum = 0;

    cout << "Enter a number : ";
    cin >> n;

    while (n != 0) {
        sum = sum + (n % 10);
        n = n / 10;
    }

    cout << "Sum of the digits are : " << sum << endl;

    return 0;
}