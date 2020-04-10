#include<iostream>

using namespace std;

/*关注空行和输入超出数目限制*/
int main() {
    char name[5];

    cin.get(name, 5);//不能自然处理空行，将中断输入
    cout << "your name is:" << name << endl;

    cin.get(name, 5);//超出限制时，将后续部分留在输入队列中
    cout << "your name is:" << name << endl;

    cin.get(name, 5);
    cout << "your name is:" << name << endl;

    return 0;
}
