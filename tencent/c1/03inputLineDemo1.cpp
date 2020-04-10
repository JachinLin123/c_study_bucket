#include<iostream>

using namespace std;

int main() {
    char name[10];
    cout << "input your name:" << endl;
    cin.getline(name, 10);//遇到换行符或者输入超过9个字符，完成本次读取
    cout << "your name is:" << name << endl;

    cout << "input your age:" << endl;
    int age;
    cin >> age;
    cout << "your age is:" << age << endl;

    return 0;
}
