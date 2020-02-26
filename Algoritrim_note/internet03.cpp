//
// Created by JachinLin on 2020/2/17.
//
#include<stdio.h>

int main(void) {
    /*********Begin*********/
    int sum = 0, p = 1, n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        p *= i;
        sum += p;
    }
    printf("%d",sum);
    /*********End**********/
    return 0;
}

