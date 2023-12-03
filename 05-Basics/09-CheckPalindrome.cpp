/*
Check whether a given number 'n' is palindrome number
*/

#include <bits/stdc++.h>
using namespace std;

bool palindrome(int n)
{
    int digit, cp=n, rev;

    while(n!=0){
        digit = n % 10;
        rev = rev*10 + digit;
        n/=10;
    }
    if(cp == rev)
        return true;
    else
        return false;
}

int main() {
    int n;
    cin >> n;
    
    palindrome(n)? cout << "True" : cout << "False";

    return 0;
}