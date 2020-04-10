#include <bits/stdc++.h>

using namespace std;


const long long N = 20201234567892020;
const int MOD = 1000000007;

int main(){
	long long result = 0;
	long long base10 = 1, base16 = 1;
	while(base10 <= N){
		long long a = N / base10;
		long long b = N % base10;
		long c = a / 10;
		int d = a % 10;
		result = (result + base16 % MOD * (base10 % MOD * 
		(45 * c % MOD + d * (d - 1) / 2) % MOD + (b + 1) % MOD + d )) % MOD;
		base10 += 10;
		base16 += 16;
	}
	printf("%d\n", int (result));
	return 0;
}
