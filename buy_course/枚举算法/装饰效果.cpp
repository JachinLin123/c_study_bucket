// @author JachinLin
// Created on 2020-02-29-20:19.
//
#include<iostream>
using namespace std;

int main() {
    int n, max = 0;
    int c[1005] = {0};
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> c[i];
    }
    int t;
    for (int i = 0; i < n; i++) {
        t = 0;
        for (int j = i; j < n; j++) {
            t += c[j];
            if (max < t) {
                max = t;
            }
        }
    }
    cout << max << endl;

    return 0;
}