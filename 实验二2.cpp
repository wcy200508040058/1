#include<iostream>
using namespace std;
int main() {
	double x, y;
	int i = 0;
	while (i < 1) {
		cout << "������x��ֵ" << endl;
		cin >> x; if (x < 10 && x>0) {
			if (x > 0 && x < 1) { y = 3 - 2 * x; }
			if (x >= 1 && x < 5) { y = 2 / (4 * x) + 1; }
			if (x >= 5 && x < 10) { y = x * x; }
			cout << "y��ֵΪ" << y << endl;
		}
			else { cout << "x�����㶨����" << endl; }
			
		}
	
	
	return 0;
}