// Given an array with N elements, the task is to rotate the array to the left by K steps, where K is non-negative.

// INPUTS :-
// 8 --> N
// 7 5 2 11 2 43 1 1 --> Array inputs
// 2 --> K

// OUTPUTS :-
// Iteration 0 : 7 5 2 11 2 43 1 1 --> (input)
// Iteration 1 : 5 2 11 2 43 1 1 7
// Iteration 2 : 2 11 2 43 1 1 7 5
// Iteration 3 : 11 2 43 1 1 7 5 2
// Iteration 4 : 2 43 1 1 7 5 2 11

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int rotateArray(int n, int arr[], int k)
{
    int itCount = 0;

    for (int i = 0; i < k; i++)
    {
        int temp = arr[0];
        for (int j = 0; j < n - 1; j++)
        {
            arr[j] = arr[j + 1];
        }
        arr[n - 1] = temp;

        cout << "Iteration " << itCount + 1 << " : ";
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
        itCount++;
    }
}

int main()
{
    int n, k;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> k;
    rotateArray(n, arr, k);
    return 0;
}