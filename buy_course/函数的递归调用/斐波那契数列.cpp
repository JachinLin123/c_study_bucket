// @author JachinLin
// Created on 2020-02-28-20:19.
//
#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int n, a, b, p;
    cin >> n >> a >> b >> p;
    if (n <= 2) {
        cout << 1 << endl;
    } else {
        int f1 = 1, f2 = 1, fn = 0;
        for (int i = 3; i <= n; i++) {
            fn = (a * f2 + b * f1) % p;
            f1 = f2;
            f2 = fn;
        }
        cout << fn << endl;
    }

    return 0;
}