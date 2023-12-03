/*
Find out whether 'n' is prime or not.
*/

#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
	if(n <= 1)
		return false;
	
	for(int i = 2; i < n; i++){
		if(n % i == 0)
			return false;
	}
	return true;
}

int main() {
    int n;
    cin >> n;

    isPrime(n)? cout << "True" : cout << "False";

    return 0;
}