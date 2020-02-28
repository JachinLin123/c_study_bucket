// @author JachinLin
// Created on 2020-02-28-20:19.
//
#include<iostream>
#include<algorithm>
using namespace std;

int ackmann(int m, int n) {
    if (m == 0) {
        return ++n;
    } else if (m > 0 && n == 0) {
        return ackmann(m - 1, 1);
    } else {
        ackmann(m - 1, ackmann(m, n - 1));
    }
}
int main() {
    int m, n;
    cin >> m >> n;
    cout << ackmann(m, n) << endl;

    return 0;
}