// @author JachinLin
// Created on 2020-02-28-19:50.
//
#include<iostream>
#include<algorithm>
using namespace std;

struct data {
    string name;
    int s[5];
} d[100];

int si;
bool cmp(data a, data b) {
    if (a.s[si] != b.s[si]) {
        return a.s[si] > b.s[si];
    } else {
        return a.name < b.name;
    }
}
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> d[i].name;
        for (int j = 0; j < 4; j++) {
            cin >> d[i].s[j];
            d[i].s[4] += d[i].s[j];
        }
    }
    for (int i = 0; i < 5; i++) {
        si = i;
        sort(d, d + n, cmp);
        for (int j = 0; j < 4; j++) {
            if (j == 3) {
                cout << d[j].name << endl;
            } else {
                cout << d[j].name << ' ';
            }
        }
    }

    return 0;
}
