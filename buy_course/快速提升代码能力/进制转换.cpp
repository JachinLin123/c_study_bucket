// @author JachinLin
// Created on 2020-02-27-19:47.
//

#include<iostream>
#include <algorithm>

using namespace std;

int a[1005] = {0};

int main() {
    int n, r, i = 0;
    cin >> n >> r;
    if (n < 0) {
        cout << '-';
        n = fabs(n);//取绝对值
    }

    while (n > r || n == r) {
        a[i++] = n % r;
        n /= r;
    }
    a[i] = n;
    for (int j = i; j > -1; j--) {
        printf("%c", a[j] >= 10 ? a[j] + 55 : a[j] + '0');
    }

    return 0;
}