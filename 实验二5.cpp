#include <iostream>
using namespace std;

int main() {
    char c;
    int a= 0;
    int b = 0;
    int n = 0;
    int m = 0;
    
    
    while ((c=getchar())!='\n' ){
        
        
        if (c >= '0' && c <= '9') { a++; }
        else if (c == ' ') { b++; }
        else if (c >= 'a'&&c<='z'||c>='A'&&c<='Z') { n++; }
        else { m++; }
    }
    cout << "数字有" << a << "个" << endl;
        cout << "空格有" << b << "个"<<endl;
        cout << "英文字母有" << n << "个"<<endl;
        cout << "其他字符有" << m << "个"<<endl;

        
    
    return 0;
}
    