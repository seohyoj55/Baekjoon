#include <iostream>
using namespace std;

long long d[1000001] = { 0 };

long long dp(int N) {
	if (N == 1) return 1;
	if (N == 2) return 2;
	if (N == 3) return 4;
	if (d[N]) return d[N];
	return d[N] = (dp(N - 1) + dp(N - 2) + dp(N - 3)) % 1000000009;
}

int main() {
	int T, N;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		cin >> N;
		cout << dp(N) << endl;
	}

	return 0;
}