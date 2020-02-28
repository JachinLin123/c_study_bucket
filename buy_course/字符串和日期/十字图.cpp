// @author JachinLin
// Created on 2020-02-27-20:39.
//
/**
 * 解法一
 */
/*
#include<iostream>
#include <algorithm>
#include <string>
#include <assert.h>
#include<vector>
using namespace std;

char s[130][130];
int main() {
    int n;
    cin >> n;
    int x, y;
    x = y = 0;
    for (int i = 0; i < 4 * n + 5; i++) {
        for (int j = 0; j < 4 * n + 5; j++) {
            s[i][j] = '.';
        }
    }

    for (int i = 0; i < n; i++, x+=2, y+=2) {
        for (int j = y + 2; j < y + 2 + 4 * (n - 1 - i) + 5; j++) {
            s[x][j] = '$';
            s[x + 4 * (n - i) + 4][j] = '$';
        }

        s[x + 1][y + 2] = s[x + 1][y + 2 + 4 * (n - 1 - i) + 4] = '$';
        s[x + 4 * (n - i) + 3][y + 2] = s[x + 4 * (n - i) + 3][y + 2 + 4 * (n - 1 - i) + 4] = '$';

        for (int j = 0; j < 3; j++) {
            s[x + 2][y + j] = s[x + 2][y + 4 * (n - i) + 2 + j] = '$';
            s[x + 4 * (n - i) + 2][y + j] = s[x + 4 * (n - i) + 2][y + 4 * (n - i) + 2 + j] = '$';
        }

        for (int j = 0; j < 4 * (n - i) - 2; j++) {
            s[x + 3 + j][y] = s[x + 3 + j][y + 4 * (n - i) + 4] = '$';
            s[x + 4 * (n - i) + 1 - j][y] = s[x + 4 * (n - i) + 1 - j][y + 4 * (n - i) + 4] = '$';
        }
        //s[x + 3][y] = s[x + 3][y + 4 * (n - i) + 4] = '$';
        //s[x + 4 * (n - i) + 1][y] = s[x + 4 * (n - i) + 1][y + 4 * (n - i) + 4] = '$';

        s[x + 4][y] = s[x + 4][y + 4 * (n - i) + 4] = '$';
    }

    for (int j = 0; j < 5; j++) {
        s[(4*n+5)/2 - 2 + j][(4*n+5)/2] = '$';
    }
    for (int j = 0; j < 5; j++) {
        s[(4*n+5)/2][(4*n+5)/2-2+j] = '$';
    }

    for (int i = 0; i < 4 * n + 5; i++) {
        for (int j = 0; j < 4 * n + 5; j++) {
            cout << s[i][j];
        }
        cout << endl;
    }

    return 0;
}
*/

/**
 * 解法二
 */
