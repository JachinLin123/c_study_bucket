//
// Created by JachinLin on 2020/2/17.
//
#include<stdio.h>

int main(void) {
    /*********Begin*********/
    int num = 0, temp = 0;
    double sum = 0.00, scores = 0.00;
    printf("the number of students:");
    scanf("%d", &num);
    if (num <= 0) {
        printf("the scores:");
        printf("average=0.00");
    } else {
        temp = num;
        printf("the scores:");
        while (temp--) {
            scanf("%lf", &scores);
            sum += scores;
        }
        printf("average=%.2f", sum / num);


    }

    /*********End**********/
    return 0;
}

