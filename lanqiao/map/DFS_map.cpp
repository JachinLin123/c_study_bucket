//
// Created by Administrator on 2019/11/26.

//
#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
const int MAXV = 1000;  //最大顶点数
const int INF = 1000000000; //设置INF为一个很大的数

//(1)邻接矩阵版本
/*
int n, G[MAXV][MAXV];   //n为顶点数, MAXV为最大顶点数

bool vis[MAXV] = { false }; //如果顶点i已经被访问, 则vis[i] == true. 初值为false

void DFS(int u, int depth){ //u为当前访问的顶点编号, depth为深度
    vis[u] = true;  //设置u已经被访问
    //如果需要对u进行一些操作，可以在这里进行
    //下面对所有从u出发能到达的分支顶点进行枚举
    for (int v = 0; v < n; ++v) {
        if(!vis[v] && G[u][v] != INF){  //如果u未被访问, 且u可到达v
            DFS(v, depth + 1);  //访问v, 深度加一
        }
    }
}

void DFSTrave(){    //遍历图G
    for (int u = 0; u < n; ++u) {   //对每个顶点u
        if(!vis[u]){    //如果u为被访问
            DFS(u,1);   //访问u和u所在的连通块, 1表示初始为第一层
        }
    }
}
*/

//(2)邻接表版本
vector<int> Adj[MAXV];
int n;
bool vis[MAXV] = { false };

void DFS(int n, int depth){

}

int main()
{

    return 0;
}
