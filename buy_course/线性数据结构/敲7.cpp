// @author JachinLin
// Created on 2020-02-28-20:58.
//
#include <iostream>
#include <string>
#include <queue>
using namespace std;

bool have7(int x) {
    while (x) {
        if (x % 10 == 7) {
            return true;
        }
        x /= 10;
    }
    return false;
}
int main()
{
    int n, m, t;
    cin >> n >> m >> t;
    queue<string> q;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        q.push(s);
    }
    for (int i = 1; i < m; i++) {
        q.push(q.front());
        q.pop();
    }
    int time = t;
    while (q.size() > 1) {
        string t = q.front();
        q.pop();
        if (!(time % 7 == 0 || have7(time))) {
            q.push(t);
        }
        time++;
    }
    cout << q.back() << endl;
}