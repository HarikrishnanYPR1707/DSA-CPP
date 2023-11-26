#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int, int> mpp;

    map<int, pair<int, int>> mpp;

    map<pair<int, int>, int> mpp;

    mpp[1] = 2;

    mpp.emplace[{3, 1}];

    mpp.insert[{2, 4}];

    mpp[{2, 3}] = 10;

    for (auto it : mpp)
    {
        cout << it.first << " " << it.second << endl;
    }

    auto it = mpp.find(3);
    cout << *it.second;

    // lower-bound, upper-bound and rest of the function are the same

    return 0;
}