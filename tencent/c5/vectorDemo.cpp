#include <iostream>
#include <vector>

using namespace std;

//遍历
void show(const vector<int> &v) {
    cout << "size " << v.size() << ":";//元素的个数
//    for (auto it = v.begin(); it != v.end(); it++) {
//        cout << *it << " ";
//    }
    for (int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main() {
//    1.初始化
    vector<int> v1;
    vector<int> v2(10);
    vector<int> v3(10, 100);
/*    show(v1);
    show(v2);
    show(v3);

    for (int i = 0; i < 10; ++i) {
        v2.push_back(i);
    }
    for (int i = 0; i < 10; ++i) {
        v2[i] = i;
    }
    show(v2);
    v2.erase(v2.end() - 1);
    show(v2);*/

    while (!v3.empty()) {
        cout << v3.back() << " ";
        v3.pop_back();
    }
    cout << endl;
    cout << v3.empty() << endl;
    return 0;
}