//
// Created by Administrator on 2020/2/24.
//
/**
 * 把串p复制到q位置
 *  p[i]
 *  或者 *(p+i)
 */
#include <bits/stdc++.h>

using namespace std;

int main() {
    char *p = "abcde";
    char *q = (char *) malloc(strlen(p) + 1);
    for (int i = 0; p[i]; ++i) {
        q[i] = p[i];
    }
    q[i] = 0;
    return 0;
}