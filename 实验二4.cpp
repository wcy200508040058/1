#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char op;

    cout << "请输入两个数和运算符（+ - * / %）：";
    cin >> num1 >> num2 >> op;

    switch (op) {
    case '+':
        cout << "结果：" << num1 + num2 << endl;
        break;
    case '-':
        cout << "结果：" << num1 - num2 << endl;
        break;
    case '*':
        cout << "结果：" << num1 * num2 << endl;
        break;
    case '/':
        if (num2 == 0) {
            cout << "除数不能为0！" << endl;
        }
        else {
            cout << "结果：" << num1 / num2 << endl;
        }
        break;
    case '%':
        if (num2 == 0) {
            cout << "除数不能为0！" << endl;
        }
        else {
            cout << "结果：" << fmod(num1, num2) << endl;
        }
        break;
    default:
        cout << "非法运算符！" << endl;
        break;
    }

    return 0;
}