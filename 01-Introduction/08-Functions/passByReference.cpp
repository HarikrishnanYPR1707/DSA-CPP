#include <bits/stdc++.h>
using namespace std;

// Pass By Reference
// The original value is changed

void doSomething(string &s) {
    s[0] = 'P';

    cout << s << endl;
}

int main() {
    string s = "Nila";
    doSomething(s);

    cout << s;
    return 0;
}