#include <iostream>
using namespace std;

int main() {
    char input;

    cout << "������һ���ַ���";
    cin >> input;

    if (input >= 'a' && input <= 'z') {
        input = toupper(input);
        cout << "ת��Ϊ��д�ַ���" << input << endl;
    }
    else {
        cout << "����ַ���ASCII��ֵ��" << int(input) + 1 << endl;
    }

    return 0;
}