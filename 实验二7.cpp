#include<iostream>
using namespace std;
int main() {
	int i, k;
	for (i = 1; i < 6; i++) {
		for (k = 1; k <= i; k++) { cout << "*" ; }
		cout << "" << endl;
	}
	return 0;
}