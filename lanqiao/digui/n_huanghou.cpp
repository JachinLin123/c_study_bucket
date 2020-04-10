// @author JachinLin
// Created on 2020-03-08-17:15.
//

#include<bits/stdc++.h>
#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

const int maxn = 11;
int P[maxn];
int n = 8;
bool hashTable[maxn] = {false};
int count1 = 0;

void generateP(int index) {
    if (index == n + 1) {//递归边界，生成一个排列
        bool flag = true; //flag=true表示当前为一个合法排列
        for (int i = 1; i <= n; ++i) {//遍历任意两个皇后
            for (int j = i + 1; j <= n; ++j) {
                if (abs(i - j) == abs(P[i] - P[j])) {//如果在一条对角线上不合法
                    flag = false;
                }
            }
        }
        if (flag)
            count1++;
        return;
    }
    for (int x = 1; x <= n; ++x) {
        if (hashTable[x] == false) {
            P[index] = x;
            hashTable[x] = true;
            generateP(index + 1);
            hashTable[x] = false;
        }
    }
}

void generateP1(int index) {
    if (index == n + 1) {
        count1++;
        return;
    }
    for (int x = 1; x <= n; ++x) {
        if (hashTable[x] == false) {
            bool flag = true;
            for (int pre = 1; pre < index; ++pre) {
                if (abs(index - pre) == abs(x - P[pre])) {
                    flag = false;
                    break;
                }
            }
            if (flag) {
                P[index] = x;
                hashTable[x] = true;
                generateP1(index + 1);
                hashTable[x] = false;
            }
        }
    }
}

int main() {
    generateP1(1);
    printf("%d", count1);
    return 0;
}