#include <bits/stdc++.h>
using namespace std;

// Generically arrays is pass by reference
void doSomething(int arr[]) {
    arr[0] = 100;
    cout << arr[0] << endl;
}

int main() {
    int arr[5];

    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    
    doSomething(arr);
    cout << arr[0];
    return 0;
}