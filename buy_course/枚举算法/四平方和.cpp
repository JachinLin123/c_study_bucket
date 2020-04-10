// @author JachinLin
// Created on 2020-02-29-20:18.
//
#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ans[5] = {0};
    for (int a = 0; a * a <= n; a++) {
        for (int b = a; a * a + b * b <= n; b++) {
            for (int c = b; a * a + b * b + c * c <= n; c++) {
                int d = sqrt(n - a * a - b * b - c * c);
                if (a * a + b * b + c * c + d * d == n) {
                    cout << a << ' ' << b << ' ' << c << ' ' << d << endl;
                    return 0;
                }
            }
        }
    }

    return 0;
}