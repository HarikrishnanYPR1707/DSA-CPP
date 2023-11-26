#include <bits/stdc++.h>
using namespace std;

// Pass by value
// Only the copy if the value is changed
void doSomething(string s) {
    s[0] = 'T';

    cout << s << endl;
}

int main() {
    string s = "Raj";
    doSomething(s);

    cout << s;
    return 0;
}