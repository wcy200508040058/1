#include <iostream>
using namespace std;

int main()
{
	int a, b,c,d;
	cin >> a >> b;
	c = a < b ? a : b;
	d = a > b ? a : b;
	if (c == 0) {
		cout << "����С����������󹫱���" << endl;
	}
	else{
		while (d % c != 0) {
			int temp = d % c;

			c = temp;
			return d % c;
		}
		
	}
	cout << "��С������ " << c << endl << "��󹫱��� " << c * d;
	return 0;
}