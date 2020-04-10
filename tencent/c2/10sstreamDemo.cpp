#include <iostream>
#include <sstream>

using namespace std;

int main() {
    stringstream ss;
//    double price = 380.0;
//    char *ps = " for a copy of the ISO/EIC C++ standard!";
//    ss.precision(2);
//    ss << fixed;
//    ss << "Pay only CHF " << price << ps << endl;
////    cout << ss.str() << endl;//将缓冲区的内容转化为字符串
//
//    string word;
//    while (ss >> word) {
//        cout << word << endl;
//    }

    string s = "12345";
    int x;
    ss.clear();
    ss<<s;
    ss>>x;
    cout << x << endl;

    ss.clear();
    int y = 1024;
    string sy;
    ss<<y;
    ss>>sy;
    cout<<sy<<endl;
    return 0;
}

//c语言 快读模板