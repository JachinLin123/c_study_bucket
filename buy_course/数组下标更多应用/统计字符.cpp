// @author JachinLin
// Created on 2020-02-29-20:15.
//
#include<iostream>
#include<string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int a[26] = {0};
    int len = s.size();
    for (int i = 0; i < len; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            a[s[i] - 'A']++;
        } else {
            a[s[i] - 'a']++;
        }
    }
    int maxcnt = 0, maxindex = -1;
    for (int i = 0; i < 26; i++) {
        if (maxcnt < a[i]) {
            maxcnt = a[i];
            maxindex = i;
        }
    }
    cout << maxcnt << ' ' << (char)('A' + maxindex) << endl;

    return 0;
}