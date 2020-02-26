//
// Created by JachinLin on 2020/2/17.
//
#include<stdio.h>

int main(void) {
    /*********Begin*********/
    int n = 0, sum = 1;
    scanf("%d", &n);
    while (n != 0) {
        sum *= n % 10;
        n /= 10;
    }
    printf("%d", sum);

    /*********End**********/
    return 0;
}

