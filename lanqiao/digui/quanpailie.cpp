// @author JachinLin
// Created on 2020-03-08-16:46.
//

#include<bits/stdc++.h>
#include <cstdio>

using namespace std;

const int maxn = 11;

//p为当前排列，hashtable记录整数x是否已经在P中
int n, P[maxn], hashTable[maxn] = {false};

//当前处理排列的第index号位

void generate(int index) {
    if (index == n + 1) {
        for (int i = 1; i <= n; ++i) {
            printf("%d", P[i]);
        }
        printf("\n");
        return;
    }
    for (int x = 1; x <= n; ++x) { //枚举1-n，试图将x填入p[index]
        if (hashTable[x] == false) {//如果x不在p[0]--p[index-1]中
            P[index] = x;//令p的第index位为x,即把x加入当前排列
            hashTable[x] = true;
            generate(index + 1);
            hashTable[x] = false;
        }
    }
}

int main() {
    n = 3;//输出1-3的全排列
    generate(1);//从p[1]开始填
    return 0;
}