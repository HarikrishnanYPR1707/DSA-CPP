#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Set has sorted values and unique values

    set<int> st;

    st.insert(1);  //{1}
    st.emplace(2); //{1, 2}
    st.insert(2);  //{1, 2}
    st.insert(4);  //{1, 2, 4}
    st.insert(3);  //{1, 2, 3, 4}

    // Functionality of insert in vector
    // can also be used, that only increases
    // efficiency

    // begin(), rbeing(), end(), rend(), size()
    // empty() and swap() are same as those of above

    //{1, 2, 3, 4}
    auto it = st.find(3);
    // Give us the iterator or address of that particular element

    // {1, 2, 3, 4, 5}
    auto it = st.find(6);
    // If the element is not there then it points toward the element after end()

    st.erase(5); // takes logarithmic time

    int cnt = st.count(1);
    // there are only 2 types of occurance i.e. if it exists then it will give you 1 and if it doesn't then it will give 0

    auto it1 = st.find(2);
    auto it2 = st.find(3);
    st.erase(it1, it2);

    // lower_bound() and upper_bound() functions work in the same way
    // as in vector it does.

    auto it = st.lower_bound(3);

    auto it = st.upper_bound(4);

    return 0;
}