// @author JachinLin
// Created on 2020-02-28-19:50.
//
#include<iostream>
#include<algorithm>

using namespace std;

struct data {
    int n;
    int h;
    int get;
} d[1001];

bool cmp(data a, data b) {
    return a.h < b.h;
}

bool cmp2(data a, data b) {
    return a.n < b.n;
}

int main() {
    int n, m;
    int ball[1001];
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> d[i].h;
        d[i].n = i + 1;
        d[i].get = 0;
    }
