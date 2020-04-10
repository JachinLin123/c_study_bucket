#include <iostream>
#include <string>
using namespace std;
void f(const string &str){
//    str[0] = 'x';
}
void f( int * const p){
    //    *p=10;
    int x=10;
//    p=&x;
}

class Student {
    string name;

public:
    string getName()const{ //函数后面的const代表一种承诺：在函数体中不修改当前对象（this），如果没有，在第26行将报错
        return name;
    }
    void setName(string _name){
        name = _name;
    }
};

void f(Student stu){

}

int main() {
    string s1 = "abcdlkjasdjslllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllladuaiiiiiiiiiiiiiiiiiiii";
    f(s1);
    cout<<s1<<endl;
    const Student stu;//不期望stu被修改
    stu.getName();//getName(stu...)
}

