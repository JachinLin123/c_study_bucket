// @author JachinLin
// Created on 2020-03-10-20:13.
//

#include<bits/stdc++.h>
#include <stdio.h>

using namespace std;
//A[]为严格递增，left为二分下界，right为二分上界，x为欲查询的数

//二分区间为左闭右闭的[left, right],传入的初值为[0, n-1]
int binarySearch(int A[], int left, int right, int x) {
    int mid;    //mid 为left和right的中点
    while (left <= right) {  //如果left大于right的话就没有办法形成闭区间
        mid = (left + right) / 2;
        if (A[mid] == x) return mid; //找到x，返回下标
        else if (A[mid] > x) {    //如果中间 的数大于x
            right = mid - 1;    //在[left,mid-1]里面查找
        } else {
            left = mid + 1; //往右自区间[mid + 1, right]里查找
        }
    }
    return -1;  //查找失败，返回-1
}

int main() {
    const int n = 10;
    int A[n] = {1, 3, 4, 6, 7, 8 ,10, 11, 12, 13};
    printf("%d %d\n", binarySearch(A, 0, n-1, 6), binarySearch(A, 0, n-1, 9));
    return 0;
}