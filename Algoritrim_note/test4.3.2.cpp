//
// Created by Administrator on 2020/2/12.
//
/**
 * 递归的测试
 */

#include <stdio.h>

int F(int n) {
    if (n == 0)
        return 1;
    else
        return F(n - 1) * n;
}

int main() {
    int n = 10;
    printf("%d", F(n));
    return 0;
}

