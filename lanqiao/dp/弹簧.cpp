#include <bits/stdc++.h>

using namespace std;

const int MAXN=1007;
const int mod = 100007;
int dp[MAXN] = {0};
int a[MAXN] = {0};

//只能踩奇数格 我的解法 
int fun1(int n){
	
	for(int i = n; i >= 1; i--){
		dp[i] = dp[i+a[i]] + 1;
		ans = max(ans, dp[i]);
	}
	return ans;
}


int main(){
	freopen("spring.in", "r", stdin);
	freopen("spring.out", "w", stdout);
	int n = 0;
	cin >> n;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	} 
	printf("%d\n", fun1(n));
	return 0;
} 
