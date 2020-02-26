// @author JachinLin
// Created on 2020-02-26-20:21.
//

#include <bits/stdc++.h>

using namespace std;

const int n = 5;
int A[n] = {1, 3, 0, 5, 4};

void selectSort(int a[]) {
    for (int i = 0; i < n; ++i) {
        int k = i;
        for (int j = i; j < n; ++j) {
            if(a[j] < a[i]){
                k = j;
            }
        }
        int temp = a[i];
        a[i] = a[k];
        a[k] = temp;
    }
}

int main() {

    selectSort(A);
    for (int i = 0; i < n; ++i) {
        cout << A[i] << endl;
    }
    return 0;
}