//
// Created by Administrator on 2020/2/24.
//

#include<iostream>
using namespace std;
int main()
{
    int a,b,temp,r,p;
    cout<<"请输入两个数:"<<endl;
    cin>>a>>b;
    p=a*b;
    if(a<b)
    {
        temp=a;
        a=b;
        b=temp;       //按从大到小的顺序排列
    }
    while(b!=0)
    {
        r=a%b;
        a=b;                              / /循环求余数
                b=r;
    }
    cout<<"最大公约数为:"<<a<<endl;  //a就是上一步的余数。上一步的余数就是b，也就是上一步的r。
    cout<<"最小公倍数为:"<<p/a<<endl;
    return 0;
}

