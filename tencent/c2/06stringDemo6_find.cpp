#include <iostream>
#include <cassert>

void find();

void rfind();

void other();

using namespace std;

int main() {
//    find();
//    rfind();
//    other();

    return 0;
}

void other() {
    string s = "cobracobra";
    assert(s.find_first_of("abc") == 0);//参数的任意字符和s匹配成功，即返回索引
    assert(s.find_first_not_of("abc") == 1);//参数的任意字符和s无法匹配，即返回索引
    assert(s.find_last_of("abc") == 9);//参数的任意字符和s匹配成功(从右)，即返回索引
    assert(s.find_last_not_of("abc") == 8);//参数的任意字符和s匹配成功(从右)，即返回索引

}

void rfind() {
    string s = "cobracobra";
    assert(s.rfind("br") == 7);
    assert(s.rfind('o') == 6);
    assert(s.rfind("XXX") == string::npos);

    char *f = "ra";
    assert(s.rfind(f) == 8);
    assert(s.rfind(f, 7) == 3);
}

void find() {
    string s = "cobra";

    cout << "s.find(\"br\")" << s.find("br") << endl;
    assert(s.find("br") == 2);
    cout << "s.find(\'o\')" << s.find('o') << endl;
    assert(s.find('o')==1);

    cout << "s.find(\'xxx\')" << s.find("xxx") << endl;
    cout << "string::npos:" << string::npos << endl;
    assert(s.find("xxx")==string::npos);

    char f[] = "ra";
    s = "rarara";
    cout << "s.find(f)" << s.find(f) << endl;//0
    cout << "s.find(f,1)" << s.find(f, 1) << endl;//2
    assert(s.find(f, 1)==2);
}
