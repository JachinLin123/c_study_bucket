#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    char s[] = "123.432,432";
    double f1;
    int f2;
    int n;
    sscanf(s, "%lf,%d%n", &f1, &f2, &n);
    cout<<f1<<" "<<f2<<" "<<n;

    return 0;
}