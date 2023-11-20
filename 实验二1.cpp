#include <iostream>
using namespace std;

int main() {
    char input;

    cout << "请输入一个字符：";
    cin >> input;

    if (input >= 'a' && input <= 'z') {
        input = toupper(input);
        cout << "转换为大写字符：" << input << endl;
    }
    else {
        cout << "后继字符的ASCII码值：" << int(input) + 1 << endl;
    }

    return 0;
}