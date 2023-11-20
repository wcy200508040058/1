#include<iostream>
using namespace std;
int main()
{
	double sum=0;
	double a, b=1;
	a = 2;
	while (a < 100) {
		sum = sum + a;
		a = a * 2;

		b += 1;
	}
	double d = sum *0.8/ (b-1);
	cout << "平均花费为" << d << endl;
	cout << a << endl;
	cout << b << endl;
	cout << sum;


}