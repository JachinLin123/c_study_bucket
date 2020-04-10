#include <string>
#include <iostream>

using namespace std;

int global_id = 0;

class Student {
public:
    Student(const string &name, int age, bool male, double high, double weight) : name(name),
                                                                                  male(male), high(high),
                                                                                  weight(weight) {
        this->id = ++global_id;
        if (age > 0)
            this->age = age;
    }

    Student(const string &name, int age) : name(name) {
        if (age > 0)
            this->age = age;
    }

    double bmi();

private:
    string name;
    int age;
    int id;
    bool male;
    double high;
    double weight;
};
double Student::bmi(){
    return this->weight / this->high / this->high;
}
int main() {
//    Student stu;//Student stu()
    Student stu1("zhangsan", 20, 1, 1.8, 100);
    Student stu2("lisi", 30);
    Student stu3 = {"wangwu", 25};
    Student *stu4 = new Student("wangwu", 25);
    stu4->bmi();

    Student stus[] = {{"wangwu", 25},{"wangwu", 25}};
    return 0;
}