#include <bits/stdc++.h>
using namespace std;

int main() {
    pair<int ,int> a = {1, 3};

    cout << a.first << " " << a.second << endl;

    pair<int, pair<int, int>> b = {1, {2, 3}};

    cout << b.first << " " << b.second.first << " " << b.second.second << endl;

    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};

    // cout << arr[0].first << " " << arr[0].second << endl;

    for(int i = 0; i < 3; i++) {
        cout << arr[i].first << " " << arr[i].second << endl;
    }

    cout << "-------------------------";

    pair<int, int> array[5];

    cout << "Enter the 5 pairs : ";
    for (int i = 0; i < 5; i++) {
        cin >> array[i].first >> array[i].second;
    }

    cout << "The entered 5 pairs are : \n";
    for (int i = 0; i < 5; i++) {
        cout << array[i].first << " " << array[i].second << endl;
    }
    

    return 0;
}