#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	double i, j;
	cout << "�����뻪���¶�" << endl;
	cin >> i;
	j = (i - 32) * 5 / 9;
	cout << "��Ӧ�����¶�Ϊ " << setprecision(4) << j;
	return 0;
}