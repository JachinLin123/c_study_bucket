#include <iostream>

using namespace std;

int main() {

    string snake1("cobra");
    string snake2("coral");
    char snake3[20] = "anaconda";

    // operator<(const string &, const string &)
    cout << "snake1 < snake2 ?" << (snake1 < snake2) << endl;
    // operator==(const string &, const char *)
    cout << "snake1 == snake3 ？" << (snake1 == snake3) << endl;
    // operator!=(const char *, const string &)
    cout << "(snake3 != snake2) ？" << (snake3 != snake2) << endl;

    return 0;
}