#include<iostream>
using namespace std;
int main() {
	double r, h, v, Π;
	Π = 3.1415926;
	cout << "请输入半径" << endl;
	cin >> r;
	cout << "请输入锥高" << endl;
	cin >> h;
	v =  r * r * h * Π/3;
	cout << "圆锥的体积为 " << v << endl;

}