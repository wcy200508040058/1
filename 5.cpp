#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	double i, j;
	cout << "请输入华氏温度" << endl;
	cin >> i;
	j = (i - 32) * 5 / 9;
	cout << "对应摄氏温度为 " << setprecision(4) << j;
	return 0;
}