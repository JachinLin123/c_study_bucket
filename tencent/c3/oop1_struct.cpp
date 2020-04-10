#include <string>
#include <iostream>

using namespace std;

struct Student {
    string name;
    int age;
    int id;
    bool male;
    double high;
    double weight;

    double bmi();//成员函数的声明
};

double Student::bmi() {//成员函数的定义
    return weight / high / high;
}


int main() {
    Student stu1;
    cout << stu1.name << ",bmi:" << stu1.bmi() << endl;
    return 0;
}
