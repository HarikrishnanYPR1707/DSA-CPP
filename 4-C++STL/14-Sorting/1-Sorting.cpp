#include <bits/stdc++.h>
using namespace std;

// EXAMPLE OF A COMPARATOR
bool comp(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.second < p2.second)
        return true;
    if (p1.second > p2.second)
        return false;
}

int main()
{
    // sort(a, a + n);
    // sort(v.begin(), v.end());

    // sort(a + 2, a + 4);

    // sort(a, a + n, greater<int>);

    // pair<int, int> a[] = {{1, 2}, {2, 1}, {4, 1}};

    // // sort it according to the second element
    // // if second element is same, then sort
    // // it according to first element but in decending

    // sort(a, a + n, comp);

    // // Here "comp" is comparator which is a boolean
    // // function which is used to perform custom comparison

    // int num = 7;
    // int cnt = __builtin_popcount(num);

    // long long long_num = 123456789;
    // int cnt = __builtin_popcountll(long_num);

    string s = "231";
    // for string "231" all the permutation will not be displayed
    // to get all the permutation the string should be sorted
    // sort(s.begin(), s.end());

    do
    {
        cout << s << endl;
    } while (next_permutation(s.begin(), s.end()));

    int max = *max_element(a, a + n);
    int min = *min_element(a, a + n);

    return 0;
}