#include <string>
#include <iostream>

using namespace std;

class Student {
private:
    string name;
    int age;
    int id;
    bool male;
    double high;
    double weight;

public:
    Student();
    string getName();

    void setName(const string &name);

    int getAge() const;

    void setAge(int age);

    int getId() const;

    bool isMale() const;

    void setMale(bool male);

    double getHigh() const;

    void setHigh(double high);

    double getWeight() const;

    void setWeight(double weight);

    double bmi();
};

double Student::bmi() {
    return weight / high / high;
}

string Student::getName(){
    return name;
}

void Student::setName(const string &name) {
    this->name = name;
}

int Student::getAge() const {
    return age;
}

void Student::setAge(int age1) {
    if(age1>0)
        age = age1;
}

int Student::getId() const {
    return id;
}


bool Student::isMale() const {
    return male;
}

void Student::setMale(bool male) {
    Student::male = male;
}

double Student::getHigh() const {
    return high;
}

void Student::setHigh(double high) {
    Student::high = high;
}

double Student::getWeight() const {
    return weight;
}

void Student::setWeight(double weight) {
    Student::weight = weight;
}

int main() {
    Student stu1;//={"zhangsan", 23, 1, true, 1.8, 80};
    stu1.setName("zhangsan");
    stu1.setAge(23);
    stu1.setMale(true);
    stu1.setHigh(1.8);
    stu1.setWeight(80);
    cout << stu1.getName() << ",bmi:" << stu1.bmi() << endl;
    return 0;
}
