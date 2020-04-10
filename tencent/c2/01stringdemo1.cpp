#include <iostream>
#include <string>

using namespace std;

int main() {
    char charr1[20];//没有内容的数组
    char charr2[20] = "bbb";//初始化数组

    string str1;//空字符串
    string str2 = "ddd";//初始化字符串

    cin >> charr1;
    cin >> str1;
    cout << charr1 << " " << charr2 << " " << str1 << " " << str2 << endl;

    cout<<"charr2 的第一个字符 ："<<charr2[0]<<endl;
    cout<<"str2 的第2个字符 ："<<str2[1]<<endl;
    return 0;
}