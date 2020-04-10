#include <deque>
#include <queue>
#include <iostream>

using namespace std;

int main(){
   queue<string> q;
   q.push("zhanglong");
   q.push("zhaohu");
   q.push("wangchao");
   q.push("mahan");

   while(!q.empty()){
       cout<<q.front()<<endl;
       q.pop();
   }
    return 0;
}