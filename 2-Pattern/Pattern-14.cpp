/*
  Alphabetical pattern where the rows and columns are same
	A B C
	B C D
	C D E
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int r;
	char ch = 'A';

	cout << "Enter the number of rows : ";
	cin >> r;

	cout << "The pattern formed is : " << endl;

	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < r; j++)
		{
			cout << ch << " ";
			ch++;
		}
		ch -= 2;
		cout << endl;
	}

	return 0;
}