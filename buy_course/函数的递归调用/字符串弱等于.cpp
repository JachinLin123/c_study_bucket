// @author JachinLin
// Created on 2020-02-28-20:20.
//
#include <iostream>
#include <string>
using namespace std;

bool f(string a, string b) {
    if (a == b) {
        return true;
    } else if (a.size() == b.size()
               && a.size() % 2 == 0) {
        string a1, a2, b1, b2;
        int alen = a.size(),
                blen = b.size();
        a1 = a.substr(0, alen / 2);
        a2 = a.substr(alen / 2, alen);
        b1 = b.substr(0, blen / 2);
        b2 = b.substr(blen / 2, blen);
        return f(a1, b1) && f(a2, b2)
               || f(a1, b2) && f(a2, b1);
    } else {
        return false;
    }
}
int main() {
    string a, b;
    cin >> a >> b;
    if (f(a, b)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}