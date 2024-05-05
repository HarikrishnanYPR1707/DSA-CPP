// #There is a song concert going to happend in the city.The price of
// #each ticket is equal to the number obtained after reversing the bits
// #of a given 32 bits usigned integer 'n'.

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n = 2147483647;

    if (n >= INT_MIN && n <= INT_MAX)
    {
        cout << "In the INT Range";
    }
    else
    {
        cout << "Not In the INT Range";
    }

    cout << endl
         << INT_MIN << " < " << n << " < " << INT_MAX;

    return 0;
}