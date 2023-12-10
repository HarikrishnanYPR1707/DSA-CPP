/*
    Armstrong Number
*/

#include <bits/stdc++.h>
using namespace std;

bool checkArmstrong(int n){
	int sum=0, digit, count=0, ncp=n;

    while (ncp != 0) {
      count++;
      ncp /= 10;
    }

	ncp = n;

    while (ncp != 0){
		digit = ncp%10;

		sum += pow(digit, count);

		ncp/=10;
	}

	if(n == sum) 
		return true;
	else
		return false;
}

int main() {
    int n;
    cin >> n;

    cout << checkArmstrong(n);

    return 0;
}