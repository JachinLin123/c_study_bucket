// @author JachinLin
// Created on 2020-02-29-20:16.
//
#include<iostream>
using namespace std;

int main() {
    int a, b;
    int m1[2][2], m2[2][2];
    int ans[22] = {0};
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> m1[i][j];
        }
    }
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> m2[i][j];
        }
    }
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            ans[m1[i][1] + m2[j][1]] += m1[i][0] * m2[j][0];
        }
    }
    for (int i = 20; i >= 0; i--) {
        if (ans[i] != 0) {
            cout << ans[i] << ' ' << i << endl;
        }
    }

    return 0;
}