// @author JachinLin
// Created on 2020-03-08-20:46.
//

#include <bits/stdc++.h>
#include <cstdio>

using namespace std;

int main() {
    int count[10];
    for (int i = 0; i < 10; ++i) {//记录0-9的个数
        scanf("%d", &count);
    }
    for (int i = 0; i < 10; ++i) {//从1-9之间选择不为0的最小数
        if(count[i] > 0){
            printf("%d", i);
            count[i]--;
            break;//找到一个之后就中断
        }
    }
    for (int i = 0; i < 10; ++i) {//0-9输出对应的数字
        for (int j = 0; j < count[i]; ++j) {
            printf("%d", i);
        }
    }
    return 0;
}