#include <iostream>
#include <cstdio>

void sprintf();

void demo2();

using namespace std;

int main() {
    sprintf();
//    demo2();

    return 0;
}

void demo2() {
    int data = 1024;
//    ===进制===
    hex(cout);
    cout<<data<<endl;

    oct(cout);
    cout<<data<<endl;
}

void sprintf() {
    char str[256] = {0};
    int data = 1024;
    //将data转换为字符串
    sprintf(str, "%d", data);
    cout << str << endl;

    //获取data的十六进制
    sprintf(str, "0x%X", data);
    cout << str << endl;

    //获取data的八进制
    sprintf(str, "0%o", data);
    cout << str << endl;

    const char *s1 = "Hello";
    const char *s2 = "World";
    //连接字符串s1和s2
    sprintf(str, "%s %s", s1, s2);
    cout << str << endl;
}
