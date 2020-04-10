// @author JachinLin
// Created on 2020-02-29-20:21.
//
#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int n;
    int a[105] = {0};
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int ans = 10000;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            ans = min(ans, abs(a[j] - a[i]));
        }
    }
    cout << ans << endl;

    return 0;
}