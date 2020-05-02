#include <iostream>
#include <algorithm>
using namespace std;

int T[16], P[16], N;
int arr[16][16];

int dp(int d, int b) {
	if (d > N)
		return 0;
	if (d + T[d] == N + 1)
		return arr[d][b] = max(P[d], dp(d + 1, d));
	if (arr[d][b])
		return arr[d][b];
	if (d + T[d] <= N + 1)
		return arr[d][b] = max(dp(d + T[d], d) + P[d], dp(d + 1, d));
	else
		return arr[d][b] = dp(d + 1, d);
}

int main() {
	int i;
	cin >> N;
	for (i = 1; i <= N; i++)
		cin >> T[i] >> P[i];
	cout << dp(1, 1);
	return 0;
}