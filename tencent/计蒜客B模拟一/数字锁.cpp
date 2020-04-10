#include <bits/stdc++.h>

using namespace std;

const int INF = 1000000000;
const int MOD = 10;
int a[9] = {
	7, 1, 4,
	3, 6, 8,
	9, 5, 2,
};
int b[9];
int check() {
	if(
	    (a[0] + b[0] + b[1] + b[3]) % MOD
	    || (a[1] + b[0] + b[1] + b[2] + b[4]) % MOD
	    || (a[2] + b[1] + b[2] + b[5]) % MOD
	    || (a[3] + b[0] + b[3] + b[4] + b[6]) % MOD
	    || (a[4] + b[1] + b[3] + b[4] + b[5] + b[7]) % MOD
	    || (a[5] + b[2] + b[4] + b[5] + b[8]) % MOD
	    || (a[6] + b[3] + b[6] + b[7]) % MOD
	    || (a[7] + b[4] + b[6] + b[7] + b[8]) % MOD
	    || (a[8] + b[5] + b[7] + b[8]) % MOD)return INF;
	int result = 0;
	for(int i = 0; i < 9; ++i) cout << b[i] << " \n"[i % 3 == 2];
	for(int i = 0; i < 9; ++i) result += b[i];
	return result;
}

#define LOOP(X) for(X = 0; X < MOD; ++X)

int main() {
	int result = INF;
	LOOP(b[0]) LOOP(b[1]) LOOP(b[2])
	LOOP(b[3]) LOOP(b[4]) LOOP(b[5])
	LOOP(b[6]) LOOP(b[7]) LOOP(b[8])
	result = min(result, check());
	printf("%d\n", result);

	return 0;
}
