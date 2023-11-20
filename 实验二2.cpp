#include<iostream>
using namespace std;
int main() {
	double x, y;
	int i = 0;
	while (i < 1) {
		cout << "请输入x的值" << endl;
		cin >> x; if (x < 10 && x>0) {
			if (x > 0 && x < 1) { y = 3 - 2 * x; }
			if (x >= 1 && x < 5) { y = 2 / (4 * x) + 1; }
			if (x >= 5 && x < 10) { y = x * x; }
			cout << "y的值为" << y << endl;
		}
			else { cout << "x不满足定义域" << endl; }
			
		}
	
	
	return 0;
}