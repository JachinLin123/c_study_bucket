// @author JachinLin
// Created on 2020-02-28-20:58.
//
#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    queue<int> q;
    for (int i = 1; i <= n; i++) {
        q.push(i);
    }
    int time;
    while (q.size() > 1) {
        int t = q.front();
        time++;
        q.pop();
        if (time == m) {
            time = 0;
        } else {
            q.push(t);
        }
    }
    cout << q.front() << endl;
}