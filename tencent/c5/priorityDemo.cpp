#include <queue>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <sstream>

using namespace std;
typedef priority_queue<int, vector<int>, greater<int>> pq;

void f1();

void f2();

void f3();

template <typename T>
class myCMP {
public:
    bool operator()(T s1, T s2) {
        stringstream ss;
        string ss1;string ss2;
        ss<<s1;
        ss>>ss1;
        ss.clear();
        ss<<s2;
        ss>>ss2;
        return ss1.size() > ss2.size();
    }
};

int main() {
//    f1();
    cout << "=================" << endl;
//    f2();
    f3();
    return 0;
}
/*自定义比较器*/
void f3() {
    priority_queue<string, vector<string>, myCMP<string>> pq;
    pq.push("abc");
    pq.push("de");
    while (!pq.empty()) {
        cout << pq.top() << endl;
        pq.pop();
    }
}

void f2() {
    pq q;
    srand(time(0));
    for (int i = 0; i < 10; ++i) {
        q.push(rand() % 100);
    }
    while (!q.empty()) {
        cout << q.top() << endl;
        q.pop();
    }
}

void f1() {
    priority_queue<int> q;
    srand(time(0));
    for (int i = 0; i < 10; ++i) {
        q.push(rand() % 100);
    }
    while (!q.empty()) {
        cout << q.top() << endl;
        q.pop();
    }
}
