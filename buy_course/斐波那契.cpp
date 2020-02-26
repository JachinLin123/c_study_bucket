//
// Created by Administrator on 2020/2/24.
//
/**
 * 求斐波那契数
 */
#include <iostream>

using namespace std;
int f[100005];
int mod = 1e9 + 7;

int main() {
    int n;
    cin >> n;
    f[1] = f[2] = 1;
    for (int i = 3; i <= n; i++) {
        /*每次都去摸和最后再取模值相等*/
        f[i] = (f[i - 1] + f[i - 2]) % mod;
    }
    cout << f[n];
    return 0;
}
