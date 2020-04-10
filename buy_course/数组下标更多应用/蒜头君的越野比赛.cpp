// @author JachinLin
// Created on 2020-02-29-20:15.
//
#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n, k, a, b, tp;
    vector<int> t;
    scanf("%d%d", &n, &k);
    t.push_back(0);
    t.push_back(0);
    for (int i = 2;i <= n; i++) {
        cin >> tp;
        t.push_back(tp);
    }
    vector<long long> sum;
    sum.push_back(0);
    sum.push_back(0);
    for (int i = 2; i <= n; i++) {
        sum.push_back(sum[i - 1] + t[i]);
    }
    while (k--) {
        scanf("%d%d", &a, &b);
        printf("%lld%c", sum[b] - sum[a], k == 0 ? '\n' : ' ');
    }

    return 0;
}