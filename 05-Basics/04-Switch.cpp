#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

double areaSwitchCase(int ch, vector<double> a) {
	switch(ch) {
		case 1:
			cout << M_PI * a[0] * a[0];
			break;
		case 2:
			cout << a[0] * a[1];
	}
}

int main() {
    vector<double> a;
    a.push_back(10);
    a.push_back(20);

    areaSwitchCase(1, a);
    return 0;
}