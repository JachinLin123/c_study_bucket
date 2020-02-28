//
// Created by Administrator on 2020/2/24.
//
/**
 * 给出一个矩阵，输出旋转90度后的值
 */

#include<iostream>

using namespace std;
int a[202][202] = {0};

int main() {
    int r, c;
    cin >> r >> c;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < c; i++) {
        for (int j = r - 1; j >= 0; j--) {
            if (j == 0) {
                cout << a[j][i] << endl;
            } else {
                cout << a[j][i] << " ";
            }
        }
    }
    return 0;
}