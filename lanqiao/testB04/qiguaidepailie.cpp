// @author JachinLin
// Created on 2020-04-10-20:20.
//

#include<bits/stdc++.h>

using namespace std;

const int N = 2;
using Number = array<int, N>;
using Value = unsigned char;
const Value INF = 127;

Value dist(const Number& a, const Number& b){
    for (int i = N; i > 0 ; --i) {
        book ok = true;
        for (int j = 0; j < i; ++j) {
            if (a[N-i+j]!=b[j]){
                ok = false;
                break;
            }
        }
        if(ok) return N-i;
    }
    return N;
}

int n;
vector<Number > numbers;
vector<vector<Value>> dists;
vector<vector<Value>> dp;



int main() {
    return 0;
}