#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
using namespace std;

long long d[201][201];

int dp(int N, int K) {
	if (K == 1)
		return d[N][K] = 1;
	if (K == 2)
		return d[N][K] = N + 1;
	if (d[N][K] != 0)
		return d[N][K];

	for (int i = 0; i < N; i++)
		d[N][K] += dp(N - i, K - 1);
	d[N][K] += 1;

	return d[N][K] %= 1000000000;
}

int main(void) {
	int N, K;
	cin >> N >> K;
	cout << dp(N, K);
}