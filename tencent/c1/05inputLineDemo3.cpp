#include<iostream>

using namespace std;

/*关注空行和输入超出数目限制*/
int main() {
    char name[5];
    cout << "input your name:" << endl;
    cin.getline(name, 5);//可以处理空行，读取为一个空白字符串
    cout << "your name is:" << name << endl;



    cin.getline(name, 5);//只能读取4个字符，超出将设置failbit并中断输入，剩余部分留在输入流中
    cout << "your name is:" << name << endl;

    if (cin.failbit)
        cin.clear();//恢复输入

    cin.getline(name, 5);
    cout << "your name is:" << name << endl;
    return 0;
}
