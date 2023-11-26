/*
	Print ASCII Value of All Characters in the String
*/

#include <bits/stdc++.h>
using namespace std;

void CharacterToAscii(string str) {
	for(int i = 0; i <= str.length(); i++) {
		cout << str[i] << " ---> " << (int)str[i] << endl;
	}
}

int main() {
	string str;
	
	cout << "Enter a character : ";
	getline(cin, str);

	CharacterToAscii(str);

	return 0;
}
