#include<iostream>

using namespace std;

int main() {
    char name[10];
    cout << "input your name:" << endl;
    cin.get(name, 10);//将换行符留在队列中

    cout << "your name is:" << name << endl;

    char c;
    cin.get(c);
    cout <<"队列中下一个字符是："<<c<<endl;

    cout << "input your age:" << endl;
    int age;
    cin >> age;
    cout << "your age is:" << age << endl;

// 10
//12:12:12 13:13:13
//    int N;
//    (cin>>N).get();//也会把换行符留在输入队列中
//    cin.getline(name,10);
    return 0;
}
