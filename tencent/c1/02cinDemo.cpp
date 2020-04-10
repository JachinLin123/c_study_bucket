#include <iostream>
#include <cstring>//string.h

using namespace std;

int main() {
    char name[10];
    cout << "请输入您的名称： ";
    cin >> name; //等待用户输入，将用户输入提取到name中

    cout << strlen(name) << " " << sizeof(name) / sizeof(char) << endl;
    cout << "您的名称是： " << name << endl;
//
//    int a;
//    int b;
//    double c;
//    char x;
//    cin >> a >> b >> c >> x;//以空格或制表符作为分隔
}

