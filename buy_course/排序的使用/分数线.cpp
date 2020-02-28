// @author JachinLin
// Created on 2020-02-28-19:45.
//

#include <iostream>
#include <algorithm>
using namespace std;
int s[100005] = {0};
int main() {
    int n, line, num;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
    sort(s, s + n, greater<int>());
    line = -1;
    num = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] >= s[n/2]) {
            num++;
        } else {
            break;
        }
    }
    cout << s[n/2] << ' ' << num;

    return 0;
}