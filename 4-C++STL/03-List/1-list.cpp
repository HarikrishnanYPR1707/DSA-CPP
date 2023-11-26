// 30:26

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // List is same as vector but also give ' front ' operations

    list<int> li;

    li.push_back(5);
    li.emplace_back(10);

    // Front Operations
    li.push_front(11);
    li.emplace_front(45);

    // Rest functions are same as vector
    // begin, end, rbegin, rend, clear, insert, size, swap

    return 0;
}