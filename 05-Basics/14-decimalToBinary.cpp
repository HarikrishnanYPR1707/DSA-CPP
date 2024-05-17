// Convert a Decimal Number to a Binary Number
// Example : -
// 1 --> 000000000000000000000000000000000001
// 33 --> 000000000000000000000000000000100001

#include <bits/stdc++.h>

using namespace std;

void decimal2BinaryWithArray(int n)
{
    int digit, resultBinaryArr[32], i = 1;

    while (i != 33)
    {
        digit = n % 2;
        resultBinaryArr[i - 1] = digit;
        n /= 2;
        i++;
    }

    int num = sizeof(resultBinaryArr) / sizeof(resultBinaryArr[0]);

    reverse(resultBinaryArr, resultBinaryArr + num);

    cout << "(USING ARRAY)" << endl
         << "The resulting Binary Number is : " << endl;

    for (int j = 0; j < 32; j++)
    {
        cout << resultBinaryArr[j] << " ";
    }
}

int main()
{
    int n, num;

    cout << "Enter a Decimal Number: ";
    cin >> n;

    decimal2BinaryWithArray(n);

    return 0;
}