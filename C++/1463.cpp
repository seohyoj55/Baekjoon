#include <iostream>
#include <algorithm>
using namespace std;

long long d[1000001];

long long dp(long long n) {
	if (n == 1) return d[1] = 0;
	if (n == 2) return d[2] = 1;
	if (n == 3) return d[3] = 1;
	if (d[n])
		return d[n];
	if (n % 3 == 0 && n % 2 == 0)
		return d[n] = min({ dp(n / 2),dp(n / 3) }) + 1;
	if (n % 3 == 0)
		return d[n] = min(dp(n - 1), dp(n / 3)) + 1;
	if (n % 2 == 0)
		return d[n] = min(dp(n - 1), dp(n / 2)) + 1;
	return d[n] = dp(n - 1) + 1;
}

int main() {
	long long n;
	scanf("%lld", &n);
	printf("%lld", dp(n));
	return 0;
}