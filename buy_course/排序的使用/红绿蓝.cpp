// @author JachinLin
// Created on 2020-02-28-19:47.
//
#include<iostream>
#include <algorithm>
#include <string>
#include <assert.h>
#include<vector>
using namespace std;

string s;
int main() {
    int len, ans = 0;
    int b, g, r;
    b = g = r = 0;
    cin >> s;
    len = s.size();
    sort(s.begin(), s.end());
    for (int i = 0; i < len; i++) {
        if (s[i] == 'B') {
            b++;
        } else if (s[i] == 'G'){
            g++;
        } else {
            r++;
        }
    }
    b /= 3;
    g /= 2;
    ans = b;
    if (ans > g) ans = g;
    if (ans > r) ans = r;
    cout << s << endl;
    cout << ans << endl;

    return 0;
}