/*

You are given an integer 'n'.

Function 'sumOfDivisors(i)' for all 'i' from 1 to 'n'.

Find the sum of 'sumOfDivisors(i)' for all 'i' from 1 to 'n'.

*/


#include <bits/stdc++.h>
using namespace std;

int sumOfAllDivisors(int n){
	int i=1, sum, finalSum=0;

	for(int i=1; i<=n; i++) {
		sum=0;
		for(int j=1; j*j<=i; j++) {
			if(i%j == 0) {
				sum+=j;
				if(j != i/j) {
					sum += i/j;
				}
			}
		}
		finalSum+=sum;
	}
	return finalSum;
}

int main() {
    int n;
    cin >> n;

    cout << "The sum of all divisors is : " << sumOfAllDivisors(n);

    return 0;
}