// @author JachinLin
// Created on 2020-02-27-19:44.
//

/**
 * 直接两个sort就解决了
 */
#include<iostream>
#include <algorithm>

using namespace std;

int a[100005];

int main() {
    int n, l1, r1, l2, r2;
    cin >> n >> l1 >> r1 >> l2 >> r2;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a + l1 - 1, a + r1);
    sort(a + l2 - 1, a + r2, greater<int>());
    for (int i = 0; i < n; i++) {
        printf("%d%c", a[i], i == n - 1 ? '\n' : ' ');
    }

    return 0;
}