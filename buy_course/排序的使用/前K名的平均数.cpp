// @author JachinLin
// Created on 2020-02-28-19:48.
//
#include <iostream>
#include <algorithm>
#include<iomanip>
using namespace std;

int main() {
    int n, k;
    int sum = 0;
    cin >> n;
    int s[30];
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
    sort(s, s + n, greater<int>());
    cin >> k;
    for (int i = 0; i < k; i++) {
        sum += s[i];
    }
    cout << fixed << setprecision(2) << sum*1.0 / k << endl;

    return 0;
}