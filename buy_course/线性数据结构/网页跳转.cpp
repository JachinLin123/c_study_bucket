// @author JachinLin
// Created on 2020-02-28-20:59.
//
#include<iostream>
#include<algorithm>
#include<string>
#include<stack>
using namespace std;

int main() {
    int n;
    cin >> n;
    stack<string> s1, s2;
    string a;
    for (int i = 0; i < n; i++) {
        cin >> a;
        if (a == "VISIT") {
            cin >> a;
            cout << a << endl;
            s1.push(a);
            while (!s2.empty()) {
                s2.pop();
            }
        } else if (a == "BACK") {
            if (s1.size() <= 1) {
                cout << "Ignore" << endl;
            } else {
                s2.push(s1.top());
                s1.pop();
                cout << s1.top() << endl;
            }
        } else {
            if (s2.empty()) {
                cout << "Ignore" << endl;
            } else {
                s1.push(s2.top());
                s2.pop();
                cout << s1.top() << endl;
            }
        }
    }

    return 0;
}