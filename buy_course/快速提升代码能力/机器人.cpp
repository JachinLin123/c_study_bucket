// @author JachinLin
// Created on 2020-02-27-19:56.
//

#include<iostream>
#include <algorithm>
#include <string>
#include <assert.h>
#include<vector>
using namespace std;

int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};
int main() {
    int n, x, y, t, d;
    string s;
    cin >> n;
    x = y = 0;
    d = 1;
    while (n--) {
        cin >> s >> t;
        if (s[0] == 'b') {
            d = (d + 2) % 4;
        } else if (s[0] == 'l') {
            d = (d + 3) % 4;
        } else if (s[0] == 'r') {
            d = (d + 1) % 4;
        }
        x += dx[d] * t;
        y += dy[d] * t;
    }
    cout << x << ' ' << y << endl;

    return 0;
}