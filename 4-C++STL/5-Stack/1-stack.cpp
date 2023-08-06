#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st, st1;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.emplace(5);

    cout << st.top() << endl; // prints 5 but " st[3] is not valid"

    st.pop();

    cout << st.top() << endl;

    cout << st.size() << endl;

    cout << st.empty() << endl;

    st.swap(st1);

    return 0;
}