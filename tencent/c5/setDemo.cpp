#include <iostream>
#include <set>

using namespace std;

struct Student {
    string name;
    int age;

    bool operator()(const Student &lh, const Student &rh) const {
        return lh.age < rh.age;
    }
    bool operator==(const Student &other)const{
        return this->name==other.name&&this->age==other.age;
    }
};

int main() {
    set<Student,Student> stu_set;
    stu_set.insert({"zhangsan", 20});
    stu_set.insert({"zhaoliu", 20});
    stu_set.insert({"lisi", 30});
    stu_set.insert({"wangwu", 40});
    stu_set.insert({"ali", 35});

    for (auto it = stu_set.begin(); it != stu_set.end(); it++) {
        cout << it->name << " " << (*it).age << endl;
    }
    return 0;
}