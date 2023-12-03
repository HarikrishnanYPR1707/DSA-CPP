/*
Find the number of digits of ‘n’ that evenly divide ‘n’.
*/

#include <bits/stdc++.h>
using namespace std;

int countDigits(int n){
	int cp=n, digit, count=0;

	while(n!=0) {
		digit = n % 10;
		if( digit != 0 && cp%digit == 0 )
			count++;
		n /= 10;
	}
	return count;
}

int main() {
    int n;
    cin >> n;

    cout << countDigits(n);

    return 0;
}