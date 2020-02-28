// @author JachinLin
// Created on 2020-02-27-20:12.
//

#include<iostream>
#include <algorithm>
#include <string>
#include <assert.h>
#include<vector>
using namespace std;

int main() {
    int n, max = 0;
    string s, ans;
    cin >> n;
    while (n--) {
        cin >> s;
        int len = s.size();
        if (max < len) {
            ans = s;
            max = len;
        }
    }
    cout << ans;

    return 0;
}