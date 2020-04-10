// @author JachinLin
// Created on 2020-02-29-20:21.
//
#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int x = 100; x > 0; x--) {
        int k  = (n / 52 - 7 * x) / 21;
        if (k > 0 && (21 * k + 7 * x == n / 52)) {
            cout << x << endl << k << endl;
            break;
        }
    }

    return 0;
}