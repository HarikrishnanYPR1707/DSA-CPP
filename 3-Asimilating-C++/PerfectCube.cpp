/*
    Print All Perfect Cubes below 1000
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    for (int i = 1; i < 10; i++) {
        cout << setw(3) << setfill('0') << pow(i, 3)  << endl;
    }

    return 0;
}