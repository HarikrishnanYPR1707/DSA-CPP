/*
Write a program to input an integer 'n' and print the sum of all its even digits and
the sum of all its odd digits separately.

Digits mean numbers, not places! That is, if the given integer is "132456",
even digits are 2, 4, and 6, and odd digits are 1, 3, and 5.
*/

#include <iostream>
using namespace std;

int main() {
  int n, eSum = 0, oSum = 0, digit;

  cin >> n;

  while (n != 0) {
    digit = n % 10;
    if (digit % 2 == 0) {
      eSum += digit;
    } else {
      oSum += digit;
    }

    n /= 10;
  }

  cout << eSum << " " << oSum;
}
