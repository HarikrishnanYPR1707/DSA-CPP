#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Same as SET but also sorts duplicate elements

    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);

    ms.erase(1); // It will erase all the instances of 1

    int cnt = ms.count(1);

    // only a single 1 is deleted
    ms.erase(ms.find(1));

    ms.erase(ms.find(1), ms.find(1) + 2);

    // rest all the functions are same as SET

    return 0;
}