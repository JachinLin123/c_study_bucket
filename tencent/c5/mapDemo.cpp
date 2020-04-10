#include <iostream>
#include <map>

using namespace std;

int main() {
    map<string, string,greater<string>> m;
    m.insert({"2", "zhang"});
    m.insert(make_pair("1", "li"));
    m.insert(make_pair("1", "Xiao"));//插不进去

    cout << m["2"] << endl;
    m["1"] = "Ali";

    for (auto it = m.begin(); it != m.end(); it++) {
        cout << it->first << "" << it->second << endl;
    }

    cout<<"===================="<<(m.find("3")==m.end())<<endl;
    return 0;
}