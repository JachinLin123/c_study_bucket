//
// Created by Administrator on 2020/2/12.
//
/**
 * 回文串判断
 */

#include <bits/stdc++.h>
#include <cstring>
#include <cstdio>

using namespace std;

const int maxn = 256;

bool judge(char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; ++i) {
        if (str[i] != str[len - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    char str[maxn];
    while (gets(str)) {
        bool flag = judge(str);
        if (flag == true) {
            printf("YES\n");

        } else {
            printf("NO\n");
        }
    }
    return 0;
}
