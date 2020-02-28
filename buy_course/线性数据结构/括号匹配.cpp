// @author JachinLin
// Created on 2020-02-28-20:59.
//
#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main() {
    string a;
    cin >> a;
    int alen = a.size();
    stack<int> s;
    bool flag = true;
    int x[50005], y[50005], len = 0;
    for (int i = 0; i < alen; i++) {
        if (a[i] == '(') {
            s.push(i + 1);
        } else {
            if (s.empty()) {
                flag = false;
                break;
            } else {
                x[len] = s.top();
                s.pop();
                y[len] = i + 1;
                len++;
            }
        }
    }
    if (!s.empty()) {
        flag = false;
    }
    if (flag) {
        cout << "Yes" << endl;
        for (int i = 0; i < len; i++) {
            cout << x[i] << ' ' << y[i] << endl;
        }
    } else {
        cout << "No" << endl;
    }

    return 0;
}