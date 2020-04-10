#include <bits/stdc++.h>

using namespace std;

const int MAXN=10007;
const int mod = 100007;
int dp[MAXN]={0};

/**
 *这是只能踩一格或者两格 
 */
int fun1(int n){
	dp[0] = 1;
	dp[1] = 1;
	for(int i = 2; i <= n; i++){
		dp[i] = (dp[i-1] + dp[i-2])%mod;
	}
	return dp[n];
}

//只能踩奇数格 我的解法 
int fun2(int n){
	dp[0] = 1;
	dp[1] = 1;
	dp[2] = 1;
	for(int i = 3; i <= n; i++){
		dp[i] = (dp[i-1] + dp[i-2])%mod;
	}
	return dp[n];
}

//只能踩奇数,官方解法
int offical_solve(int n){
	dp[0] = 1;
	for(int i = 1; i <= n; ++i){
		dp[i] = 0;
		for(int j = i-1; j >= 0; j -= 2){
			dp[i] += dp[j];
			dp[i] %= mod;
		}
	}
	return dp[n];
} 

int main(){
	int n = 4;
	printf("%d\n", offical_solve(n));
	return 0;
} 
