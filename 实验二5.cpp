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
    cout << "������" << a << "��" << endl;
        cout << "�ո���" << b << "��"<<endl;
        cout << "Ӣ����ĸ��" << n << "��"<<endl;
        cout << "�����ַ���" << m << "��"<<endl;

        
    
    return 0;
}
    