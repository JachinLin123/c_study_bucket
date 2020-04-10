#include <iostream>
#include <string>
// using string constructors
using namespace std;

int main(){
    string one("Lottery Winner!"); // ctor #1
    cout << one << endl; // overloaded <<

    string two(20, '$'); // ctor #2
    cout << two << endl;

    string three(one); // ctor #3,拷贝one的内容到three
    cout << three << endl;

    one += " Oops!"; // overloaded += 追加
    cout << one << endl;

    two = "Sorry! That was "; //重新赋值

    three[0] = 'P';  //修改第一个字符

    string four; // ctor #4 无参数，初始化为空白字符串
    four = two + three; // overloaded +, =  拼接，赋值
    cout << four << endl;

    char alls[] = "All's well that ends well";
    string five(alls,20); // ctor #5  取前20个字符
    cout << five << "!\n";

    string six(alls+6, alls + 10); // ctor #6  指针，迭代器，begin和end指向内存中的两个位置
    cout << six << ", ";
    string seven(&five[6], &five[10]); // ctor #6 again  five是对象名，但不是指针，要用&取地址
    cout << seven << "...\n";

    string eight(four, 7, 16); // ctor #7  指定拷贝字符串对象的位置和拷贝长度
    cout << eight << " in motion!" << endl;

    return 0;
}