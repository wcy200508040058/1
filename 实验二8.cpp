#include<iostream>
using namespace std;
int main() {
	double a, b,c;
	cin >> a;
	b = a / 2;
	c = (b + a / b) / 2;
	while (fabs(b - c) < 0.00001) {
		b = c;
		c = (b + a / b) / 2;
	}
	cout << a << "的平方根为" << c << endl;
	return 0;
	}
