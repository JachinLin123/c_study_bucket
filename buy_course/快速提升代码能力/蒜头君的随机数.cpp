// @author JachinLin
// Created on 2020-02-27-19:34.
//
/**
 * 用hashMap也行
 */
#include<iostream>
#include <algorithm>

using namespace std;

int a[1005] = {0};

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    int cnt = unique(a, a + n) - a;
    cout << cnt << endl;
    for (int i = 0; i < cnt; i++) {
        if (a[i] != 0) {
            printf("%d%c", a[i], i == cnt - 1 ? '\n' : ' ');
        }
    }

    return 0;
}