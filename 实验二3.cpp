#include<iostream>
using namespace std;
int main() {
	double a, b, c;
	cout << "请依次输入a,b,c的值" << endl;
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a) {
		cout << "三角形周长为 " << a + b + c << endl;
		if (a == b ||b == c || a == c) { cout << "该三角形为等腰三角形" << endl; }
	}
	else { cout << "该三角形不为三角形" << endl; }
	return 0;
}