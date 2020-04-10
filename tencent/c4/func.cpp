#include <iostream>

using namespace std;

#define getX(i,j,k) (i*B+j)*C+k
const int A=10,B=10,C=10;
inline int getXX(int i,int j,int k){
    return (i*B+j)*C+k;
}

void f1(int a = 1) {
    cout << a << endl;
}
void f1(double x){

}
int main() {
    f1(10);
    cout<<getX(0,0,0)<<endl;
    cout<<getXX(0,0,0)<<endl;
    return 0;
}