// @author JachinLin
// Created on 2020-02-29-20:20.
//
#include<iostream>
using namespace std;

bool have4(int n) {
    while (n) {
        if (n % 10 == 4) {
            return false;
        }
        n /= 10;
    }
    return true;
}
int main() {
    int n, m, cnt = 0;
    cin >> n >> m;
    for (int i = n; i <= m; i++) {
        if (have4(i)) {
            cnt++;
        }
    }
    cout << cnt << endl;

    return 0;
}