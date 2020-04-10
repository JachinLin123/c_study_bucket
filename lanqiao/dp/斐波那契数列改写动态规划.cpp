#include <bits/stdc++.h>
#include <cstdio>
#include <iostream>

using namespace std;

const int MAXN = 100;
int dp[MAXN];

//斐波那契数列用动态规划来做

int F(int n) {
	if(n == 0 || n == 1)return 1; //递归边界
	if(dp[n] != -1)return dp[n];
	else {
		dp[n] = F(n-1) + F(n-2);//计算F(n),并保存至dp[n]
		return dp[n];//返回F(n)
	}
}

// 

int main() {
cout << F(4);
}
