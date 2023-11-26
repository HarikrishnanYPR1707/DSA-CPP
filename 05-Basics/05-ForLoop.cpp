/*
you have to find out the n-th Fibonacci Number. Handle edges cases like when 
'n' = 1 or 'n' = 2 by using conditionals like if else and return what's expected.

Sample series :
[ 1, 1, 2, 3, 5, 8, 13, 21]
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, a = 1, b = 1, c;

  cin >> n;

  if (n == 1 || n == 2)
    cout << "1";
  else {
    for (int i = 0; i < n - 2; i++) {
      c = a + b;
      a = b;
      b = c;
    }
    cout << c;
  }
}