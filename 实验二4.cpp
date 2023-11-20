#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char op;

    cout << "���������������������+ - * / %����";
    cin >> num1 >> num2 >> op;

    switch (op) {
    case '+':
        cout << "�����" << num1 + num2 << endl;
        break;
    case '-':
        cout << "�����" << num1 - num2 << endl;
        break;
    case '*':
        cout << "�����" << num1 * num2 << endl;
        break;
    case '/':
        if (num2 == 0) {
            cout << "��������Ϊ0��" << endl;
        }
        else {
            cout << "�����" << num1 / num2 << endl;
        }
        break;
    case '%':
        if (num2 == 0) {
            cout << "��������Ϊ0��" << endl;
        }
        else {
            cout << "�����" << fmod(num1, num2) << endl;
        }
        break;
    default:
        cout << "�Ƿ��������" << endl;
        break;
    }

    return 0;
}