//
// Created by Administrator on 2020/2/24.
//

/**
* 求一个矩阵子阵最大和
*/

#include<iostream>

using namespace std;

int a[51][51] = {0};

int main() {
    int n, m;
    //行，列
    cin >> n >> m;
    int ans = -2500000;
    /*输入初始矩阵*/
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    for (int up = 0; up < n; up++) {
        for (int down = up; down < n; down++) {
            for (int left = 0; left < m; left++) {
                for (int right = left; right < m; right++) {
                    int t = 0;
                    for (int i = up; i <= down; i++) {
                        for (int j = left; j <= right; j++) {
                            t += a[i][j];
                        }
                    }
                    if (ans < t) ans = t;
                }
            }
        }
    }
    cout << ans;

    return 0;
}