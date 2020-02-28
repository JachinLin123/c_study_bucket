// @author JachinLin
// Created on 2020-02-27-20:14.
//

#include<iostream>
#include <algorithm>
#include <string>
#include <assert.h>
#include<vector>
using namespace std;

string s;
int main() {
    cin >> s;
    int len = s.size();
    if ((s[len-1] - '0') % 2 == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}