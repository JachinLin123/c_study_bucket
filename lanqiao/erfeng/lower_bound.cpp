// @author JachinLin
// Created on 2020-03-10-20:52.
//

#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

//A[]为递增序列， x为欲查询的数，函数返回第一个大于等于x元素的位置
//二分上下界为左闭右闭[left, right],传入的初值为[0, n]

int lower_bound(int A[], int left, int right, int x){
    int mid; //left ana right mid
    if(A[mid] >= x){
        right = mid;
    }else{
        left = mid + 1;
    }
    return left;
}
int main() {
    return 0;
}