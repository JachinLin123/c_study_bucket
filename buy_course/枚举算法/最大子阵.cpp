// @author JachinLin
// Created on 2020-02-29-20:21.
//
#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int a[55][55] = {0};
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    int ans = -50000;
    for (int u = 0; u < n; u++) {
        for (int d = u; d < n; d++) {
            for (int l = 0; l < m; l++) {
                for (int r = l; r < m; r++) {
                    int sum = 0;
                    for (int i = u; i <= d; i++) {
                        for (int j = l; j <= r; j++) {
                            sum += a[i][j];
                        }
                    }
                    ans = max(ans, sum);
                }
            }
        }
    }
    cout << ans << endl;

    return 0;
}