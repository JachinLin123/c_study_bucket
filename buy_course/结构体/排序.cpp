// @author JachinLin
// Created on 2020-02-28-19:49.
//
#include<iostream>
#include<algorithm>
using namespace std;

struct score{
    int n;
    int s;
} t[100];

bool cmp(score a, score b) {
    return a.s > b.s;
}
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> t[i].s;
        t[i].n = i + 1;
    }
    sort(t, t + n, cmp);
    for (int i = 0; i < n; i++) {
        printf("%d%c", t[i].n, i == n - 1 ? '\n' : ' ');
    }

    return 0;
}