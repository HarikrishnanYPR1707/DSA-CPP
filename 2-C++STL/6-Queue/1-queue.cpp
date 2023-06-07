#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;

    q.push(1);
    q.push(2);
    q.emplace(3);

    q.back() += 10;

    cout << q.back() << endl;

    cout << q.front() << endl;

    q.pop();

    cout << q.front() << endl;

    // size, empty, swap are same as stack

    return 0;
}