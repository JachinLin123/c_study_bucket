#include <iostream>
#include <string>
#include <cstring>
#include <cassert>

using namespace std;

int main(){
    string s("hello world");
    const char *ss = s.c_str();
    string sub = s.substr(6,5);
    assert(sub=="world");
    return 0;
}
