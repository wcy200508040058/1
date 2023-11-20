#include <iostream>
using namespace std;

int main()
{
	int a, b,c,d;
	cin >> a >> b;
	c = a < b ? a : b;
	d = a > b ? a : b;
	if (c == 0) {
		cout << "无最小公因数与最大公倍数" << endl;
	}
	else{
		while (d % c != 0) {
			int temp = d % c;

			c = temp;
			return d % c;
		}
		
	}
	cout << "最小公因数 " << c << endl << "最大公倍数 " << c * d;
	return 0;
}