/*
Each data type has a different size. You’ve studied 5 different data types 
and the sizes of the data types:

Integer: 4 bytes
Long: 8 bytes
Float: 4 bytes
Double: 8 bytes
Character: 1 byte

You’re given a data type. Print its size in bytes.
*/

#include <bits/stdc++.h>
using namespace std;

int dataTypes(string type) {
	if(type == "Integer")
		cout << "4";
	else if (type == "Long")
		cout << "8";
	else if (type == "Float")
		cout << "4";
	else if (type == "Double")
		cout << "8";
	else if (type == "Character")
		cout << "1";
}

int main() {
    string str;
    getline(cin, str);
    dataTypes(str);
    return 0;
}