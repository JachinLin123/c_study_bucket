#include <iostream>
#include <string> // make string class available
#include <cstring> // C-style string library
#include <cassert>
int main() {
    using namespace std;
    char charr1[20];
    char charr2[20] = "jaguar";
    string str1;
    string str2 = "panther";

//=== assignment for string objects and character arrays
    str1 = str2; // copy str2 to str1
    cout << "拷贝后，地址是否相同？"<<(&str1 == &str2) << endl;
    assert(&str1 != &str2);
    strcpy(charr1, charr2); // copy charr2 to charr1

//=== appending for string objects and character arrays
    str1 += " paste"; // add paste to end of str1
    strcat(charr1, " juice"); // add juice to end of charr1

//=== finding the length of a string object and a C-style string
    int len1 = str1.size(); // obtain length of str1
    int len2 = strlen(charr1); // obtain length of charr1
    cout << "The string " << str1 << " contains "
         << len1 << " characters.\n";
    cout << "The string " << charr1 << " contains "
         << len2 << " characters.\n";

    cout << "strcmp："<<strcmp(charr1, charr2) << endl;//c语言风格的字符串比较,charr1更大
    assert(strcmp(charr1, charr2)>0);
    cout << "compare方法："<<(str1.compare(str2)) << endl;//string对象比较，str1更大
    assert(str1.compare(str2)>0);

    cout<<"运算符重载str1<str2?"<<(str1 < str2)<<endl;//运算符重载
    assert(str1>str2);
    return 0;
}