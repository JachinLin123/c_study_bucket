// @author JachinLin
// Created on 2020-02-26-21:15.
//

#include <bits/stdc++.h>

using namespace std;

const int n = 5;
int A[n] = {0, 3, 4, 5, 1};

void insertSort(int a[]) {
    for (int i = 1; i < n; ++i) {
        int temp = A[i], j = i;
        while (j > 0 && temp < A[j - 1]) {
            A[j] = A[j - 1];
            j--;
        }
        A[j] = temp;
    }
}

int main() {
    insertSort(A);
    for (int i = 0; i < n; ++i) {
        cout << A[i] << endl;
    }
    return 0;
}