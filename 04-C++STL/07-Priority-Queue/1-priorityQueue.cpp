#include <bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int> pq;

    // In here the queue maintained is in the decending order by default
    // That means that the lexicographically largest number will be on the top of the queue

    pq.push(1);
    pq.push(2);
    pq.push(3);
    pq.push(4);
    pq.emplace(5);

    cout << pq.top() << endl;

    pq.pop();

    cout << pq.top() << endl;

    // size, swap function are same as other

    // Minimum Heap
    priority_queue<int, vector<int>, greater<int>> pq1;

    pq1.push(1);
    pq1.push(2);
    pq1.push(3);
    pq1.push(4);
    pq1.emplace(5);

    cout << pq1.top() << endl;

    pq1.pop();

    cout << pq1.top() << endl;

    return 0;
}