#include <iostream>
using namespace std;

long long d[91];

long long dp(int N) {
	if (N == 1)
		return 1;
	if (N == 2)
		return 1;
	if (d[N])
		return d[N];
	return d[N] = dp(N - 1) + dp(N - 2);
}

int main() {
	int N;
	cin >> N;
	cout << dp(N) << endl;
	return 0;
}