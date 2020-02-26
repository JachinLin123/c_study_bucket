//
// Created by Administrator on 2019/8/18.
//
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
struct node{
    ll valu;
    int flag;
    node(ll a,int b)
    {
        valu = a;
        flag = b;
    }

    friend operator<(node a, node b) {
        if (a.valu == b.valu) {
            return a.flag < b.flag;
            return a.valu > b.valu;
        }
    }
};
priority_queue<node>p;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,t;
    ll temp;
    cin>>t;
    ll ans;
    while(t--){
        cin>>n;
        ans=0;
        for (int i = 0; i < n; ++i) {
            cin>>temp;
            if(!p.empty()){
                node T=p.pop();
                if(T.valu<temp){
                    ans=ans+(temp-T.valu);
                    p.pop();
                    p.push(node(temp,1));
                }
            }
            p.push(node(temp,0));
        }
        int sum =0;
        while(!p.empty()){
            node temp=p.pop();
            if(temp.flag==1){
                sum++;
                p.pop();
            }
            cout<<ans<<""<<sum*2<<endl;
        }
    }
    return 0;
}