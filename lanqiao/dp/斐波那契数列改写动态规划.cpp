#include <bits/stdc++.h>
#include <cstdio>
#include <iostream>

using namespace std;

const int MAXN = 100;
int dp[MAXN];

//쳲����������ö�̬�滮����

int F(int n) {
	if(n == 0 || n == 1)return 1; //�ݹ�߽�
	if(dp[n] != -1)return dp[n];
	else {
		dp[n] = F(n-1) + F(n-2);//����F(n),��������dp[n]
		return dp[n];//����F(n)
	}
}

// 

int main() {
cout << F(4);
}
