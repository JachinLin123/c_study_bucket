// @author JachinLin
// Created on 2020-02-27-20:10.
//

#include<iostream>
#include <algorithm>
#include <string>
#include <assert.h>
#include<vector>
using namespace std;
string a;

int main() {
    int cnt = 0;
    cin >> a;
    int len = a.size();
    for (int i = 0; i < len; i++) {
        if (a[i] == 'A') {
            cnt++;
        }
    }
    cout << cnt;

    return 0;
}