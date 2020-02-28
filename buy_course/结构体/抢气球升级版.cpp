// @author JachinLin
// Created on 2020-02-28-19:51.
//
#include<iostream>
#include<algorithm>
using namespace std;

struct data {
    int n;
    int h;
    int get;
} d[100000];
bool cmp(data a, data b) {
    return a.h < b.h;
}
bool cmp2(data a, data b) {
    return a.n < b.n;
}
int main() {
    int n, m;
    int ball[100000];
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> d[i].h;
        d[i].n = i + 1;
        d[i].get = 0;
    }
    for (int i = 0; i < m; i++) {
        cin >> ball[i];
    }
    sort(d, d + n, cmp);
    sort(ball, ball + m);
    int flag = 0;
    for (int i = 0; i < n; i++) {
        for (int j = flag; j < m; j++) {
            if (d[i].h >= ball[j]) {
                d[i].get++;
                flag++;
            } else {
                break;
            }
        }
    }
    sort(d, d + n, cmp2);
    for (int i = 0; i < n; i++) {
        cout << d[i].get << endl;
    }


    return 0;
}