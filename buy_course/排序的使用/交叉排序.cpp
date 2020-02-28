// @author JachinLin
// Created on 2020-02-28-19:47.
//
#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int n, l1, r1, l2, r2;
    cin >> n >> l1 >> r1 >> l2 >> r2;
    int s[10000];
    for ( int i = 0; i < n; i++) {
        cin >> s[i];
    }
    sort(s + l1 - 1, s + r1);
    sort(s + l2 - 1, s + r2, greater<int>());
    for ( int i = 0; i < n; i++) {
        printf("%d%c", s[i], i == n-1 ? '\n' : ' ');
    }

    return 0;
}