// @author JachinLin
// Created on 2020-02-27-19:53.
//


#include<iostream>
#include <algorithm>
#include <string>
#include <assert.h>
#include<vector>

using namespace std;

int s[10000] = {0};
vector<int> ans;

int rev(int s) {
    int ret = 0;
    while (s) {
        ret = ret * 10 + s % 10;
        s /= 10;
    }
    return ret;
}

int main() {
    int s, cnt;
    cin >> s;
    ans.clear();
    ans.push_back(s);
    int t = rev(s);
    while (s != t) {
        s += t;
        ans.push_back(s);
        t = rev(s);
    }
    cout << ans.size() - 1 << endl;
    cout << ans[0];
    for (int i = 1; i < ans.size(); i++) {
        cout << "--->" << ans[i];
    }
    cout << endl;

    return 0;
}