#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vec1(3, 100);
    vector<int> vec2(4, 400);

    // Display the size of each vector using " size() "
    cout << "\nThe size of vector container 1 : " << vec1.size();
    cout << "\nThe size of vector container 2 : " << vec2.size();

    // Popping last element from each vector using " pop_back() "
    vec1.pop_back();
    vec2.pop_back();

    cout << "\nElements in the vectors 1 after popping are : ";
    for (auto it : vec1)
    {
        cout << it << " ";
    }

    cout << "\nElements in the vectors 2 after popping are : ";
    for (auto it : vec2)
    {
        cout << it << " ";
    }

    // Swapping 2 vectors
    vec1.swap(vec2);

    cout << "\nElements in the vectors 1 after swapping with vector 2 are : ";
    for (auto it : vec1)
    {
        cout << it << " ";
    }

    cout << "\nElements in the vectors 2 after swapping with vector 1 are : ";
    for (auto it : vec2)
    {
        cout << it << " ";
    }

    // Checking if there is any element in the vector using " empty() "
    cout << "\nIs there any elements in the vector 1 container : " << vec1.empty();
    cout << "\nIs there any elements in the vector 2 container : " << vec2.empty();

    // Clearing the vector container using " clear() "
    vec1.clear();
    vec2.clear();

    cout << "\nThe size of vector container 1 after clearing is : " << vec1.size();
    cout << "\nThe size of vector container 2 after clearing is : " << vec2.size();

    return 0;
}